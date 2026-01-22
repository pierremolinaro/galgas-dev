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
  GGS_string var_currentNode_5048 = GGS_string ("P0start") ;
  GGS_rowList temp_0 = GGS_rowList::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS__32_stringlist temp_1 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_1.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_currentNode_5048, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_0.plusPlusAssignOperation (GGS_rowList_2E_element::init_21_ (temp_1, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS_rowList var_rowArray_5087 = temp_0 ;
  GGS_string var_arrows_5155 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_5181 = GGS_string ("--") ;
  GGS_uint var_column_5211 = GGS_uint (uint32_t (1U)) ;
  GGS_uint var_unusedMaxUsedRowIndex_5234 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_2 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5277 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_5277.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5277.current_mInstruction (HERE).ptr (), var_rowArray_5087, GGS_uint (uint32_t (0U)), var_column_5211, var_currentNode_5048, var_arrowStyle_5181, var_arrows_5155, var_unusedMaxUsedRowIndex_5234, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 124)) ;
    enumerator_5277.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_5675 ;
  {
  extensionSetter_appendRow (var_rowArray_5087, GGS_string ("[lastPoint] ()"), GGS_uint (uint32_t (0U)), var_column_5211, var_lastNodeName_5675, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)) ;
  }
  var_arrows_5155.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_5048, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (var_lastNodeName_5675, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_location var_loc_5795 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)).add_operation (function_escapeForTex (var_loc_5795.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).add_operation (function_escapeForTex (var_loc_5795.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)) ;
  DownEnumerator_rowList enumerator_6201 (var_rowArray_5087) ;
  while (enumerator_6201.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 149)) ;
    UpEnumerator__32_stringlist enumerator_6273 (enumerator_6201.current_columns (HERE)) ;
    while (enumerator_6273.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_6273.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_6273.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (enumerator_6273.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
      }
      enumerator_6273.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 157)) ;
    enumerator_6201.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_5155, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 162)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3305 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3305.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3305.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
    enumerator_3305.gotoNextObject () ;
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
  GGS_formalParameterSignature var_routineSignature_4285 ;
  GGS_bool var_isFilePrivate_4335 ;
  GGS_lstring var_routineMangledName_4381 ;
  const GGS_procCallInstructionAST temp_0 = this ;
  const GGS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4285, var_isFilePrivate_4335, var_routineMangledName_4381, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
  GGS_lstring var_usefulnessName_4434 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4381, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4434 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isFilePrivate_4335.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_procCallInstructionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_4662 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_procCallInstructionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).objectCompare (var_procDeclarationLocation_4662.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_procCallInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4662.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
        }
      }
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5420 ;
  const GGS_procCallInstructionAST temp_8 = this ;
  const GGS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GGS_string ("'").add_operation (var_routineMangledName_4381.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)).add_operation (GGS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)), var_routineSignature_4285, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5420, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_procCallInstructionForGeneration::init_21_routineMangledName_21_ (var_routineMangledName_4381, var_actualParameterListForGeneration_5420, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) ;
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
  GGS_stringlist var_parameterCppNameList_6850 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6897 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6952 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_procCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_6985 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_6985.hasCurrentObject ()) {
    GGS_string var_parameterCppName_7284 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6985.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6897, var_inputVariableList_6952, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7284, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
    var_parameterCppNameList_6850.addAssignOperation (var_parameterCppName_7284  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    enumerator_6985.gotoNextObject () ;
  }
  const GGS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
  UpEnumerator_stringlist enumerator_7502 (var_parameterCppNameList_6850) ;
  while (enumerator_7502.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7502.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)) ;
    enumerator_7502.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  }
  const GGS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
  const GGS_procCallInstructionForGeneration temp_4 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_7832 (temp_4.readProperty_mActualParameterList ()) ;
  while (enumerator_7832.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7832.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
    enumerator_7832.gotoNextObject () ;
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
  UpEnumerator_lstringlist enumerator_4123 (temp_0.readProperty_mDropList ()) ;
  while (enumerator_4123.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4123.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 95)) ;
    }
    enumerator_4123.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 79)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_4066 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 94)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 94)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_4066.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 95)).operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 96)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_4607 ;
      const GGS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_4066.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4607, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 99)) ;
      {
      const GGS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_4066.readProperty_type (), var_expression_4607.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4607, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 109)) ;
      }
      const GGS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_4066.readProperty_type (), var_selfAvailable_4066.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 116)).readProperty_string (), var_expression_4607, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfAssignmentInstructionAST temp_7 = this ;
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 121)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superInitInstructionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_3749 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3749.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3749.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 95)) ;
    enumerator_3749.gotoNextObject () ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_4465 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 108)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 108)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_selfAvailable_4465.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("instruction-super-init.galgas", 109)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = extensionGetter_definition (var_selfAvailable_4465.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 110)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-init.galgas", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          switch (extensionGetter_definition (var_selfAvailable_4465.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)).readProperty_superType ().enumValue ()) {
          case GGS_unifiedTypeMapEntry::Enumeration::invalid:
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
            {
              GGS_unifiedTypeMapElementClass_2E_weak extractedValue_4721_superType_0 ;
              extensionGetter_definition (var_selfAvailable_4465.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)).readProperty_superType ().getAssociatedValuesFor_element (extractedValue_4721_superType_0) ;
              GGS_unifiedTypeDefinition var_superTypeDefinition_4746 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) extractedValue_4721_superType_0.bang_unifiedTypeMapElementClass_2E_weak (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 113)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 113)) ;
              GGS_initializerMap var_superClassInitializerMap_4853 = var_superTypeDefinition_4746.readProperty_initializerMap () ;
              const GGS_superInitInstructionAST temp_1 = this ;
              const GGS_superInitInstructionAST temp_2 = this ;
              GGS_lstring var_signature_4927 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_1.readProperty_mActualParameterList (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 116)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
              GGS_functionSignature var_formalSignature_5085 ;
              var_superClassInitializerMap_4853.method_searchKey (var_signature_4927, var_formalSignature_5085, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 117)) ;
              UpEnumerator_typedPropertyList enumerator_5201 (var_superTypeDefinition_4746.readProperty_allTypedPropertyList ()) ;
              while (enumerator_5201.hasCurrentObject ()) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = GGS_bool (ComparisonKind::equal, enumerator_5201.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("instruction-super-init.galgas", 120)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    const GGS_superInitInstructionAST temp_4 = this ;
                    GGS_unifiedTypeMapEntry joker_5421_3 ; // Joker input parameter
                    GGS_string joker_5421_2 ; // Joker input parameter
                    GGS_string joker_5421_1 ; // Joker input parameter
                    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (enumerator_5201.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 122)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), joker_5421_3, joker_5421_2, joker_5421_1, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 121)) ;
                    }
                  }
                }
                enumerator_5201.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_5 = this ;
              extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 127)) ;
              GGS_semanticExpressionListForGeneration var_actualParameterListForGeneration_5650 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
              const GGS_superInitInstructionAST temp_6 = this ;
              UpEnumerator_functionSignature enumerator_5750 (var_formalSignature_5085) ;
              UpEnumerator_actualOutputArgumentList enumerator_5785 (temp_6.readProperty_mActualParameterList ()) ;
              while (enumerator_5750.hasCurrentObject () && enumerator_5785.hasCurrentObject ()) {
                GGS_semanticExpressionForGeneration var_expression_6161 ;
                callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5785.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5750.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6161, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 133)) ;
                {
                routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5750.current (HERE).readProperty_mFormalArgumentType (), var_expression_6161.readProperty_mResultType (), enumerator_5785.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6161, inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 142)) ;
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::notEqual, enumerator_5750.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5785.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GGS_string temp_8 ;
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_5750.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_9) {
                      temp_8 = enumerator_5750.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 150)) ;
                    }else if (GalgasBool::boolFalse == test_9) {
                      temp_8 = GGS_string::makeEmptyString () ;
                    }
                    GGS_string var_s_6513 = GGS_string ("!").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 149)) ;
                    GenericArray <FixItDescription> fixItArray10 ;
                    appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_s_6513) ;
                    inCompiler->emitSemanticError (enumerator_5785.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6513, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)), fixItArray10  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)) ;
                  }
                }
                var_actualParameterListForGeneration_5650.addAssignOperation (var_expression_6161  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 156)) ;
                enumerator_5750.gotoNextObject () ;
                enumerator_5785.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_11 = this ;
              ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superInitInstructionForGeneration::init_21__21__21__21_ (temp_11.readProperty_mInstructionLocation (), extensionGetter_initializerSignature (var_formalSignature_5085, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 161)), var_actualParameterListForGeneration_5650, var_superTypeDefinition_4746.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 159)) ;
            }
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
            {
              const GGS_superInitInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("superinit  is not available, current class has no super class"), fixItArray13  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 166)) ;
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
    inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("superinit  should be call in a class initializer"), fixItArray15  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 169)) ;
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
  GGS_stringlist var_getterArgumentCppNameList_8507 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superInitInstructionForGeneration temp_0 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8548 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8548.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8767 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8548.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8767, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 196)) ;
    var_getterArgumentCppNameList_8507.addAssignOperation (var_argumentCppName_8767  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 203)) ;
    enumerator_8548.gotoNextObject () ;
  }
  const GGS_superInitInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mSuperTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 205)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 205)) ;
  const GGS_superInitInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_2.readProperty_mSuperInitializerSignature ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 206)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 207)) ;
  UpEnumerator_stringlist enumerator_9043 (var_getterArgumentCppNameList_8507) ;
  while (enumerator_9043.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_9043.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 209)) ;
    enumerator_9043.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)) COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)).add_operation (GGS_string (") ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)) ;
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
  GGS_semanticExpressionForGeneration var_locationExpression_4970 ;
  GGS_semanticExpressionForGeneration var_messageExpression_4998 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_5025 ;
  {
  const GGS_warningInstructionAST temp_0 = this ;
  const GGS_warningInstructionAST temp_1 = this ;
  const GGS_warningInstructionAST temp_2 = this ;
  const GGS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4970, var_messageExpression_4998, var_fixitListForGeneration_5025, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
  }
  const GGS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_warningInstructionForGeneration::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4970, var_messageExpression_4998, var_fixitListForGeneration_5025, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120)) ;
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
  GGS_string var_receiverCppVarName_6336 ;
  const GGS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6336, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  GGS_string var_messageCppVarName_6544 ;
  const GGS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6544, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)) ;
  GGS_string var_fixItArrayCppName_6794 ;
  const GGS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6794, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 159)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) ;
  }
  const GGS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GGS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (var_receiverCppVarName_6336, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (var_messageCppVarName_6544, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (var_fixItArrayCppName_6794, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logInstructionAST temp_0 = this ;
  UpEnumerator_logListAST enumerator_4605 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_4605.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4605.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    enumerator_4605.gotoNextObject () ;
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
  UpEnumerator_logListAST enumerator_5318 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_5318.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_5652 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5318.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5652, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 143)) ;
    ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_logInstructionForGeneration::init_21__21_ (enumerator_5318.current_mLogMessage (HERE), var_expression_5652, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 153)) ;
    enumerator_5318.gotoNextObject () ;
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
  GGS_string var_logVar_6746 ;
  const GGS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6746, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 178)) ;
  const GGS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_logVar_6746.add_operation (GGS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 185)) ;
  const GGS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 186)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
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
  GGS_unifiedTypeMapEntry var_receiverType_6428 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_6447 ; // Joker input parameter
  GGS_string joker_6456 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_6428, joker_6447, joker_6456, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 175)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_6473 = var_receiverType_6428 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_assignmentInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_propertyMap_6557 = extensionGetter_definition (var_targetType_6473, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 183)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_6663 ;
      GGS_bool var_isConstant_6682 ;
      const GGS_assignmentInstructionAST temp_3 = this ;
      var_propertyMap_6557.method_searchKey (temp_3.readProperty_mOptionalProperty (), var_accessControl_6663, var_isConstant_6682, var_targetType_6473, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 184)) ;
      const GGS_assignmentInstructionAST temp_4 = this ;
      extensionMethod_checkSetAccess (var_accessControl_6663, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_4.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 185)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_6682.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_assignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 187)) ;
        }
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expression_7246 ;
  const GGS_assignmentInstructionAST temp_8 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_8.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6473, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7246, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 191)) ;
  {
  const GGS_assignmentInstructionAST temp_9 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_6473, var_expression_7246.readProperty_mResultType (), temp_9.readProperty_mInstructionLocation (), var_expression_7246, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
  }
  GGS_string var_targetVariableCppName_7505 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7543 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_assignmentInstructionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_7713 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_7713, var_targetVariableCppName_7505, var_nameForCheckingFormalParameterUsing_7543, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 211)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_assignmentInstructionAST temp_13 = this ;
    GGS_unifiedTypeMapEntry joker_7899 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_7899, var_targetVariableCppName_7505, var_nameForCheckingFormalParameterUsing_7543, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
    }
  }
  const GGS_assignmentInstructionAST temp_14 = this ;
  const GGS_assignmentInstructionAST temp_15 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_6428, var_targetType_6473, var_targetVariableCppName_7505, var_nameForCheckingFormalParameterUsing_7543, temp_14.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7246, temp_15.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 226)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 255)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_9727 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas", 267)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_9727.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
        }
      }
      GGS_propertyMap var_propertyMap_9972 = extensionGetter_definition (var_selfAvailable_9727.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_10095 ;
      GGS_unifiedTypeMapEntry var_targetType_10111 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_10087 ; // Joker input parameter
      var_propertyMap_9972.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_10087, var_isConstant_10095, var_targetType_10111, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_10095.operator_and (var_selfAvailable_9727.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas", 273)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 273)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 274)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10303 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 277)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_propertyMap var_propertyMap_10568 = extensionGetter_definition (var_targetType_10111, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_10676 ;
          GGS_bool var_isConstant_10695 ;
          const GGS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10568.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10676, var_isConstant_10695, var_targetType_10111, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
          const GGS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10676, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = var_isConstant_10695.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 284)) ;
            }
          }
        }
      }
      GGS_semanticExpressionForGeneration var_expression_11296 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10111, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11296, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 288)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      GGS_unifiedTypeMapEntry joker_11452_3 ; // Joker input parameter
      GGS_string joker_11452_2 ; // Joker input parameter
      GGS_string joker_11452_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_17.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 299)), temp_18.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_11452_3, joker_11452_2, joker_11452_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 298)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10111, var_expression_11296.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_11296, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 302)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_9727.readProperty_type (), var_targetType_10111, var_targetVariableCppName_10303, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11296, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    GenericArray <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 314)) ;
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
  GGS_string var_sourceVar_13498 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13498, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 342)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mOptionalProperty ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_5.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)).add_operation (var_sourceVar_13498, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 353)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_assignmentInstructionForGeneration temp_7 = this ;
      test_6 = extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas", 354)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool var_isReference_13930 ;
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)).readProperty_typeKind ().method_extractClassType (var_isReference_13930, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)) ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_isReference_13930.boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_assignmentInstructionForGeneration temp_10 = this ;
            ioArgument_ioGeneratedCode.plusAssignOperation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
            const GGS_assignmentInstructionForGeneration temp_11 = this ;
            ioArgument_ioGeneratedCode.plusAssignOperation(temp_11.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)) ;
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (var_sourceVar_13498, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 359)) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          const GGS_assignmentInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_12.readProperty_mTargetCppName ().add_operation (GGS_string (".setter_setProperty_5F_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 361)) ;
          const GGS_assignmentInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_13.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 362)).getter_capitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 362)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (var_sourceVar_13498, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 363)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_assignmentInstructionForGeneration temp_14 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_14.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 367)) ;
      const GGS_assignmentInstructionForGeneration temp_15 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_15.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 368)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_13498, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 369)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 369)) ;
    }
  }
  {
  const GGS_assignmentInstructionForGeneration temp_16 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_16.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 371)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 228)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator_switchBranchesAST enumerator_8021 (temp_1.readProperty_mBranches ()) ;
  while (enumerator_8021.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8021.current (HERE).readProperty_mInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 230)) ;
    enumerator_8021.gotoNextObject () ;
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
  GGS_semanticExpressionForGeneration var_switchExpression_8981 ;
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 246)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_8981, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_9073 = extensionGetter_definition (var_switchExpression_8981.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 253)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_8981.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 253)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_9199 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      {
      extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)) ;
      }
      GGS_switchBranchesForGeneration var_switchBranchesForGeneration_9356 = GGS_switchBranchesForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_switchInstructionAST temp_2 = this ;
      UpEnumerator_switchBranchesAST enumerator_9415 (temp_2.readProperty_mBranches ()) ;
      while (enumerator_9415.hasCurrentObject ()) {
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 260)) ;
        }
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9517 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_9597 (enumerator_9415.current (HERE).readProperty_mSwitchConstantList ()) ;
        while (enumerator_9597.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_9073.readProperty_constantMap ().getter_hasKey (enumerator_9597.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_9199.getter_hasKey (enumerator_9597.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_9597.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9597.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_9199.plusPlusAssignOperation (enumerator_9597.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_10055 ;
              GGS_uint joker_10047 ; // Joker input parameter
              var_enumType_9073.readProperty_constantMap ().method_searchKey (enumerator_9597.current (HERE), joker_10047, var_associatedTypeList_10055, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10055.getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_9415.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_9597.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_9597.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_10055.getter_count (SOURCE_FILE ("instruction-switch.galgas", 273)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_9415.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 273)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_9597.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9597.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_10055.getter_count (SOURCE_FILE ("instruction-switch.galgas", 276)).objectCompare (enumerator_9415.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 276)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10055.getter_count (SOURCE_FILE ("instruction-switch.galgas", 280)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_9597.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9597.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (var_associatedTypeList_10055.getter_count (SOURCE_FILE ("instruction-switch.galgas", 278)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)), fixItArray13  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_10897 (var_associatedTypeList_10055) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_10943 (enumerator_9415.current (HERE).readProperty_mAssociatedValuesExtraction ()) ;
                    GGS_uint index_10879 (uint32_t (0)) ;
                    while (enumerator_10897.hasCurrentObject () && enumerator_10943.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_10943.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_10897.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_10943.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_10943.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10897.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_11449 = GGS_string ("extractedValue_").add_operation (enumerator_10943.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).add_operation (enumerator_10943.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (index_10879.getter_string (SOURCE_FILE ("instruction-switch.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)) ;
                      var_extractedAssociatedValuesForGeneration_9517.addAssignOperation (enumerator_10897.current (HERE).readProperty_type (), var_cppName_11449, enumerator_10897.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_10943.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          GalgasBool test_18 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_18) {
                            test_18 = enumerator_10943.current (HERE).readProperty_mMarkedAsUnused ().boolEnum () ;
                            if (GalgasBool::boolTrue == test_18) {
                              {
                              extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10943.current (HERE).readProperty_mExtractedValueName (), enumerator_10897.current (HERE).readProperty_type (), var_cppName_11449, var_cppName_11449, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_18) {
                            {
                            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10943.current (HERE).readProperty_mExtractedValueName (), enumerator_10897.current (HERE).readProperty_type (), var_cppName_11449, var_cppName_11449, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
                            }
                          }
                        }
                      }
                      enumerator_10897.gotoNextObject () ;
                      enumerator_10943.gotoNextObject () ;
                      index_10879.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_9597.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_9597.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (extensionGetter_definition (var_switchExpression_8981.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 319)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 319)), fixItArray19  COMMA_SOURCE_FILE ("instruction-switch.galgas", 317)) ;
          }
          enumerator_9597.gotoNextObject () ;
        }
        GGS_semanticInstructionListForGeneration var_instructionList_13190 ;
        {
        routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_9415.current (HERE).readProperty_mInstructions (), ioArgument_ioVariableMap, var_instructionList_13190, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
        }
        {
        extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9415.current (HERE).readProperty_mEndOfBranch (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 334)) ;
        }
        var_switchBranchesForGeneration_9356.addAssignOperation (enumerator_9415.current (HERE).readProperty_mSwitchConstantList (), var_extractedAssociatedValuesForGeneration_9517, enumerator_9415.current (HERE).readProperty_mEndOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 338)), var_instructionList_13190  COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)) ;
        enumerator_9415.gotoNextObject () ;
      }
      {
      const GGS_switchInstructionAST temp_20 = this ;
      extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 341)) ;
      }
      GGS_stringset var_forgottenConstants_13615 = var_enumType_9073.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)).substract_operation (var_constantsNamedInSwitchInstruction_9199, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_13615.getter_count (SOURCE_FILE ("instruction-switch.galgas", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_13763 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_13783 (var_forgottenConstants_13615) ;
          while (enumerator_13783.hasCurrentObject ()) {
            var_s_13763.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_13783.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 347)) ;
            enumerator_13783.gotoNextObject () ;
          }
          const GGS_switchInstructionAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13763, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 350)), fixItArray23  COMMA_SOURCE_FILE ("instruction-switch.galgas", 349)) ;
        }
      }
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_switchInstructionForGeneration::init_21__21__21_ (var_switchExpression_8981.readProperty_mResultType (), var_switchExpression_8981, var_switchBranchesForGeneration_9356, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 353)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_switchInstructionAST temp_24 = this ;
    GenericArray <FixItDescription> fixItArray25 ;
    inCompiler->emitSemanticError (temp_24.readProperty_mEndOfSwitchExpression (), GGS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8981.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 361)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 360)).add_operation (GGS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 361)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 359)) ;
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
  GGS_string var_switchVar_16401 ;
  const GGS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_16401, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVar_16401, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)) ;
  const GGS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 415)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 416)) ;
  const GGS_switchInstructionForGeneration temp_2 = this ;
  UpEnumerator_switchBranchesForGeneration enumerator_16716 (temp_2.readProperty_mBranches ()) ;
  while (enumerator_16716.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_16762 (enumerator_16716.current (HERE).readProperty_mSwitchConstantList ()) ;
    while (enumerator_16762.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)) ;
      const GGS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 421)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16762.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 422)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 423)) ;
      enumerator_16762.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 425)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_16716.current (HERE).readProperty_mInstructions ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 426)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 427)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_16716.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 428)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17312 (enumerator_16716.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17312.hasCurrentObject ()) {
              extensionMethod_addHeaderFileName (enumerator_17312.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 430)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17312.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_17312.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)) ;
              enumerator_17312.gotoNextObject () ;
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVar_16401, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)) ;
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16716.current (HERE).readProperty_mSwitchConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 435)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 435)) ;
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17815 (enumerator_16716.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17815.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17815.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 437)) ;
              enumerator_17815.gotoNextObject () ;
              if (enumerator_17815.hasCurrentObject ()) {
                ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 438)) ;
              }
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 440)) ;
          }
        }
        {
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_16716.current (HERE).readProperty_mInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 442)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 450)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 452)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 453)) ;
    }
    enumerator_16716.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 455)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3936 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3936.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3936.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 98)) ;
    enumerator_3936.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_selfType_4658 ;
  switch (constinArgument_inAnalysisContext.readProperty_selfAvailability ().enumValue ()) {
  case GGS_selfAvailability::Enumeration::invalid:
    break ;
  case GGS_selfAvailability::Enumeration::enum_none:
    {
      const GGS_superMethodCallInstructionAST temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mMethodName ().readProperty_location (), GGS_string ("'super' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 114)) ;
      var_selfType_4658.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_selfAvailability::Enumeration::enum_available:
    {
      GGS_unifiedTypeMapEntry extractedValue_4855_type_0 ;
      GGS_selfMutability extractedValue_4883_selfMutability_1 ;
      constinArgument_inAnalysisContext.readProperty_selfAvailability ().getAssociatedValuesFor_available (extractedValue_4855_type_0, extractedValue_4883_selfMutability_1) ;
      var_selfType_4658 = extractedValue_4855_type_0 ;
    }
    break ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_4658, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 119)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-method-call.galgas", 119)).operator_not (SOURCE_FILE ("instruction-super-method-call.galgas", 119)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_superMethodCallInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), GGS_string ("self type is not a class"), fixItArray4  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 120)) ;
    }
  }
  GGS_formalParameterSignature var_routineSignature_5232 ;
  GGS_bool var_hasCompilerArgument_5269 ;
  GGS_string var_errorMessage_5309 ;
  const GGS_superMethodCallInstructionAST temp_5 = this ;
  GGS_methodKind joker_5206 ; // Joker input parameter
  GGS_location joker_5255 ; // Joker input parameter
  GGS_methodQualifier joker_5295 ; // Joker input parameter
  extensionGetter_definition (var_selfType_4658, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 123)).readProperty_instanceMethodMap ().method_searchKey (temp_5.readProperty_mMethodName (), joker_5206, var_routineSignature_5232, joker_5255, var_hasCompilerArgument_5269, joker_5295, var_errorMessage_5309, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 123)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5309.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_superMethodCallInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5309, fixItArray8  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 133)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5859 ;
  const GGS_superMethodCallInstructionAST temp_9 = this ;
  const GGS_superMethodCallInstructionAST temp_10 = this ;
  const GGS_superMethodCallInstructionAST temp_11 = this ;
  extensionMethod_analyzeRoutineArguments (temp_9.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_10.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_11.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 142)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 142)), var_routineSignature_5232, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5859, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 136)) ;
  GGS_unifiedTypeMapEntry var_baseType_5956 = var_selfType_4658 ;
  GGS_bool var_searching_5984 = GGS_bool (true) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-super-method-call.galgas", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 152)).isValid ()) {
        uint32_t variant_6041 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 152)).uintValue () ;
        bool loop_6041 = true ;
        while (loop_6041) {
          loop_6041 = var_searching_5984.isValid () ;
          if (loop_6041) {
            loop_6041 = var_searching_5984.boolValue () ;
          }
          if (loop_6041 && (0 == variant_6041)) {
            loop_6041 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-super-method-call.galgas", 152)) ;
          }
          if (loop_6041) {
            variant_6041 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 153)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-super-method-call.galgas", 153)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_searching_5984 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_superMethodCallInstructionAST temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_5956 = extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 157)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_5984 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_superMethodCallInstructionAST temp_16 = this ;
  const GGS_superMethodCallInstructionAST temp_17 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superMethodCallInstructionForGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mMethodName ().readProperty_string (), var_actualParameterListForGeneration_5859, var_hasCompilerArgument_5269, var_baseType_5956, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 165)) ;
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
  GGS_stringlist var_parameterCppNameList_7888 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_7934 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_7988 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8032 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8032.hasCurrentObject ()) {
    GGS_string var_parameterCppName_8277 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8032.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7934, var_inputVariableList_7988, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8277, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 203)) ;
    var_parameterCppNameList_7888.addAssignOperation (var_parameterCppName_8277  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 204)) ;
    enumerator_8032.gotoNextObject () ;
  }
  const GGS_superMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_superMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_1.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).add_operation (temp_2.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)) ;
  const GGS_superMethodCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_3.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)) ;
  const GGS_superMethodCallInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::method_").add_operation (temp_4.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)) ;
  UpEnumerator_stringlist enumerator_8723 (var_parameterCppNameList_7888) ;
  while (enumerator_8723.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_8723.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 211)) ;
    enumerator_8723.gotoNextObject () ;
    if (enumerator_8723.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 212)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_7888.getter_count (SOURCE_FILE ("instruction-super-method-call.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_superMethodCallInstructionForGeneration temp_7 = this ;
        test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 216)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 216)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 218)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 221)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 221)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 223)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 225)) ;
    }
  }
  const GGS_superMethodCallInstructionForGeneration temp_10 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)) ;
  const GGS_superMethodCallInstructionForGeneration temp_11 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_9443 (temp_11.readProperty_mActualParameterList ()) ;
  while (enumerator_9443.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_9443.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 230)) ;
    enumerator_9443.gotoNextObject () ;
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
  GGS_ifTestListForGeneration var_testListForGeneration_5762 ;
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mLoopExpression (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_5762, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 124)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 133)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_6310 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_1.readProperty_mFirstInstructions (), temp_2.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6310, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_6756 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_3 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mSecondInstructions (), temp_4.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6756, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 149)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 163)) ;
  }
  const GGS_loopInstructionWithoutVariantAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithoutVariantForGeneration::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_first_5F_instructionList_6310, var_testListForGeneration_5762, var_second_5F_instructionList_6756, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 165)) ;
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
  GGS_string var_loopVar_8259 = GGS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_8259, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_loopVar_8259, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  }
  GGS_string var_loopExpressionVar_8879 ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  extensionMethod_generateInstruction (temp_2.readProperty_mLoopExpression (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_loopExpressionVar_8879, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_8259.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (var_loopExpressionVar_8879, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (GGS_string (" == GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_8259, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)) ;
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)) ;
  }
  GGS_bool var_first_9458 = GGS_bool (true) ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_4 = this ;
  UpEnumerator_ifTestListForGeneration enumerator_9480 (temp_4.readProperty_mLoopExpression ()) ;
  while (enumerator_9480.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_first_9458.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_first_9458 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 231)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopVar_8259, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 232)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 232)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 234)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 235)) ;
    }
    enumerator_9480.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 237)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 238)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 239)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3804 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3804.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3804.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
    enumerator_3804.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_type_4575 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GGS_formalParameterSignature var_routineSignature_4729 ;
  GGS_bool var_hasCompilerArgument_4751 ;
  const GGS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4575, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)).readProperty_classMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4729, var_hasCompilerArgument_4751, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5190 ;
  const GGS_typeMethodCallInstructionAST temp_2 = this ;
  const GGS_typeMethodCallInstructionAST temp_3 = this ;
  const GGS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)).add_operation (GGS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)), var_routineSignature_4729, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5190, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GGS_typeMethodCallInstructionAST temp_5 = this ;
  const GGS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_typeMethodCallInstructionForGeneration::init_21__21__21__21_ (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5190, var_hasCompilerArgument_4751, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
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
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
  GGS_stringlist var_parameterCppNameList_6358 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6402 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6454 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_typeMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_6496 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6496.hasCurrentObject ()) {
    GGS_string var_parameterCppName_6789 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6496.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6402, var_inputVariableList_6454, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6789, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
    var_parameterCppNameList_6358.addAssignOperation (var_parameterCppName_6789  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
    enumerator_6496.gotoNextObject () ;
  }
  const GGS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (GGS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)) ;
  UpEnumerator_stringlist enumerator_7066 (var_parameterCppNameList_6358) ;
  while (enumerator_7066.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7066.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 166)) ;
    enumerator_7066.gotoNextObject () ;
    if (enumerator_7066.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 167)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) ;
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6358.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 171)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6358.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 176)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 176)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)) ;
    }
  }
  const GGS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 180)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
  const GGS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)) ;
  const GGS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 212)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 276)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas", 286)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 283)) ;
  outArgument_outFixitListForGeneration = GGS_fixitListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_fixitListAST enumerator_10782 (constinArgument_inFixitListAST) ;
  while (enumerator_10782.hasCurrentObject ()) {
    switch (enumerator_10782.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 297))  COMMA_SOURCE_FILE ("instruction-error.galgas", 297)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_10926_exp_0 ;
        GGS_location extractedValue_10930_errorLocation_1 ;
        enumerator_10782.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_10926_exp_0, extractedValue_10930_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_11240 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10926_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11240, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_bool test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_11240.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_1.boolEnum ()) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_11240.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_2 = test_1 ;
          if (GalgasBool::boolTrue == test_2.boolEnum ()) {
            test_2 = GGS_bool (ComparisonKind::notEqual, var_expression_11240.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_3 = test_2 ;
          if (GalgasBool::boolTrue == test_3.boolEnum ()) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_expression_11240.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_10930_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11240.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 312)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItReplace (var_expression_11240  COMMA_SOURCE_FILE ("instruction-error.galgas", 315))  COMMA_SOURCE_FILE ("instruction-error.galgas", 315)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_11902_exp_0 ;
        GGS_location extractedValue_11906_errorLocation_1 ;
        enumerator_10782.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_11902_exp_0, extractedValue_11906_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_12216 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11902_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12216, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 317)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_12216.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (ComparisonKind::notEqual, var_expression_12216.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_7 = test_6 ;
          if (GalgasBool::boolTrue == test_7.boolEnum ()) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_expression_12216.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_8 = test_7 ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_expression_12216.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_11906_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_12216.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 330)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_12216  COMMA_SOURCE_FILE ("instruction-error.galgas", 333))  COMMA_SOURCE_FILE ("instruction-error.galgas", 333)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_12882_exp_0 ;
        GGS_location extractedValue_12886_errorLocation_1 ;
        enumerator_10782.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_12882_exp_0, extractedValue_12886_errorLocation_1) ;
        GGS_semanticExpressionForGeneration var_expression_13196 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_12882_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13196, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 335)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_bool test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_13196.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (GalgasBool::boolTrue == test_11.boolEnum ()) {
            test_11 = GGS_bool (ComparisonKind::notEqual, var_expression_13196.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GGS_bool test_12 = test_11 ;
          if (GalgasBool::boolTrue == test_12.boolEnum ()) {
            test_12 = GGS_bool (ComparisonKind::notEqual, var_expression_13196.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GGS_bool test_13 = test_12 ;
          if (GalgasBool::boolTrue == test_13.boolEnum ()) {
            test_13 = GGS_bool (ComparisonKind::notEqual, var_expression_13196.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_12886_errorLocation_1, GGS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_13196.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).add_operation (GGS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 348)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssignOperation (GGS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_13196  COMMA_SOURCE_FILE ("instruction-error.galgas", 351))  COMMA_SOURCE_FILE ("instruction-error.galgas", 351)) ;
      }
      break ;
    }
    enumerator_10782.gotoNextObject () ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GGS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GGS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 356)) ;
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
  GGS_semanticExpressionForGeneration var_locationExpression_14972 ;
  GGS_semanticExpressionForGeneration var_messageExpression_15000 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_15027 ;
  {
  const GGS_errorInstructionAST temp_0 = this ;
  const GGS_errorInstructionAST temp_1 = this ;
  const GGS_errorInstructionAST temp_2 = this ;
  const GGS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_14972, var_messageExpression_15000, var_fixitListForGeneration_15027, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 373)) ;
  }
  GGS_stringlist var_builtVariableCppNameList_15091 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_errorInstructionAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_15140 (temp_4.readProperty_mBuiltVariableList ()) ;
  while (enumerator_15140.hasCurrentObject ()) {
    GGS_string var_varCppName_15236 ;
    {
    GGS_unifiedTypeMapEntry joker_15228 ; // Joker input parameter
    GGS_string joker_15247 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15140.current_mValue (HERE), joker_15228, var_varCppName_15236, joker_15247, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 391)) ;
    }
    var_builtVariableCppNameList_15091.addAssignOperation (var_varCppName_15236  COMMA_SOURCE_FILE ("instruction-error.galgas", 392)) ;
    enumerator_15140.gotoNextObject () ;
  }
  const GGS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_errorInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_locationExpression_14972, var_messageExpression_15000, var_builtVariableCppNameList_15091, var_fixitListForGeneration_15027, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-error.galgas", 395)) ;
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
  GGS_string var_receiverCppVarName_18655 ;
  const GGS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18655, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
  GGS_string var_messageCppVarName_18864 ;
  const GGS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_18864, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)) ;
  GGS_string var_fixItArrayCppName_19122 ;
  const GGS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19122, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 490)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) ;
  }
  const GGS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GGS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (var_receiverCppVarName_18655, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (var_messageCppVarName_18864, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (var_fixItArrayCppName_19122, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 500)) ;
  const GGS_errorInstructionForGeneration temp_4 = this ;
  UpEnumerator_stringlist enumerator_19496 (temp_4.readProperty_mBuiltVariableCppNameList ()) ;
  while (enumerator_19496.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19496.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 507)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_19496.current_mValue (HERE).add_operation (GGS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 508)) ;
    enumerator_19496.gotoNextObject () ;
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
  UpEnumerator_actualParameterListAST enumerator_4214 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_4214.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4214.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 100)) ;
    enumerator_4214.gotoNextObject () ;
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
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_5347 ;
  const GGS_methodCallInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 122)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5347, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119)) ;
  GGS_methodKind var_kind_5516 ;
  GGS_formalParameterSignature var_routineSignature_5532 ;
  GGS_bool var_hasCompilerArgument_5569 ;
  GGS_string var_errorMessage_5609 ;
  const GGS_methodCallInstructionAST temp_4 = this ;
  GGS_location joker_5555 ; // Joker input parameter
  GGS_methodQualifier joker_5595 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5347.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)).readProperty_instanceMethodMap ().method_searchKey (temp_4.readProperty_mMethodName (), var_kind_5516, var_routineSignature_5532, joker_5555, var_hasCompilerArgument_5569, joker_5595, var_errorMessage_5609, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5609.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_methodCallInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5609, fixItArray7  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 139)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_6159 ;
  const GGS_methodCallInstructionAST temp_8 = this ;
  const GGS_methodCallInstructionAST temp_9 = this ;
  const GGS_methodCallInstructionAST temp_10 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_10.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)), var_routineSignature_5532, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6159, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 142)) ;
  GGS_unifiedTypeMapEntry var_baseType_6256 = var_receiverExpression_5347.readProperty_mResultType () ;
  GGS_bool var_searching_6306 = GGS_bool (true) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 157)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).isValid ()) {
        uint32_t variant_6363 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).uintValue () ;
        bool loop_6363 = true ;
        while (loop_6363) {
          loop_6363 = var_searching_6306.isValid () ;
          if (loop_6363) {
            loop_6363 = var_searching_6306.boolValue () ;
          }
          if (loop_6363 && (0 == variant_6363)) {
            loop_6363 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
          }
          if (loop_6363) {
            variant_6363 -= 1 ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = extensionGetter_definition (var_baseType_6256, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 159)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_searching_6306 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_methodCallInstructionAST temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_6256, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_instanceMethodMap ().getter_hasKey (temp_14.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_6256 = extensionGetter_definition (var_baseType_6256, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_6306 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_methodCallInstructionAST temp_15 = this ;
  const GGS_methodCallInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_methodCallInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_15.readProperty_mInstructionLocation (), var_receiverExpression_5347.readProperty_mResultType (), var_receiverExpression_5347, temp_16.readProperty_mMethodName ().readProperty_string (), var_kind_5516, var_actualParameterListForGeneration_6159, var_hasCompilerArgument_5569, var_baseType_6256, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
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
  GGS_string var_receiverCppName_8436 ;
  const GGS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8436 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
  }
  GGS_stringlist var_parameterCppNameList_8525 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_8569 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_8621 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_methodCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8663 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_8663.hasCurrentObject ()) {
    GGS_string var_parameterCppName_8906 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8663.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8569, var_inputVariableList_8621, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8906, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
    var_parameterCppNameList_8525.addAssignOperation (var_parameterCppName_8906  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
    enumerator_8663.gotoNextObject () ;
  }
  const GGS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_methodCallInstructionForGeneration temp_3 = this ;
      const GGS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_methodCallInstructionForGeneration temp_7 = this ;
          const GGS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_8436.add_operation (GGS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_9822 (var_parameterCppNameList_8525) ;
  while (enumerator_9822.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_9822.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)) ;
    enumerator_9822.gotoNextObject () ;
    if (enumerator_9822.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 238)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_8525.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 240)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 244)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)) ;
    }
  }
  const GGS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)) ;
  const GGS_methodCallInstructionForGeneration temp_17 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_10504 (temp_17.readProperty_mActualParameterList ()) ;
  while (enumerator_10504.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10504.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 256)) ;
    enumerator_10504.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 137)) ;
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
  GGS_semanticExpressionForGeneration var_expression_6340 ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 156)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6340, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 153)) ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_6389 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 163)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 163)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 163)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 163)) ;
  {
  const GGS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GGS_bool (true), var_expression_6340.readProperty_mResultType (), var_targetVariableCppName_6389, var_targetVariableCppName_6389, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 164)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_6340.readProperty_mResultType (), GGS_bool (false), var_targetVariableCppName_6389, var_expression_6340, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_7328 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_7328, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 185)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_8004 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 201)) ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8071 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 202)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 202)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 202)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 202)) ;
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_8004, var_targetVariableCppName_8071, var_targetVariableCppName_8071, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 203)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (var_targetType_8004, var_targetVariableCppName_8071, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 210)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 234)) ;
  const GGS_localVariableDeclarationForGeneration temp_1 = this ;
  const GGS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)) ;
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
  GGS_semanticExpressionForGeneration var_variantExpression_6599 ;
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6599, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_variantExpression_6599.readProperty_mResultType (), var_variantExpression_6599.readProperty_mLocation (), var_variantExpression_6599, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GGS_semanticExpressionForGeneration var_loopExpression_7133 ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7133, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_loopExpression_7133.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_loopInstructionWithVariantAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GGS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (extensionGetter_definition (var_loopExpression_7133.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 181)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_8018 ;
  {
  const GGS_loopInstructionWithVariantAST temp_5 = this ;
  const GGS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_8018, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 183)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_8436 ;
  {
  const GGS_loopInstructionWithVariantAST temp_7 = this ;
  const GGS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8436, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 197)) ;
  }
  {
  const GGS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 211)) ;
  }
  const GGS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithVariantForGeneration::init_21__21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6599, var_first_5F_instructionList_8018, var_loopExpression_7133, var_second_5F_instructionList_8436, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213)) ;
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
  GGS_string var_variantCppVarName_9974 ;
  const GGS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9974, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_variantCppVarName_9974, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GGS_string var_variantVar_10119 = GGS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("uint32_t ").add_operation (var_variantVar_10119, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (var_variantCppVarName_9974, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GGS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  const GGS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GGS_string var_loopVar_10307 = GGS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GGS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  {
  const GGS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  }
  GGS_string var_loopExpressionVar_10878 ;
  const GGS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_10307.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GGS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_variantVar_10119, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GGS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GGS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (var_loopVar_10307, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_variantVar_10119, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (GGS_string (" -= 1 ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  {
  const GGS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 290)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 92)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxSendInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 93)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_5018 ;
  const GGS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5018, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expression_5018.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_syntaxSendInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GGS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_syntaxSendInstructionForGeneration::init_21__21_ (temp_7.readProperty_mInstructionLocation (), var_expression_5018, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
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
  GGS_string var_sourceVar_6543 ;
  const GGS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6543, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_sourceVar_6543, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".appendString (").add_operation (var_sourceVar_6543, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)) ;
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
      GGS_unifiedTypeMapEntry joker_6388 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6388, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 163)) ;
      }
    }
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 165)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_7302 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
  const GGS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GGS_string var_targetVariableCppName_7377 = GGS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  {
  const GGS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7302, var_targetVariableCppName_7377, var_targetVariableCppName_7377, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 182)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_undefinedLocalConstantDeclarationForGeneration::init_21__21_ (var_targetType_7302, var_targetVariableCppName_7377, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 189)) ;
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
  GGS_semanticExpressionForGeneration var_expression_8771 ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 208)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8771, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8820 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)).getter_string (SOURCE_FILE ("instruction-let.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)) ;
  {
  const GGS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8771.readProperty_mResultType (), var_targetVariableCppName_8820, var_targetVariableCppName_8820, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 217)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_8771.readProperty_mResultType (), GGS_bool (true), var_targetVariableCppName_8820, var_expression_8771, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_10013 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
  GGS_semanticExpressionForGeneration var_expression_10384 ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10013, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10384, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GGS_string var_targetVariableCppName_10433 = GGS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)).getter_string (SOURCE_FILE ("instruction-let.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_10013, var_targetVariableCppName_10433, var_targetVariableCppName_10433, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 255)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GGS_bool (true), var_targetType_10013, var_targetVariableCppName_10433, var_targetVariableCppName_10433, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 262)) ;
    }
  }
  {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10013, var_expression_10384.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10384, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 271)) ;
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_targetType_10013, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10433, var_expression_10384, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 273)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 320)) ;
  GGS_string var_sourceVar_13642 ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13642, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 321)) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (var_sourceVar_13642, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 366)) ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_16687 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_16687.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16687.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 368)) ;
    enumerator_16687.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 377)) ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_17123 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_17123.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_17123.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)) ;
    enumerator_17123.gotoNextObject () ;
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
  GGS_lstring var_usefulnessName_17854 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 395)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_17854 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 396)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_18179 ;
  GGS_bool var_hasTranslateFeature_18217 ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  GGS_bool joker_18199 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18179, joker_18199, var_hasTranslateFeature_18217, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 398)) ;
  GGS_formalParameterSignature var_labelSignature_18345 ;
  const GGS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18179.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18345, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 405)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_18788 ;
  const GGS_grammarInFileInstructionAST temp_3 = this ;
  const GGS_grammarInFileInstructionAST temp_4 = this ;
  const GGS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)), var_labelSignature_18345, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18788, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 410)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_19144 ;
  const GGS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 426)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_19144, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_19144.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInFileInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_19144.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 434)) ;
    }
  }
  const GGS_grammarInFileInstructionAST temp_10 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_19613 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)) ;
  GGS_stringlist var_assignementList_19752 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18217, var_syntaxDirectedTranslationResultVarName_19613, var_assignementList_19752, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 441)) ;
  const GGS_grammarInFileInstructionAST temp_12 = this ;
  const GGS_grammarInFileInstructionAST temp_13 = this ;
  const GGS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceFileForGeneration::init_21__21__21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_19144, var_actualParameterListForGeneration_18788, var_hasTranslateFeature_18217, var_assignementList_19752, var_syntaxDirectedTranslationResultVarName_19613, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
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
  GGS_lstring var_grammarUsefulnessName_20889 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 472)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_20889 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_21228 ;
  GGS_bool var_hasTranslateFeature_21266 ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  GGS_bool joker_21248 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21228, joker_21248, var_hasTranslateFeature_21266, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 475)) ;
  GGS_formalParameterSignature var_labelSignature_21394 ;
  const GGS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21228.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21394, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 482)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_21837 ;
  const GGS_grammarInStringInstructionAST temp_3 = this ;
  const GGS_grammarInStringInstructionAST temp_4 = this ;
  const GGS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)), var_labelSignature_21394, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_21837, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 487)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_22193 ;
  const GGS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 503)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_22193, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_22193.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInStringInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22193.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_nameExpression_22865 ;
  const GGS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 519)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_22865, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 516)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_nameExpression_22865.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_grammarInStringInstructionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GGS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22193.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)) ;
    }
  }
  const GGS_grammarInStringInstructionAST temp_14 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_23275 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)) ;
  GGS_stringlist var_assignementList_23414 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21266, var_syntaxDirectedTranslationResultVarName_23275, var_assignementList_23414, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 534)) ;
  const GGS_grammarInStringInstructionAST temp_16 = this ;
  const GGS_grammarInStringInstructionAST temp_17 = this ;
  const GGS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceExpressionForGeneration::init_21__21__21__21__21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_22193, var_nameExpression_22865, var_actualParameterListForGeneration_21837, var_hasTranslateFeature_21266, var_assignementList_23414, var_syntaxDirectedTranslationResultVarName_23275, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 543)) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580)) ;
  GGS_string var_sourceVar_25530 ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25530, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)) ;
  GGS_stringlist var_parameterCppNameList_25573 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_25619 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_25673 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_25717 (temp_2.readProperty_mActualParameterList ()) ;
  while (enumerator_25717.hasCurrentObject ()) {
    GGS_string var_parameterCppName_26026 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_25717.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25619, var_inputVariableList_25673, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_26026, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)) ;
    var_parameterCppNameList_25573.addAssignOperation (var_parameterCppName_26026  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 603)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_25717.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_26026.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)) ;
      }
    }
    enumerator_25717.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)) ;
    }
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)) ;
  }else if (GalgasBool::boolFalse == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (GGS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (var_sourceVar_25530, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)) ;
  UpEnumerator_stringlist enumerator_26812 (var_parameterCppNameList_25573) ;
  while (enumerator_26812.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_26812.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
    enumerator_26812.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  UpEnumerator_stringlist enumerator_27058 (temp_14.readProperty_mAssignementList ()) ;
  while (enumerator_27058.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_27058.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
    enumerator_27058.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651)) ;
  GGS_string var_sourceVar_28657 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28657, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 653)) ;
  GGS_string var_nameVar_28878 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_28878, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)) ;
  GGS_stringlist var_parameterCppNameList_28919 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_28965 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_29019 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_29063 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_29063.hasCurrentObject ()) {
    GGS_string var_parameterCppName_29379 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_29063.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_28965, var_inputVariableList_29019, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29379, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)) ;
    var_parameterCppNameList_28919.addAssignOperation (var_parameterCppName_29379  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_29063.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_29379.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)) ;
      }
    }
    enumerator_29063.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)) ;
    }
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (GGS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (var_sourceVar_28657, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)).add_operation (var_nameVar_28878, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)) ;
  UpEnumerator_stringlist enumerator_30184 (var_parameterCppNameList_28919) ;
  while (enumerator_30184.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_30184.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)) ;
    enumerator_30184.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  UpEnumerator_stringlist enumerator_30430 (temp_15.readProperty_mAssignementList ()) ;
  while (enumerator_30430.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_30430.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)) ;
    enumerator_30430.gotoNextObject () ;
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
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_15825 (temp_5.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_15825.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_15825.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
    enumerator_15825.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 501)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  const GGS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 508)).getter_string (SOURCE_FILE ("instruction-for.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 508)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptorList_18358 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 509)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 510)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 511)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 514)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_enumerationDescriptorList var_currentTypedAttributeList_18734 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)).readProperty_enumerationDescriptorList () ;
        UpEnumerator_enumerationDescriptorList enumerator_18863 (var_currentTypedAttributeList_18734) ;
        while (enumerator_18863.hasCurrentObject ()) {
          {
          const GGS_enumeratedCollectionCstListInExpAST temp_7 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (enumerator_18863.current_mEnumerationName (HERE), temp_7.readProperty_mEndOfEnumerationExpression (), inCompiler COMMA_HERE), enumerator_18863.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)).add_operation (enumerator_18863.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)).add_operation (enumerator_18863.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
          }
          enumerator_18863.gotoNextObject () ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_enumeratedCollectionCstListInExpAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 524)).objectCompare (var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 524)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_enumeratedCollectionCstListInExpAST temp_10 = this ;
          GGS_string temp_11 ;
          const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 528)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            temp_11 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_12) {
            temp_11 = GGS_string::makeEmptyString () ;
          }
          const GGS_enumeratedCollectionCstListInExpAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOfEnumerationExpression (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).add_operation (GGS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).add_operation (var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 527)).getter_string (SOURCE_FILE ("instruction-for.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 526)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)).add_operation (GGS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 528)).add_operation (temp_13.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 530)).getter_string (SOURCE_FILE ("instruction-for.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 529)), fixItArray14  COMMA_SOURCE_FILE ("instruction-for.galgas", 525)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_enumeratedCollectionCstListInExpAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 532)).objectCompare (temp_16.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 532)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_enumeratedCollectionCstListInExpAST temp_17 = this ;
            GGS_uint var_missingArgumentCount_19812 = var_enumerationDescriptorList_18358.getter_count (SOURCE_FILE ("instruction-for.galgas", 533)).substract_operation (temp_17.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 533)) ;
            const GGS_enumeratedCollectionCstListInExpAST temp_18 = this ;
            GenericArray <FixItDescription> fixItArray19 ;
            GGS_string temp_20 ;
            const GalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_missingArgumentCount_19812.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              temp_20 = GGS_string ("*") ;
            }else if (GalgasBool::boolFalse == test_21) {
              temp_20 = GGS_string (" ").add_operation (var_missingArgumentCount_19812.getter_string (SOURCE_FILE ("instruction-for.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 536)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 536)) ;
            }
            appendFixItActions (fixItArray19, EnumFixItKind::fixItReplace, temp_20) ;
            inCompiler->emitSemanticError (temp_18.readProperty_mEndOfEnumerationExpression (), GGS_string ("enumerated object has ").add_operation (var_missingArgumentCount_19812.getter_string (SOURCE_FILE ("instruction-for.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 535)).add_operation (GGS_string ("more properties"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 535)), fixItArray19  COMMA_SOURCE_FILE ("instruction-for.galgas", 534)) ;
          }
        }
        const GGS_enumeratedCollectionCstListInExpAST temp_22 = this ;
        UpEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_20181 (temp_22.readProperty_mElementList ()) ;
        UpEnumerator_enumerationDescriptorList enumerator_20243 (var_enumerationDescriptorList_18358) ;
        while (enumerator_20181.hasCurrentObject () && enumerator_20243.hasCurrentObject ()) {
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_20181.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GalgasBool test_24 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_24) {
                test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_20181.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_24) {
                  GGS_unifiedTypeMapEntry var_foundType_20434 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_20181.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 541)) ;
                  GalgasBool test_25 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_25) {
                    test_25 = GGS_bool (ComparisonKind::notEqual, var_foundType_20434.objectCompare (enumerator_20243.current_mEnumeratedType (HERE))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_25) {
                      GenericArray <FixItDescription> fixItArray26 ;
                      inCompiler->emitSemanticError (enumerator_20181.current_mOptionalTypeName (HERE).readProperty_location (), GGS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_20434, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)).add_operation (GGS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)).add_operation (extensionGetter_definition (enumerator_20243.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)).add_operation (GGS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)), fixItArray26  COMMA_SOURCE_FILE ("instruction-for.galgas", 543)) ;
                    }
                  }
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (enumerator_20243.current_mEnumeratedType (HERE), enumerator_20181.current_mOptionalConstantName (HERE), enumerator_20181.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 550)).add_operation (enumerator_20243.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 550)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 550))  COMMA_SOURCE_FILE ("instruction-for.galgas", 546)) ;
            }
          }
          enumerator_20181.gotoNextObject () ;
          enumerator_20243.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 572)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 569)) ;
  const GGS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)).getter_string (SOURCE_FILE ("instruction-for.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)) ;
  GGS_unifiedTypeMapEntry var_enumeratedElementType_22029 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)).readProperty_typeForEnumeratedElement () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_enumeratedElementType_22029.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 581)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionVarInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 582)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 582)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 582)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (var_enumeratedElementType_22029, temp_7.readProperty_mEnumerationVariable (), GGS_bool (false), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 584))  COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GGS_unifiedTypeMapEntry var_explicitType_22607 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 588)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_enumeratedElementType_22029, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 589)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_22607, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 589)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_enumeratedCollectionVarInExpAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_22029, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 590)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 590)).add_operation (GGS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 590)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 590)) ;
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
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 607)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 608)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)) ;
  }
  GGS_semanticInstructionListForGeneration var_before_5F_instructionList_23987 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  const GGS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_23987, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 611)) ;
  }
  {
  const GGS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 626)) ;
  }
  GGS_semanticInstructionListForGeneration var_between_5F_instructionList_24518 ;
  {
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_24518, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 627)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)) ;
  }
  GGS_semanticInstructionListForGeneration var_after_5F_instructionList_25083 ;
  {
  const GGS_forInstructionAST temp_6 = this ;
  const GGS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_25083, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 643)) ;
  }
  {
  const GGS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)) ;
  }
  GGS_localConstantList var_localConstantListForDoBranch_25227 = GGS_localConstantList::init (inCompiler COMMA_HERE) ;
  GGS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_25317 = GGS_forInstructionEnumeratedObjectListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionAST temp_9 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_25357 (temp_9.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_25357.hasCurrentObject ()) {
    GGS_string var_enumeratorCppName_25646 ;
    GGS_semanticExpressionForGeneration var_enumerationExpression_25708 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_25357.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_25227, var_enumeratorCppName_25646, var_enumerationExpression_25708, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 661)) ;
    GGS_string temp_10 ;
    const GalgasBool test_11 = enumerator_25357.current_mAscending (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      temp_10 = GGS_string ("Up") ;
    }else if (GalgasBool::boolFalse == test_11) {
      temp_10 = GGS_string ("Down") ;
    }
    var_enumerationList_25317.addAssignOperation (temp_10, var_enumerationExpression_25708, var_enumeratorCppName_25646  COMMA_SOURCE_FILE ("instruction-for.galgas", 672)) ;
    enumerator_25357.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 678)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 679)) ;
  }
  UpEnumerator_localConstantList enumerator_26028 (var_localConstantListForDoBranch_25227) ;
  while (enumerator_26028.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_26028.current (HERE).readProperty_mName (), enumerator_26028.current (HERE).readProperty_mType (), enumerator_26028.current (HERE).readProperty_mCppName (), enumerator_26028.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 682)) ;
    }
    enumerator_26028.gotoNextObject () ;
  }
  GGS_semanticExpressionForGeneration var_uncheckedWhileExpression_26519 ;
  const GGS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 693)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_26519, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 690)) ;
  GGS_semanticExpressionForGeneration var_whileExpression_26706 ;
  {
  const GGS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_26519, var_whileExpression_26706, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
  }
  {
  const GGS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 706)) ;
  }
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 707)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)) ;
  }
  GGS_string var_indexCppName_26938 = GGS_string::makeEmptyString () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_forInstructionAST temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_forInstructionAST temp_18 = this ;
      var_indexCppName_26938 = GGS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).getter_string (SOURCE_FILE ("instruction-for.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)) ;
      const GGS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_25227.addAssignOperation (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GGS_bool (false), var_indexCppName_26938  COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
    }
  }
  GGS_semanticInstructionListForGeneration var_do_5F_instructionList_27680 ;
  {
  const GGS_forInstructionAST temp_20 = this ;
  const GGS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_25227, GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_27680, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
  }
  {
  const GGS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
  }
  {
  const GGS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 736)) ;
  }
  {
  const GGS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
  }
  const GGS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_forInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_enumerationList_25317, var_indexCppName_26938, var_whileExpression_26706, var_before_5F_instructionList_23987, var_between_5F_instructionList_24518, var_do_5F_instructionList_27680, var_after_5F_instructionList_25083, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 739)) ;
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
  GGS_stringlist var_enumerationVarCppNameList_29945 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionForGeneration temp_0 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30008 (temp_0.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_30008.hasCurrentObject ()) {
    GGS_string var_enumerationVar_30216 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_30008.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_30216, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 787)) ;
    var_enumerationVarCppNameList_29945.addAssignOperation (var_enumerationVar_30216  COMMA_SOURCE_FILE ("instruction-for.galgas", 794)) ;
    enumerator_30008.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_1 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30317 (temp_1.readProperty_mEnumeratedObjectList ()) ;
  UpEnumerator_stringlist enumerator_30341 (var_enumerationVarCppNameList_29945) ;
  while (enumerator_30317.hasCurrentObject () && enumerator_30341.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_30317.current (HERE).readProperty_mEnumerationOrder ().add_operation (GGS_string ("Enumerator_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 797)).add_operation (extensionGetter_identifierRepresentation (enumerator_30317.current (HERE).readProperty_mEnumeratedExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 797)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 797)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_30317.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)).add_operation (enumerator_30341.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 798)) ;
    enumerator_30317.gotoNextObject () ;
    enumerator_30341.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_2 = this ;
  GGS_bool var_whileExpressionIsAllwaysTrue_30651 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 801)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_forInstructionForGeneration temp_4 = this ;
    const GGS_forInstructionForGeneration temp_5 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 803)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 803)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_30651.operator_not (SOURCE_FILE ("instruction-for.galgas", 803)) COMMA_SOURCE_FILE ("instruction-for.galgas", 803)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_forInstructionForGeneration temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 806)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 806)) ;
        }
      }
      GGS_string var_boolVarCppName_31091 = GGS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_30651.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool ").add_operation (var_boolVarCppName_31091, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 811)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 811)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GGS_string var_whileVar_31450 ;
        const GGS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_31450, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_boolVarCppName_31091, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (var_whileVar_31450, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 816)) ;
      const GGS_forInstructionForGeneration temp_11 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_31607 (temp_11.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_31607.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_31607.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 818)) ;
        enumerator_31607.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31091.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
      {
      const GGS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 821)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 830)) ;
      const GGS_forInstructionForGeneration temp_13 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32112 (temp_13.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_32112.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_32112.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 832)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 832)) ;
        enumerator_32112.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31091.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 834)) ;
      {
      const GGS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 836)) ;
      }
      const GGS_forInstructionForGeneration temp_15 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32597 (temp_15.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_32597.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_32597.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 846)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 846)) ;
        enumerator_32597.gotoNextObject () ;
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_forInstructionForGeneration temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 849)).add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 849)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_30651.operator_not (SOURCE_FILE ("instruction-for.galgas", 852)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 853)) ;
          const GGS_forInstructionForGeneration temp_20 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32999 (temp_20.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_32999.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_32999.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 855)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 855)) ;
            enumerator_32999.gotoNextObject () ;
            if (enumerator_32999.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 856)) ;
            }
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 858)) ;
          GGS_string var_whileVar_33389 ;
          const GGS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_33389, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 859)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    ").add_operation (var_boolVarCppName_31091, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)).add_operation (var_whileVar_33389, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 866)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 867)) ;
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_forInstructionForGeneration temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::greaterThan, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 870)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 871)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 872)) ;
          const GGS_forInstructionForGeneration temp_24 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33723 (temp_24.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_33723.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_33723.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 874)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 874)) ;
            enumerator_33723.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_31091.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 876)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 876)) ;
          {
          const GGS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 877)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 885)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 886)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 889)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 891)) ;
      }
      {
      const GGS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 892)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 900)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_forInstructionForGeneration temp_28 = this ;
      test_27 = GGS_bool (ComparisonKind::notEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        const GGS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 903)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 905)) ;
    const GGS_forInstructionForGeneration temp_30 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_34919 (temp_30.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_34919.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_34919.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 907)) ;
      enumerator_34919.gotoNextObject () ;
      if (enumerator_34919.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 908)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 910)) ;
    {
    const GGS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 912)) ;
    }
    const GGS_forInstructionForGeneration temp_32 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35414 (temp_32.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_35414.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_35414.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 922)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 922)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
      enumerator_35414.gotoNextObject () ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      const GGS_forInstructionForGeneration temp_34 = this ;
      test_33 = GGS_bool (ComparisonKind::greaterThan, temp_34.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 925)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
        const GGS_forInstructionForGeneration temp_35 = this ;
        UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35734 (temp_35.readProperty_mEnumeratedObjectList ()) ;
        while (enumerator_35734.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_35734.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 929)) ;
          enumerator_35734.gotoNextObject () ;
          if (enumerator_35734.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 930)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 932)) ;
        {
        const GGS_forInstructionForGeneration temp_36 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_36.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 933)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 941)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
        }
      }
    }
    GalgasBool test_37 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_37) {
      const GGS_forInstructionForGeneration temp_38 = this ;
      test_37 = GGS_bool (ComparisonKind::notEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 946)) COMMA_SOURCE_FILE ("instruction-for.galgas", 946)) ;
        }
        const GGS_forInstructionForGeneration temp_39 = this ;
        const GGS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)).add_operation (GGS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 948)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 948)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 947)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 950)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_setterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_6188 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6188.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6188.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 174)) ;
    enumerator_6188.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfSetterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_6534 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6534.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6534.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 184)) ;
    enumerator_6534.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_receiverType_7379 ;
  GGS_string var_targetVariableCppName_7406 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7442 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailability_7520 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 203)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 203)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_typeKindEnum_2E_classType var_classTypeKind_7667 = extensionGetter_definition (var_selfAvailability_7520.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 205)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("instruction-setter-call.galgas", 205)).unwrappedValue () ;
            if (!extensionGetter_definition (var_selfAvailability_7520.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 205)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("instruction-setter-call.galgas", 205)).isValuated ()) {
              test_3 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_classTypeKind_7667.readProperty_isReference ().boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = extensionGetter_selfIsMutable (var_selfAvailability_7520.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 206)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 206)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                const GGS_setterCallInstructionAST temp_5 = this ;
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 207)) ;
              }
            }
          }
          GGS_propertyMap var_propertyMap_7927 = extensionGetter_definition (var_selfAvailability_7520.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 209)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_8043 ;
          const GGS_setterCallInstructionAST temp_7 = this ;
          GGS_AccessControl joker_8035 ; // Joker input parameter
          var_propertyMap_7927.method_searchKey (temp_7.readProperty_mReceiverName (), joker_8035, var_isConstant_8043, var_receiverType_7379, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 210)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_8043.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_setterCallInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 212)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_7442 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_7406 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 216)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_setterCallInstructionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 218)) ;
        var_receiverType_7379.drop () ; // Release error dropped variable
        var_targetVariableCppName_7406.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_7442.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_7379, var_targetVariableCppName_7406, var_nameForCheckingFormalParameterUsing_7442, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 223)) ;
    }
  }
  GGS_bool var_ok_8820 = GGS_bool (true) ;
  const GGS_setterCallInstructionAST temp_15 = this ;
  GGS_location var_errorLocation_8836 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GGS_setterCallInstructionAST temp_16 = this ;
  UpEnumerator_lstringlist enumerator_8887 (temp_16.readProperty_mReceiverStructProperties ()) ;
  bool bool_17 = var_ok_8820.isValidAndTrue () ;
  if (enumerator_8887.hasCurrentObject () && bool_17) {
    while (enumerator_8887.hasCurrentObject () && bool_17) {
      var_ok_8820 = extensionGetter_definition (var_receiverType_7379, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 234)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 234)) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_8820.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 235)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_8836, GGS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 236)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_propertyMap var_propertyMap_9102 = extensionGetter_definition (var_receiverType_7379, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 238)).readProperty_propertyMap () ;
        GGS_AccessControl var_accessControl_9193 ;
        GGS_bool var_isConstant_9212 ;
        var_propertyMap_9102.method_searchKey (enumerator_8887.current_mValue (HERE), var_accessControl_9193, var_isConstant_9212, var_receiverType_7379, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
        extensionMethod_checkSetAccess (var_accessControl_9193, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_8887.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 240)) ;
        var_errorLocation_8836 = enumerator_8887.current_mValue (HERE).readProperty_location () ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_isConstant_9212.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8887.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 243)) ;
          }
        }
      }
      enumerator_8887.gotoNextObject () ;
      if (enumerator_8887.hasCurrentObject ()) {
        bool_17 = var_ok_8820.isValidAndTrue () ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_castType_9521 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    const GGS_setterCallInstructionAST temp_23 = this ;
    test_22 = GGS_bool (ComparisonKind::notEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_setterCallInstructionAST temp_24 = this ;
      var_castType_9521 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 250)) ;
      {
      const GGS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_7379, var_castType_9521, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 251)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    var_castType_9521 = var_receiverType_7379 ;
  }
  GGS_methodKind var_kind_9879 ;
  GGS_formalParameterSignature var_routineSignature_9893 ;
  GGS_bool var_hasCompilerArgument_9919 ;
  GGS_string var_setterErrorMessage_9955 ;
  const GGS_setterCallInstructionAST temp_26 = this ;
  GGS_methodQualifier joker_9943 ; // Joker input parameter
  extensionGetter_definition (var_castType_9521, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 256)).readProperty_setterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_9879, var_routineSignature_9893, var_hasCompilerArgument_9919, joker_9943, var_setterErrorMessage_9955, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 256)) ;
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = GGS_bool (ComparisonKind::notEqual, var_setterErrorMessage_9955.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_setterCallInstructionAST temp_28 = this ;
      GenericArray <FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_9955, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 265)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_10482 ;
  const GGS_setterCallInstructionAST temp_30 = this ;
  const GGS_setterCallInstructionAST temp_31 = this ;
  const GGS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 274)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 274)), var_routineSignature_9893, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10482, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 268)) ;
  GGS_unifiedTypeMapEntry var_baseType_10573 = var_castType_9521 ;
  GGS_bool var_searching_10599 = GGS_bool (true) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 283)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 284)).isValid ()) {
        uint32_t variant_10652 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 284)).uintValue () ;
        bool loop_10652 = true ;
        while (loop_10652) {
          loop_10652 = var_searching_10599.isValid () ;
          if (loop_10652) {
            loop_10652 = var_searching_10599.boolValue () ;
          }
          if (loop_10652 && (0 == variant_10652)) {
            loop_10652 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 284)) ;
          }
          if (loop_10652) {
            variant_10652 -= 1 ;
            GalgasBool test_34 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_10573, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 285)).boolEnum () ;
              if (GalgasBool::boolTrue == test_34) {
                var_searching_10599 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_34) {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_10573, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)).readProperty_setterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_baseType_10573 = extensionGetter_definition (var_baseType_10573, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_35) {
                var_searching_10599 = GGS_bool (false) ;
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
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_setterCallInstructionForGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_7406, var_nameForCheckingFormalParameterUsing_7442, temp_38.readProperty_mReceiverStructProperties (), var_castType_9521, var_receiverType_7379, temp_39.readProperty_mSetterName (), var_kind_9879, var_actualParameterListForGeneration_10482, var_hasCompilerArgument_9919, var_baseType_10573, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_11925 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 322)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 322)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_11925.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 323)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfSetterCallInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
        }
      }
      const GGS_selfSetterCallInstructionAST temp_4 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_4.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)) ;
      GGS_methodKind var_kind_12378 ;
      GGS_formalParameterSignature var_routineSignature_12388 ;
      GGS_bool var_hasCompilerArgument_12410 ;
      const GGS_selfSetterCallInstructionAST temp_5 = this ;
      GGS_methodQualifier joker_12430 ; // Joker input parameter
      GGS_string joker_12433 ; // Joker input parameter
      extensionGetter_definition (var_selfAvailable_11925.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).readProperty_setterMap ().method_searchKey (temp_5.readProperty_mSetterName (), var_kind_12378, var_routineSignature_12388, var_hasCompilerArgument_12410, joker_12430, joker_12433, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)) ;
      GGS_actualParameterListForGeneration var_actualParameterListForGeneration_12876 ;
      const GGS_selfSetterCallInstructionAST temp_6 = this ;
      const GGS_selfSetterCallInstructionAST temp_7 = this ;
      const GGS_selfSetterCallInstructionAST temp_8 = this ;
      extensionMethod_analyzeRoutineArguments (temp_6.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_7.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_8.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)), var_routineSignature_12388, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12876, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)) ;
      const GGS_selfSetterCallInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selfSetterCallInstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_11925.readProperty_type (), temp_9.readProperty_mSetterName (), var_kind_12378, var_actualParameterListForGeneration_12876, var_hasCompilerArgument_12410, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfSetterCallInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
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
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) ;
  const GGS_setterCallInstructionForGeneration temp_0 = this ;
  GGS_string var_receiverCppName_14954 = temp_0.readProperty_mReceiverCppName () ;
  const GGS_setterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_lstringlist enumerator_15001 (temp_1.readProperty_mReceiverStructAttributes ()) ;
  while (enumerator_15001.hasCurrentObject ()) {
    var_receiverCppName_14954.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_15001.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 397)) ;
    enumerator_15001.gotoNextObject () ;
  }
  {
  const GGS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 399)) ;
  }
  GGS_stringlist var_parameterCppNameList_15232 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_15277 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_15330 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_setterCallInstructionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_15361 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_15361.hasCurrentObject ()) {
    GGS_string var_parameterCppName_15646 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_15361.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15277, var_inputVariableList_15330, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15646, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
    var_parameterCppNameList_15232.addAssignOperation (var_parameterCppName_15646  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)) ;
    enumerator_15361.gotoNextObject () ;
  }
  const GGS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_setterCallInstructionForGeneration temp_5 = this ;
      const GGS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 419)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 419)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 419)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 419))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 419)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 420)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GGS_bool (ComparisonKind::greaterThan, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 421)).readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 421)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_14954.add_operation (GGS_string (".insulate ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)) ;
              }
            }
          }
          const GGS_setterCallInstructionForGeneration temp_11 = this ;
          GGS_string var_pointerUniqueName_16325 = GGS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
          const GGS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).add_operation (var_pointerUniqueName_16325, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)) ;
          const GGS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (var_receiverCppName_14954, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)) ;
          GalgasBool test_14 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_14) {
            const GGS_setterCallInstructionForGeneration temp_15 = this ;
            const GGS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)) ;
              const GGS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_16325, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (GGS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)).add_operation (var_pointerUniqueName_16325, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)).add_operation (GGS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
              }
              const GGS_setterCallInstructionForGeneration temp_19 = this ;
              const GGS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (GGS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (GGS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_pointerUniqueName_16325, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)).add_operation (GGS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
            }
          }
          const GGS_setterCallInstructionForGeneration temp_21 = this ;
          const GGS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)).add_operation (var_pointerUniqueName_16325, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        const GGS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (var_receiverCppName_14954, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 445)) ;
      const GGS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_14954.add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_18058 (var_parameterCppNameList_15232) ;
  while (enumerator_18058.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_18058.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
    enumerator_18058.gotoNextObject () ;
    if (enumerator_18058.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)) ;
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    const GGS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15232.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 453)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_15232.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 459)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)) ;
      }
    }
  }
  const GGS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)) ;
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
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)) ;
  {
  const GGS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
  }
  GGS_stringlist var_parameterCppNameList_19095 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_19139 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_19191 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_selfSetterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_19233 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_19233.hasCurrentObject ()) {
    GGS_string var_parameterCppName_19526 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_19233.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19139, var_inputVariableList_19191, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19526, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)) ;
    var_parameterCppNameList_19095.addAssignOperation (var_parameterCppName_19526  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)) ;
    enumerator_19233.gotoNextObject () ;
  }
  const GGS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GGS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 495)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 501)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_13.readProperty_mSelfCppName ().add_operation (GGS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_15.readProperty_mSelfCppName ().add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)) ;
      }
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_20519 (var_parameterCppNameList_19095) ;
  while (enumerator_20519.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_20519.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 508)) ;
    enumerator_20519.gotoNextObject () ;
    if (enumerator_20519.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_19095.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 512)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 516)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 517)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_19095.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 518)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 519)) ;
      }
    }
  }
  const GGS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 522)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_15325 ;
  GGS_string var_targetVariableCppName_15352 ;
  GGS_string var_nameForCheckingFormalParameterUsing_15390 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_opAssignExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_15472 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 434)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 434)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfAvailable_15472.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 435)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 435)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              const GGS_opAssignExpressionInstructionAST temp_4 = this ;
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)) ;
            }
          }
          GGS_propertyMap var_propertyMap_15718 = extensionGetter_definition (var_selfAvailable_15472.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 438)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_15833 ;
          const GGS_opAssignExpressionInstructionAST temp_6 = this ;
          GGS_AccessControl joker_15825 ; // Joker input parameter
          var_propertyMap_15718.method_searchKey (temp_6.readProperty_mReceiverName (), joker_15825, var_isConstant_15833, var_targetType_15325, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
          var_nameForCheckingFormalParameterUsing_15390 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_opAssignExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_15352 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 441)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 442)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_15833.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_opAssignExpressionInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 444)) ;
            }
          }
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_15472.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 446)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 446)).boolEnum () ;
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
        var_targetType_15325.drop () ; // Release error dropped variable
        var_targetVariableCppName_15352.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_15390.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_opAssignExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_15325, var_targetVariableCppName_15352, var_nameForCheckingFormalParameterUsing_15390, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    }
  }
  const GGS_opAssignExpressionInstructionAST temp_17 = this ;
  UpEnumerator_lstringlist enumerator_16807 (temp_17.readProperty_mStructAttributeList ()) ;
  while (enumerator_16807.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_16856 = extensionGetter_definition (var_targetType_15325, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_16945 ;
    GGS_bool var_isConstant_16964 ;
    var_propertyMap_16856.method_searchKey (enumerator_16807.current_mValue (HERE), var_accessControl_16945, var_isConstant_16964, var_targetType_15325, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
    extensionMethod_checkSetAccess (var_accessControl_16945, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_16807.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 465)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_isConstant_16964.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_opAssignExpressionInstructionAST temp_19 = this ;
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 467)) ;
      }
    }
    enumerator_16807.gotoNextObject () ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_opAssignExpressionInstructionAST temp_22 = this ;
    test_21 = extensionGetter_definition (var_targetType_15325, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)).readProperty_features ().getter_contains (extensionGetter_features (temp_22.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 471)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_opAssignExpressionInstructionAST temp_23 = this ;
      const GGS_opAssignExpressionInstructionAST temp_24 = this ;
      GenericArray <FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_15325, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).add_operation (GGS_string ("' type, but this type does not support the '"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).add_operation (extensionGetter_string (temp_24.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)).add_operation (GGS_string ("' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_17872 ;
  const GGS_opAssignExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_15325, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17872, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
  {
  const GGS_opAssignExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_15325, var_expression_17872.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_17872, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 487)) ;
  }
  const GGS_opAssignExpressionInstructionAST temp_28 = this ;
  const GGS_opAssignExpressionInstructionAST temp_29 = this ;
  const GGS_opAssignExpressionInstructionAST temp_30 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetType_15325, var_targetVariableCppName_15352, var_nameForCheckingFormalParameterUsing_15390, temp_29.readProperty_mStructAttributeList (), var_expression_17872, extensionGetter_cppFunctionName (temp_30.readProperty_mOperator (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 496)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 489)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_19741 ;
  GGS_string var_targetVariableCppName_19768 ;
  GGS_string var_nameForCheckingFormalParameterUsing_19806 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_19888 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 532)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 532)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_19969 = extensionGetter_definition (var_selfAvailable_19888.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 533)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_20084 ;
          const GGS_plusEqualElementsInstructionAST temp_3 = this ;
          GGS_AccessControl joker_20076 ; // Joker input parameter
          var_propertyMap_19969.method_searchKey (temp_3.readProperty_mReceiverName (), joker_20076, var_isConstant_20084, var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)) ;
          var_nameForCheckingFormalParameterUsing_19806 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusEqualElementsInstructionAST temp_4 = this ;
          var_targetVariableCppName_19768 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 536)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 537)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_20084.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusEqualElementsInstructionAST temp_6 = this ;
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 539)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_19888.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 541)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusEqualElementsInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 542)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusEqualElementsInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)) ;
        var_targetType_19741.drop () ; // Release error dropped variable
        var_targetVariableCppName_19768.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_19806.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusEqualElementsInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_19741, var_targetVariableCppName_19768, var_nameForCheckingFormalParameterUsing_19806, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)) ;
    }
  }
  const GGS_plusEqualElementsInstructionAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_21061 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_21061.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_21110 = extensionGetter_definition (var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 558)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_21199 ;
    GGS_bool var_isConstant_21218 ;
    var_propertyMap_21110.method_searchKey (enumerator_21061.current_mValue (HERE), var_accessControl_21199, var_isConstant_21218, var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 559)) ;
    extensionMethod_checkSetAccess (var_accessControl_21199, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_21061.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_21218.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_21061.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
      }
    }
    enumerator_21061.gotoNextObject () ;
  }
  GGS_functionSignature var_addAssignOperatorArguments_21494 = extensionGetter_definition (var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)).readProperty_addAssignOperatorArguments () ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_21494.getter_count (SOURCE_FILE ("instruction-concat.galgas", 567)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusEqualElementsInstructionAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_plusEqualElementsInstructionAST temp_21 = this ;
      test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 572)).objectCompare (var_addAssignOperatorArguments_21494.getter_count (SOURCE_FILE ("instruction-concat.galgas", 572)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_plusEqualElementsInstructionAST temp_22 = this ;
        const GGS_plusEqualElementsInstructionAST temp_23 = this ;
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_19741, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 574)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 574)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 574)).add_operation (var_addAssignOperatorArguments_21494.getter_count (SOURCE_FILE ("instruction-concat.galgas", 575)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 574)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)).add_operation (temp_23.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 576)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 573)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      GGS_semanticExpressionListForGeneration var_effectiveParameterList_22313 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_plusEqualElementsInstructionAST temp_25 = this ;
      UpEnumerator_actualOutputArgumentList enumerator_22381 (temp_25.readProperty_mExpressions ()) ;
      UpEnumerator_functionSignature enumerator_22467 (var_addAssignOperatorArguments_21494) ;
      while (enumerator_22381.hasCurrentObject () && enumerator_22467.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_22819 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_22381.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22467.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22819, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 580)) ;
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::notEqual, enumerator_22467.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22381.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GGS_string temp_27 ;
            const GalgasBool test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_22467.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              temp_27 = enumerator_22467.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 590)) ;
            }else if (GalgasBool::boolFalse == test_28) {
              temp_27 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_22927 = GGS_string ("!").add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 590)) ;
            GenericArray <FixItDescription> fixItArray29 ;
            appendFixItActions (fixItArray29, EnumFixItKind::fixItReplace, var_s_22927) ;
            inCompiler->emitSemanticError (enumerator_22381.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_22927, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_22467.current_mFormalArgumentType (HERE), var_expression_22819.readProperty_mResultType (), enumerator_22381.current_mEndOfExpressionLocation (HERE), var_expression_22819, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)) ;
        }
        var_effectiveParameterList_22313.addAssignOperation (var_expression_22819  COMMA_SOURCE_FILE ("instruction-concat.galgas", 596)) ;
        enumerator_22381.gotoNextObject () ;
        enumerator_22467.gotoNextObject () ;
      }
      const GGS_plusEqualElementsInstructionAST temp_30 = this ;
      const GGS_plusEqualElementsInstructionAST temp_31 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (var_targetVariableCppName_19768, var_targetType_19741, var_nameForCheckingFormalParameterUsing_19806, temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mStructAttributeList (), var_effectiveParameterList_22313, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 599)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)) ;
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
  GGS_unifiedTypeMapEntry var_targetType_25152 ;
  GGS_string var_targetVariableCppName_25179 ;
  GGS_string var_nameForCheckingFormalParameterUsing_25217 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_plusPlusEqualElementInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_25299 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 641)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-concat.galgas", 641)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GGS_propertyMap var_propertyMap_25380 = extensionGetter_definition (var_selfAvailable_25299.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_25495 ;
          const GGS_plusPlusEqualElementInstructionAST temp_3 = this ;
          GGS_AccessControl joker_25487 ; // Joker input parameter
          var_propertyMap_25380.method_searchKey (temp_3.readProperty_mReceiverName (), joker_25487, var_isConstant_25495, var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)) ;
          var_nameForCheckingFormalParameterUsing_25217 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_plusPlusEqualElementInstructionAST temp_4 = this ;
          var_targetVariableCppName_25179 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 645)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 646)) ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_isConstant_25495.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_plusPlusEqualElementInstructionAST temp_6 = this ;
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 648)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfAvailable_25299.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 650)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 650)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_plusPlusEqualElementInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_plusPlusEqualElementInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 654)) ;
        var_targetType_25152.drop () ; // Release error dropped variable
        var_targetVariableCppName_25179.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_25217.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_plusPlusEqualElementInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_25152, var_targetVariableCppName_25179, var_nameForCheckingFormalParameterUsing_25217, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)) ;
    }
  }
  const GGS_plusPlusEqualElementInstructionAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_26472 (temp_14.readProperty_mStructAttributeList ()) ;
  while (enumerator_26472.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_26521 = extensionGetter_definition (var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_26610 ;
    GGS_bool var_isConstant_26629 ;
    var_propertyMap_26521.method_searchKey (enumerator_26472.current_mValue (HERE), var_accessControl_26610, var_isConstant_26629, var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 668)) ;
    extensionMethod_checkSetAccess (var_accessControl_26610, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_26472.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 669)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_isConstant_26629.boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_26472.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 671)) ;
      }
    }
    enumerator_26472.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = extensionGetter_definition (var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 675)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("instruction-concat.galgas", 675)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_plusPlusEqualElementInstructionAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)).add_operation (GGS_string ("' type, but this type does not support the '++=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 676)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightExpressionType_27158 = extensionGetter_definition (var_targetType_25152, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)).readProperty_typeForEnumeratedElement () ;
  GGS_semanticExpressionForGeneration var_expression_27550 ;
  const GGS_plusPlusEqualElementInstructionAST temp_20 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_20.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_rightExpressionType_27158, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_27550, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)) ;
  {
  const GGS_plusPlusEqualElementInstructionAST temp_21 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_rightExpressionType_27158, var_expression_27550.readProperty_mResultType (), temp_21.readProperty_mInstructionLocation (), var_expression_27550, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 692)) ;
  }
  const GGS_plusPlusEqualElementInstructionAST temp_22 = this ;
  const GGS_plusPlusEqualElementInstructionAST temp_23 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusPlusAssignInstructionForGeneration::init_21__21__21__21__21__21_ (temp_22.readProperty_mInstructionLocation (), var_targetType_25152, var_targetVariableCppName_25179, var_nameForCheckingFormalParameterUsing_25217, temp_23.readProperty_mStructAttributeList (), var_expression_27550, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 699)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 734)) ;
  GGS_stringlist var_parameterList_29216 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_plusEqualnstructionForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_29256 (temp_1.readProperty_mExpressionList ()) ;
  while (enumerator_29256.hasCurrentObject ()) {
    GGS_string var_parameter_29478 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_29256.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_29478, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 737)) ;
    var_parameterList_29216.addAssignOperation (var_parameter_29478  COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
    enumerator_29256.gotoNextObject () ;
  }
  {
  const GGS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)) ;
  }
  const GGS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 748)) ;
  const GGS_plusEqualnstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_29697 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_29697.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_29697.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)) ;
    enumerator_29697.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".addAssignOperation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 753)) ;
  {
  const GGS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 754)) ;
  }
  UpEnumerator_stringlist enumerator_29987 (var_parameterList_29216) ;
  while (enumerator_29987.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_29987.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 756)) ;
    enumerator_29987.gotoNextObject () ;
    if (enumerator_29987.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 759)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 759)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 759)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
      }
    }
  }
  const GGS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)) ;
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
  GGS_string var_sourceVar_31643 ;
  const GGS_opAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_31643, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 790)) ;
  {
  const GGS_opAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 797)) ;
  }
  const GGS_opAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 798)) ;
  const GGS_opAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_31807 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_31807.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_31807.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)) ;
    enumerator_31807.gotoNextObject () ;
  }
  const GGS_opAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)).add_operation (var_sourceVar_31643, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 831)) ;
  GGS_string var_sourceVar_33441 ;
  const GGS_plusPlusAssignInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_33441, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 832)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 839)) ;
  }
  const GGS_plusPlusAssignInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 840)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_4 = this ;
  UpEnumerator_lstringlist enumerator_33605 (temp_4.readProperty_mStructAttributeList ()) ;
  while (enumerator_33605.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_33605.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 842)) ;
    enumerator_33605.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".plusPlusAssignOperation (").add_operation (var_sourceVar_33441, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 844)) ;
  const GGS_plusPlusAssignInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 845)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 845)) ;
  {
  const GGS_plusPlusAssignInstructionForGeneration temp_6 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_6.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 846)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 187)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_8193 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 199)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 199)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_8193.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 200)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 200)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 201)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_8193.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 204)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_8193.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)).add_operation (GGS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 205)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_9120 ;
      const GGS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_8193.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9120, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) ;
      {
      const GGS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_8193.readProperty_type (), var_expression_9120.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9120, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 220)) ;
      }
      const GGS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_8193.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_9120, GGS_string ("divAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 227)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 237)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 255)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_11189 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 267)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_11189.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 269)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_11189.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 272)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 272)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_11189.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_12122 ;
      const GGS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_11189.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12122, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
      {
      const GGS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_11189.readProperty_type (), var_expression_12122.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_12122, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 288)) ;
      }
      const GGS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_11189.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_12122, GGS_string ("plusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 305)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_14193 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 335)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 335)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_14193.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 336)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 337)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_14193.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 340)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 340)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_14193.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)).add_operation (GGS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 341)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_15127 ;
      const GGS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_14193.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_15127, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      {
      const GGS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_14193.readProperty_type (), var_expression_15127.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15127, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
      }
      const GGS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_14193.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_15127, GGS_string ("minusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 363)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 373)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 391)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_17195 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 403)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 403)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_17195.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 404)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 404)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 405)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_17195.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 408)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 408)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 408)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_17195.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)).add_operation (GGS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 409)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_18123 ;
      const GGS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_17195.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_18123, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 414)) ;
      {
      const GGS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_17195.readProperty_type (), var_expression_18123.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18123, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)) ;
      }
      const GGS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_17195.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_18123, GGS_string ("mulAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 441)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 459)) ;
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
    const GGS_selfAvailability_2E_available var_selfAvailable_20182 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 471)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 471)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_20182.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 472)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 472)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)) ;
        }
      }
      GGS_functionSignature var_addAssignOperatorArguments_20470 = extensionGetter_definition (var_selfAvailable_20182.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 476)).readProperty_addAssignOperatorArguments () ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_20470.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 477)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20182.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 482)).objectCompare (var_addAssignOperatorArguments_20470.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 482)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            const GGS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GGS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfAvailable_20182.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).add_operation (var_addAssignOperatorArguments_20470.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 486)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 485)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 486)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 487)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 486)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 487)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 483)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_semanticExpressionListForGeneration var_effectiveParameterList_21309 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
          const GGS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          UpEnumerator_actualOutputArgumentList enumerator_21408 (temp_12.readProperty_mExpressions ()) ;
          UpEnumerator_functionSignature enumerator_21443 (var_addAssignOperatorArguments_20470) ;
          while (enumerator_21408.hasCurrentObject () && enumerator_21443.hasCurrentObject ()) {
            GGS_semanticExpressionForGeneration var_expression_21837 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_21408.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_21443.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_21837, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 491)) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_21443.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_21408.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_string temp_14 ;
                const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_21443.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  temp_14 = enumerator_21443.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 502)) ;
                }else if (GalgasBool::boolFalse == test_15) {
                  temp_14 = GGS_string::makeEmptyString () ;
                }
                GGS_string var_s_21975 = GGS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 501)) ;
                GenericArray <FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, EnumFixItKind::fixItReplace, var_s_21975) ;
                inCompiler->emitSemanticError (enumerator_21408.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_21975, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_21443.current (HERE).readProperty_mFormalArgumentType (), var_expression_21837.readProperty_mResultType (), enumerator_21408.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_21837, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 507)) ;
            }
            var_effectiveParameterList_21309.addAssignOperation (var_expression_21837  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 513)) ;
            enumerator_21408.gotoNextObject () ;
            enumerator_21443.gotoNextObject () ;
          }
          const GGS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_20182.readProperty_type (), GGS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_effectiveParameterList_21309, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 516)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    GenericArray <FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 526)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 72)) ;
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
  GGS_semanticExpressionForGeneration var_expression_4276 ;
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4276, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 87)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_4276.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_messageInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4276.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (GGS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
    }
  }
  const GGS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_messageInstructionForGeneration::init_21__21_ (var_expression_4276, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 102)) ;
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
  GGS_string var_messageCppVarName_5726 ;
  const GGS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5726, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 126)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (GGS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (var_messageCppVarName_5726, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 134)) ;
  const GGS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1716 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1716, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 32)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1716 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 36)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2422 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2422, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2509 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2509, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  }
  {
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 59)), var_t_2509, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2422 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 57)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3328 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3328, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  GGS_functionSignature var_argumentTypeList_3353 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3421 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3421, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
  var_argumentTypeList_3353.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_t_3421, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3421, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 83)) ;
  }
  var_argumentTypeList_3353.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 84)), var_t_3421, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 84)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), inCompiler COMMA_HERE), var_argumentTypeList_3353, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3328 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 85)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4536 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4536, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4623 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4623, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
  GGS_functionSignature var_argumentTypeList_4651 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4651.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_4623, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4623, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
  var_argumentTypeList_4651.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_t_4623, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4623, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 114)) ;
  }
  var_argumentTypeList_4651.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 115)), var_t_4623, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 115)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), inCompiler COMMA_HERE), var_argumentTypeList_4651, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4536 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 73)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  GGS_lexicalSentValueList joker_3285 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3285, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 74)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 83)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 83)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GGS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 101)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 101)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)) ;
  const GGS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)) ;
  const GGS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 105)) ;
//---
  return result_result ;
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
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 31)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 32)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 34)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 36)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)) ;
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
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2462 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2462, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)) ;
  }
  GGS_formalParameterSignature var_argList_2513 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2513.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), var_argumentTypeIndex_2462, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), var_argList_2513, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 56)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 58)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)) ;
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
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1749 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1749, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1800 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1800.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 35)), var_argumentTypeIndex_1749, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 35)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 35)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 37)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 38)), var_argList_1800, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 41)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 36)) ;
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
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2684 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2684, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2781 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2781, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 59)) ;
  }
  GGS_formalParameterSignature var_argList_2837 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2837.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 61)), var_outputArgumentTypeIndex_2684, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 61)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 61)) ;
  var_argList_2837.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 62)), var_inputArgumentTypeIndex_2781, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 62)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 62)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 64)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 65)), var_argList_2837, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 68)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 63)) ;
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
  GGS_formalParameterSignature var_argList_3745 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3849 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3849, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 86)) ;
  }
  var_argList_3745.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 87)), var_argumentTypeIndex_3849, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 87)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 87)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3849, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 88)) ;
  }
  var_argList_3745.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 89)), var_argumentTypeIndex_3849, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 89)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 89)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 91)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 92)), var_argList_3745, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 95)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 90)) ;
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
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
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
  GGS_lstring var_key_6642 = GGS_lstring::init_21__21_ (GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 164)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6642, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 167)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6642, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 168)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 168)) ;
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
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_7170 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_10 = this ;
  const GGS_extensionMethodAST temp_11 = this ;
  var_entry_7170.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 177)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_7170, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
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
  GGS_lstring var_nameForUsefulness_9122 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 215)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9122, var_nameForUsefulness_9122, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 216)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9304 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9304, var_nameForUsefulness_9122 COMMA_SOURCE_FILE ("extension-method.galgas", 218)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9515 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 220)) ;
  GGS_string var_selfObjectNameString_9591 ;
  GGS_string var_selfObjectPropertyAccessorString_9628 ;
  GGS_bool var_implementedAsFunction_9675 ;
  GGS_bool var_isReferenceClass_9740 = GGS_bool (false) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_typeKindEnum_2E_classType var_selfClassType_9776 = extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 226)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 226)).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      var_isReferenceClass_9740 = var_selfClassType_9776.readProperty_isReference () ;
      var_selfObjectNameString_9591 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_9628 = GGS_string ("this->") ;
      var_implementedAsFunction_9675 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameString_9591 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_9628 = GGS_string ("inObject.") ;
    var_implementedAsFunction_9675 = GGS_bool (true) ;
  }
  GGS_selfMutability temp_5 ;
  const GalgasBool test_6 = var_isReferenceClass_9740.boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas", 241)) ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-method.galgas", 241)) ;
  }
  GGS_analysisContext var_analysisContextNew_10198 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_9591, GGS_selfAvailability::class_func_available (var_selfType_9515, temp_5  COMMA_SOURCE_FILE ("extension-method.galgas", 241)), var_selfObjectPropertyAccessorString_9628, inCompiler COMMA_HERE) ;
  GGS_bool var_isclass_10572 = GGS_bool (false) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_typeKindEnum_2E_classType var_classType_10599 = extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 245)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 245)).isValuated ()) {
      test_7 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_7) {
      var_isclass_10572 = var_classType_10599.readProperty_isReference () ;
    }
  }
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10964 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_11012 ;
  {
  const GGS_extensionMethodAST temp_8 = this ;
  const GGS_extensionMethodAST temp_9 = this ;
  const GGS_extensionMethodAST temp_10 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_9122, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10198, ioArgument_ioTypeMap, temp_8.readProperty_mExtensionMethodFormalParameterList (), temp_9.readProperty_mExtensionMethodInstructionList (), temp_10.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_10964, var_formalParameterListForGeneration_11012, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 248)) ;
  }
  const GGS_extensionMethodAST temp_11 = this ;
  const GGS_extensionMethodAST temp_12 = this ;
  const GGS_extensionMethodAST temp_13 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extension method ").add_operation (temp_11.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 261)), GGS_extensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 264)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 264)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 264)).add_operation (temp_12.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 264)), var_selfType_9515, temp_13.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9675, var_formalParameterListForGeneration_11012, extensionGetter_definition (var_selfType_9515, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 269)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10964, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 260)) ;
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
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 297)) ;
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
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 316)) ;
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
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 325))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 332)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 331))) ;
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
      GGS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15156 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15156.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 349)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 350)), temp_3.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 352)), inCompiler COMMA_HERE), GGS_string ("inObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 348)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 356)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 356)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 356)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 356))  COMMA_SOURCE_FILE ("extension-method.galgas", 356)) ;
      GGS_string var_code_16099 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 359)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15156, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_16099, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 357)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 371)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16099 COMMA_SOURCE_FILE ("extension-method.galgas", 370))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 376)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    UpEnumerator_formalParameterListForGeneration enumerator_16429 (temp_11.readProperty_mExtensionMethodFormalParameterList ()) ;
    while (enumerator_16429.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16429.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 378)) ;
      enumerator_16429.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_16579 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_16623 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 382)).isValid ()) {
      uint32_t variant_16644 = GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 382)).uintValue () ;
      bool loop_16644 = true ;
      while (loop_16644) {
        loop_16644 = var_searching_16623.isValid () ;
        if (loop_16644) {
          loop_16644 = var_searching_16623.boolValue () ;
        }
        if (loop_16644 && (0 == variant_16644)) {
          loop_16644 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 382)) ;
        }
        if (loop_16644) {
          variant_16644 -= 1 ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16579, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 383)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 383)).operator_not (SOURCE_FILE ("extension-method.galgas", 383)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16579, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 384)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_16579 = extensionGetter_definition (var_baseType_16579, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 385)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_16623 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            var_searching_16623 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16579, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 394)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 394)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 394)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 395))  COMMA_SOURCE_FILE ("extension-method.galgas", 393)) ;
    GGS_string var_methodImplementation_17400 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17400, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 396)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 405)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17400 COMMA_SOURCE_FILE ("extension-method.galgas", 404))) ;
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
  GGS_lstring var_key_6295 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 157)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6295, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 158)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6295, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)) ;
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
  GGS_extensionInitializerForBuildingContext_2E_element var_entry_6738 = ioArgument_ioExtensionInitializerForBuildingContext.readSubscript__3F_searchKey (temp_8.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_9 = this ;
  const GGS_initializerAST temp_10 = this ;
  const GGS_initializerAST temp_11 = this ;
  var_entry_6738.mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 169)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 168)) ;
  }
  {
  ioArgument_ioExtensionInitializerForBuildingContext.setter_replaceKey (var_entry_6738, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 172)) ;
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
  GGS_lstring var_nameForUsefulness_8374 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8374, var_nameForUsefulness_8374, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 202)) ;
  }
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8639 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 204)) ;
  GGS_string var_selfObjectNameString_8714 ;
  GGS_string var_selfObjectAccessorString_8751 ;
  GGS_bool var_isReferenceClass_8819 = GGS_bool (false) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_typeKindEnum_2E_classType var_classType_8855 = extensionGetter_definition (var_selfType_8639, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 209)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-initializer.galgas", 209)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_8639, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 209)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-initializer.galgas", 209)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      var_isReferenceClass_8819 = var_classType_8855.readProperty_isReference () ;
      var_selfObjectNameString_8714 = GGS_string ("this") ;
      var_selfObjectAccessorString_8751 = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_selfObjectNameString_8714 = GGS_string ("result") ;
    var_selfObjectAccessorString_8751 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_9172 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8714, GGS_selfAvailability::class_func_available (var_selfType_8639, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 222))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 222)), var_selfObjectAccessorString_8751, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9711 ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9759 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8374, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9172, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9711, var_formalParameterListForGeneration_9759, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 225)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_9814 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 237)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 239)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 239)).add_operation (var_initializerName_9814, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 239)), GGS_extensionInitializerForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8639, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 242)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 242)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 242)).add_operation (var_initializerName_9814.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 242)), var_selfType_8639, var_initializerName_9814, var_formalParameterListForGeneration_9759, extensionGetter_definition (var_selfType_8639, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 246)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 238)) ;
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
  GGS_localVarManager var_variableMap_11348 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11452 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 268)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 268)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_11571 (extensionGetter_definition (var_selfAvailable_11452.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 269)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_11571.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_11452.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 270)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_11571.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas", 271)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_11605 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11348, enumerator_11571.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11571.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_11571.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 279)), var_initialized_11605, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 274)) ;
        }
        enumerator_11571.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_12115 (constinArgument_inFormalArgumentListAST) ;
  while (enumerator_12115.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_12150 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12115.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 287)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_12115.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_cppName_12285 = GGS_string ("constinArgument_").add_operation (enumerator_12115.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 289)) ;
        outArgument_outSignatureForGeneration.addAssignOperation (enumerator_12115.current (HERE).readProperty_mFormalSelector (), var_parameterType_12150, var_cppName_12285, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), enumerator_12115.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 290)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_12115.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_11348, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12150, var_cppName_12285, var_cppName_12285, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 297)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_11348, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12150, var_cppName_12285, var_cppName_12285, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 299)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_cppName_12900 = GGS_string ("inArgument_").add_operation (enumerator_12115.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 302)) ;
      outArgument_outSignatureForGeneration.addAssignOperation (enumerator_12115.current (HERE).readProperty_mFormalSelector (), var_parameterType_12150, var_cppName_12900, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), enumerator_12115.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 303)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = enumerator_12115.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_11348, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12150, var_cppName_12900, var_cppName_12900, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 310)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_11348, enumerator_12115.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12150, var_cppName_12900, var_cppName_12900, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 312)) ;
        }
      }
    }
    enumerator_12115.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_13605 (constinArgument_inInstructionList) ;
  while (enumerator_13605.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13605.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11348, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 319)) ;
    enumerator_13605.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11348, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 329)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas", 346)) ;
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
  UpEnumerator_formalInputParameterListForGeneration enumerator_15111 (temp_0.readProperty_formalParameterList ()) ;
  while (enumerator_15111.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15111.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 355)) ;
    enumerator_15111.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_15418 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_15418, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 357)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 366)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_15418 COMMA_SOURCE_FILE ("extension-initializer.galgas", 365))) ;
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
  GGS_string var_className_16452 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 387)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_16555 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16555.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 390))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 390)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16655 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16655.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_16555.plusPlusAssignOperation (enumerator_16655.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 392)) ;
    enumerator_16655.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_16783 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_16824 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_16824.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 397)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_16884 (constinArgument_inInstructionList) ;
  while (enumerator_16884.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16884.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16783, var_unusedVariableCppNameSet_16555, GGS_bool (false), var_routineBody_16824, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 399)) ;
    enumerator_16884.gotoNextObject () ;
  }
  {
  var_routineBody_16824.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 407)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 409)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_17272 (constinArgument_inFormalArgumentList) ;
  while (enumerator_17272.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17272.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 411)) ;
    enumerator_17272.gotoNextObject () ;
  }
  GGS_bool var_isStruct_17401 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 414)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas", 414)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isStruct_17401.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 417)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 417)).add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 418)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 418)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 419)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 419)) ;
      GGS_uint var_colRef_17711 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 420)) ;
      UpEnumerator_formalInputParameterListForGeneration enumerator_17780 (constinArgument_inFormalArgumentList) ;
      while (enumerator_17780.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_17780.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17780.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 424)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 424)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17780.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)) ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_16555.getter_hasKey (enumerator_17780.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_17780.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 429)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 429)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssignOperation(enumerator_17780.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 431)) ;
        }
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17711, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 434)) ;
        }
        enumerator_17780.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17711, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 438)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 440)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)) ;
      outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16824, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)).add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 449)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 449)) ;
    GGS_uint var_colRef_19147 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 450)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_19216 (constinArgument_inFormalArgumentList) ;
    while (enumerator_19216.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_19216.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19216.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 454)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 454)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19216.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_19216.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 459)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19147, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)) ;
      }
      enumerator_19216.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19147, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 464)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  object->").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20286 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20286.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_20286.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 472)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)) ;
      enumerator_20286.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  const GGS_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 476)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 476)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void cPtr_").add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)).add_operation (var_className_16452.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20918 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20918.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = enumerator_20918.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20918.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_16555.getter_hasKey (enumerator_20918.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_20918.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(enumerator_20918.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 493)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19147, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 494)) ;
      }
      enumerator_20918.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_16555.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 503)) ;
    outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16824, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 505)) ;
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
  result_result = GGS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
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
  GGS_lstring var_key_6851 = GGS_lstring::init_21__21_ (GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6851, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 170)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6851, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 173)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 173)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_7394 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  var_entry_7394.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 180)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_7394, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 186)) ;
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
  GGS_unifiedTypeMapEntry var_selfType_9413 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 222)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9413, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 224)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9413, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 225)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9413, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9413, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 229)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 229)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)) ;
      }
    }
  }
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_10039 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_10149 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
  while (enumerator_10149.hasCurrentObject ()) {
    var_formalParameterListForGeneration_10039.addAssignOperation (enumerator_10149.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10149.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 236)), enumerator_10149.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_10149.current_mFormalArgumentName (HERE), enumerator_10149.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)) ;
    enumerator_10149.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 243)), GGS_abstractExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_bool (true), GGS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246)), var_selfType_9413, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 249)), var_formalParameterListForGeneration_10039, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 242)) ;
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
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 271)) ;
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
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 291)) ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 300)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 299))) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 313)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 313)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 314))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 315)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 316)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_14383 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList ()) ;
  while (enumerator_14383.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14383.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 318)) ;
    enumerator_14383.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 321)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 320))) ;
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
    const GGS_equatableExtensionMap_2E_element var_node_3253 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_location_3311 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 84)) ;
      {
      GGS_equatableComparableExtension joker_3428 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_3428, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 85)) ;
      }
      GGS_bool var_currentlyEquatable_3440 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) ;
      GGS_bool var_currentlyComparable_3503 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) ;
      switch (var_node_3253.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_currentlyComparable_3503.boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_3311, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 91)) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_currentlyEquatable_3440.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_3311, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 93)) ;
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
                inCompiler->emitSemanticError (var_location_3311, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 97)) ;
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
            test_8 = var_currentlyComparable_3503.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_3311, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 102)) ;
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
              inCompiler->emitSemanticError (var_location_3311, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 106)) ;
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
  GGS_lstring var_key_6232 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 150)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6232, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 151)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6232, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_6476 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
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
          switch (var_node_6476.readProperty_mExtension ().enumValue ()) {
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
          switch (var_node_6476.readProperty_mExtension ().enumValue ()) {
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
  result_result = GGS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 143)) ;
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
  GGS_unifiedTypeMapEntry var_selfType_7431 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7431, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 173)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 173)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 173)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionSetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7431, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7431, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionSetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7431, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)) ;
      }
    }
  }
  GGS_string var_baseTypeName_8001 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_8048 = extensionGetter_definition (var_selfType_7431, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 180)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_8098 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_8156 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 182)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)).isValid ()) {
    uint32_t variant_8206 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)).uintValue () ;
    bool loop_8206 = true ;
    while (loop_8206) {
      loop_8206 = var_superType_8048.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8001.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).isValid () ;
      if (loop_8206) {
        loop_8206 = var_superType_8048.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8001.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).boolValue () ;
      }
      if (loop_8206 && (0 == variant_8206)) {
        loop_8206 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)) ;
      }
      if (loop_8206) {
        variant_8206 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8048, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8508 ;
            const GGS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GGS_methodKind joker_8477 ; // Joker input parameter
            GGS_bool joker_8500 ; // Joker input parameter
            GGS_string joker_8518 ; // Joker input parameter
            extensionGetter_definition (var_superType_8048, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8477, var_inheritedSignature_8098, joker_8500, var_qualifier_8508, joker_8518, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8508.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_8001 = extensionGetter_definition (var_superType_8048, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 188)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8048 = extensionGetter_definition (var_superType_8048, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 191)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_8001.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionSetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 194)) ;
    }
  }
  GGS_localVarManager var_variableMap_8901 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9107 ;
  {
  const GGS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_8901, var_formalParameterListForGeneration_9107, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 198)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_8001.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9107, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_8098, var_inheritedDeclarationLocation_8156, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 207)) ;
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
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 234)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 220)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 222)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 223)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_8724 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_8724.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_8724, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 235)) ;
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
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 251)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 251)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 251)) ;
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
  GGS_lstring var_nameForUsefulness_11405 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11405, var_nameForUsefulness_11405, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 283)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11593 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11593, var_nameForUsefulness_11405 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 285)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11797 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11797, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 289)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 289)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 289)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_11797, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)) ;
    }
  }
  GGS_string var_baseTypeName_12136 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_12181 = extensionGetter_definition (var_selfType_11797, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 294)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_12248 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_12279 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 296)) ;
  GGS_location var_inheritedDeclarationLocation_12343 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 297)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 298)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)).isValid ()) {
    uint32_t variant_12391 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 298)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)).uintValue () ;
    bool loop_12391 = true ;
    while (loop_12391) {
      loop_12391 = var_superType_12181.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 299)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 299)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12136.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)).isValid () ;
      if (loop_12391) {
        loop_12391 = var_superType_12181.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 299)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 299)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12136.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)).boolValue () ;
      }
      if (loop_12391 && (0 == variant_12391)) {
        loop_12391 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 298)) ;
      }
      if (loop_12391) {
        variant_12391 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_12181, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_12812 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_12673 ; // Joker input parameter
            GGS_bool joker_12750 ; // Joker input parameter
            GGS_string joker_12830 ; // Joker input parameter
            extensionGetter_definition (var_superType_12181, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_12673, var_inheritedSignature_12248, var_inheritedDeclarationLocation_12343, joker_12750, var_inheritedReturnType_12279, var_qualifier_12812, joker_12830, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_12812.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 311)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_12136 = extensionGetter_definition (var_superType_12181, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 312)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_12181 = extensionGetter_definition (var_superType_12181, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 315)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_12136.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 318)) ;
    }
  }
  GGS_analysisContext var_analysisContext_13195 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_11797, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 325))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 325)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13884 ;
  GGS_unifiedTypeMapEntry var_returnType_13947 ;
  GGS_string var_returnVariableCppName_13975 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_14044 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  const GGS_overridingExtensionGetterAST temp_18 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11405, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_13195, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_17.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_18.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13884, var_returnType_13947, var_returnVariableCppName_13975, var_semanticInstructionListForGeneration_14044, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 328)) ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_12136.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_overridingExtensionGetterAST temp_20 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13884, var_returnType_13947, temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_12248, var_inheritedReturnType_12279, var_inheritedDeclarationLocation_12343, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 345)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  const GGS_overridingExtensionGetterAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("override extension getter ").add_operation (temp_21.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 356)), GGS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("getter-").add_operation (temp_22.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 359)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 359)).add_operation (temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 359)), var_selfType_11797, var_baseTypeName_12136, temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13947, var_returnVariableCppName_13975, var_formalParameterListForGeneration_13884, extensionGetter_definition (var_selfType_11797, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 366)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_14044, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 355)) ;
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
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 391)) ;
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
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 415)) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)) ;
  GGS_string var_extensionGetterCode_18475 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 426)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 426)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 426)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 426)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_18475, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 425)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 436)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_18475, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 435))) ;
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
  GGS_lstring var_key_7152 = GGS_lstring::init_21__21_ (GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7152, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 177)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7152, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 178)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 178)) ;
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
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_7653 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  var_entry_7653.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 187)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_7653, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 191)) ;
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
  GGS_lstring var_nameForUsefulness_9656 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 228)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9656, var_nameForUsefulness_9656, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 229)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9834 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9834, var_nameForUsefulness_9656 COMMA_SOURCE_FILE ("extension-setter.galgas", 231)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10038 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
  GGS_string var_selfObjectName_10111 ;
  GGS_string var_selfObjectAccessor_10140 ;
  GGS_bool var_implementedAsFunction_10171 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10038, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 238)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 238)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectName_10111 = GGS_string ("object") ;
      var_selfObjectAccessor_10140 = GGS_string ("object->") ;
      var_implementedAsFunction_10171 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectName_10111 = GGS_string ("ioObject") ;
    var_selfObjectAccessor_10140 = GGS_string ("ioObject.") ;
    var_implementedAsFunction_10171 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContext_10529 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_10111, GGS_selfAvailability::class_func_available (var_selfType_10038, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 252))  COMMA_SOURCE_FILE ("extension-setter.galgas", 252)), var_selfObjectAccessor_10140, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11068 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_11114 ;
  {
  const GGS_extensionSetterAST temp_5 = this ;
  const GGS_extensionSetterAST temp_6 = this ;
  const GGS_extensionSetterAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_9656, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10529, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionSetterFormalParameterList (), temp_6.readProperty_mExtensionSetterInstructionList (), temp_7.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_11068, var_formalParameterListForGeneration_11114, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 255)) ;
  }
  const GGS_extensionSetterAST temp_8 = this ;
  const GGS_extensionSetterAST temp_9 = this ;
  const GGS_extensionSetterAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extension setter ").add_operation (temp_8.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 268)), GGS_extensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_10038, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)).add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)), var_selfType_10038, temp_10.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_10171, var_formalParameterListForGeneration_11114, extensionGetter_definition (var_selfType_10038, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 276)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11068, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 267)) ;
}

