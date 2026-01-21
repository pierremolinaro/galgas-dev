#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@rowList appendRow'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (GGS_rowList & ioObject,
                                const GGS_string constinArgument_inNodeDefinition,
                                const GGS_uint constinArgument_inRow,
                                const GGS_uint constinArgument_inColumn,
                                GGS_string & outArgument_outNodeName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNodeName.drop () ; // Release 'out' argument
  const GGS_rowList temp_0 = ioObject ;
  GGS_uint var_length_10305 = temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 281)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, var_length_10305.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_range enumerator_10377 (GGS_range (var_length_10305, constinArgument_inRow.substract_operation (var_length_10305, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 283)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 283)))) ;
      while (enumerator_10377.hasCurrentObject ()) {
        ioObject.addAssignOperation (GGS__32_stringlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284)) ;
        enumerator_10377.gotoNextObject () ;
      }
    }
  }
  const GGS_rowList temp_2 = ioObject ;
  GGS__32_stringlist var_cols_10439 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 288)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 290)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_range enumerator_10569 (GGS_range (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 291)), constinArgument_inColumn.substract_operation (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 291)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 291)))) ;
      while (enumerator_10569.hasCurrentObject ()) {
        var_cols_10439.addAssignOperation (GGS_string::makeEmptyString (), GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 292)) ;
        enumerator_10569.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GGS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)).add_operation (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 296)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)) ;
  var_cols_10439.addAssignOperation (outArgument_outNodeName, constinArgument_inNodeDefinition  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 297)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10439, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 299)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GGS_rowList & io_ioRowList,
                                                       const GGS_uint constin_inRow,
                                                       GGS_uint & io_ioColumn,
                                                       GGS_string & io_ioCurrentNode,
                                                       GGS_string & io_ioArrowShape,
                                                       GGS_string & io_ioArrows,
                                                       GGS_uint & io_ioMaxUsedRowIndex,
                                                       const GGS_bool constin_inDebug,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    inObject->method_tikzNodeForSyntaxInstruction (io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Extension Getter '@syntaxInstructionListForGrammarAnalysis displayVertically'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_displayVertically (const GGS_syntaxInstructionListForGrammarAnalysis & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_syntaxInstructionListForGrammarAnalysis temp_0 = inObject ;
  result_result = GGS_bool (ComparisonKind::greaterThan, temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 547)).objectCompare (GGS_uint (uint32_t (4U)))) ;
  const GGS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19028 (temp_1) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19028.hasCurrentObject () && bool_2) {
    while (enumerator_19028.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19028.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 549)) ;
      enumerator_19028.gotoNextObject () ;
      if (enumerator_19028.hasCurrentObject ()) {
        bool_2 = result_result.isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLinear (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST::objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const {
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

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::
init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                  const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRepeatInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRepeatInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRepeatInstructionAST_init_21__21__21_ (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation, inCompiler) ;
  const GGS_lexicalRepeatInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::
lexicalRepeatInstructionAST_init_21__21__21_ (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                              const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                              const GGS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalRepeatInstructionAST::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalRepeatInstructionAST::readProperty_mLexicalWhileBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalWhileBranchListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLexicalWhileBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalRepeatInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GGS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                    const GGS_location & in_mLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRepeatInstructionAST:") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRepeatInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mLexicalWhileBranchList.printNonNullClassInstanceProperties ("mLexicalWhileBranchList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST result ;
  const GGS_lexicalRepeatInstructionAST * p = (const GGS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST_2E_weak::objectCompare (const GGS_lexicalRepeatInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak & GGS_lexicalRepeatInstructionAST_2E_weak::operator = (const GGS_lexicalRepeatInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak::GGS_lexicalRepeatInstructionAST_2E_weak (const GGS_lexicalRepeatInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRepeatInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST_2E_weak::bang_lexicalRepeatInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRepeatInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRepeatInstructionAST) ;
      result = GGS_lexicalRepeatInstructionAST ((cPtr_lexicalRepeatInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ("lexicalRepeatInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRepeatInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRepeatInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRepeatInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST_2E_weak GGS_lexicalRepeatInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRepeatInstructionAST_2E_weak result ;
  const GGS_lexicalRepeatInstructionAST_2E_weak * p = (const GGS_lexicalRepeatInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRepeatInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cppTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppTypeName (const GGS_lexicalTypeEnum & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("utf32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("int32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("int64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendMethodName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendMethodName (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("appendChar") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("appendUnsigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("appendSigned") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("appendDouble") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_appendArgumentOfMethod (const GGS_lexicalTypeEnum & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum initialization'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initialization (const GGS_lexicalTypeEnum & inObject,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (".removeAllKeepingCapacity ()") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = utf32 (0)") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" = BigSigned ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("SInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("SInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("UInt64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("Int32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("Int64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("Double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GGS_lexicalTypeEnum & inObject,
                                                             Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum swiftInitializationCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftInitializationCode (const GGS_lexicalTypeEnum & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("\"\"") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaResetPrefix (const GGS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("[") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cocoaReset'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cocoaReset (const GGS_lexicalTypeEnum & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string (" = 0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string (" = 0.0") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    inObject->method_checkLexicalDefaultAction (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (cPtr_lexicalExpressionAST * inObject,
                                                 GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    inObject->method_checkLexicalExpression (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalFunctionCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalTypeEnum constin_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, constin_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (cPtr_lexicalInstructionAST * inObject,
                                                  GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GGS_lexicalTagMap & io_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    inObject->method_checkLexicalInstruction (io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (cPtr_abstractLexicalRuleAST * inObject,
                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    inObject->method_checkLexicalRule (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST::objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::
init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
              const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStructuredSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStructuredSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalStructuredSendInstructionAST_init_21__21_ (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction, inCompiler) ;
  const GGS_lexicalStructuredSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::
lexicalStructuredSendInstructionAST_init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                  const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSendSearchListAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendSearchListAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendSearchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendDefaultAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendDefaultActionAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendDefaultAction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStructuredSendInstructionAST:") ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStructuredSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSendSearchList.printNonNullClassInstanceProperties ("mLexicalSendSearchList") ;
    mProperty_mLexicalSendDefaultAction.printNonNullClassInstanceProperties ("mLexicalSendDefaultAction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST result ;
  const GGS_lexicalStructuredSendInstructionAST * p = (const GGS_lexicalStructuredSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak & GGS_lexicalStructuredSendInstructionAST_2E_weak::operator = (const GGS_lexicalStructuredSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (const GGS_lexicalStructuredSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStructuredSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStructuredSendInstructionAST) ;
      result = GGS_lexicalStructuredSendInstructionAST ((cPtr_lexicalStructuredSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ("lexicalStructuredSendInstructionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStructuredSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStructuredSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStructuredSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  const GGS_lexicalStructuredSendInstructionAST_2E_weak * p = (const GGS_lexicalStructuredSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStructuredSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@location sourceFile'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_sourceFile (const GGS_location & inObject,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_location temp_1 = inObject ;
    test_0 = temp_1.getter_isNowhere (SOURCE_FILE ("semanticContext.galgas", 26)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("SOURCE_FILE (\"\", 0)") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_location temp_2 = inObject ;
    const GGS_location temp_3 = inObject ;
    result_result = GGS_string ("SOURCE_FILE (").add_operation (temp_2.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("semanticContext.galgas", 29)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (temp_3.getter_startLine (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).getter_string (SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@location commaSourceFile'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_commaSourceFile (const GGS_location & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_location temp_0 = inObject ;
  result_result = GGS_string (" COMMA_").add_operation (extensionGetter_sourceFile (temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 36)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (cPtr_semanticExpressionAST * inObject,
                                                           GGS_unifiedTypeMap & io_ioTypeMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    inObject->method_enterExpressionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const GGS_semanticInstructionListAST inObject,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionListAST temp_0 = inObject ;
  UpEnumerator_semanticInstructionListAST enumerator_2888 (temp_0) ;
  while (enumerator_2888.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionInSemanticContext ((cPtr_semanticInstructionAST *) enumerator_2888.current_mInstruction (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 65)) ;
    enumerator_2888.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @grammarLabelMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap::GGS_grammarLabelMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap::~ GGS_grammarLabelMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap::GGS_grammarLabelMap (const GGS_grammarLabelMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap & GGS_grammarLabelMap::operator = (const GGS_grammarLabelMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarLabelMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarLabelMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_grammarLabelMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_grammarLabelMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarLabelMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_grammarLabelMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarLabelMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_grammarLabelMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::performInsert (const GGS_grammarLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_grammarLabelMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>
GGS_grammarLabelMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_grammarLabelMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>>
GGS_grammarLabelMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_grammarLabelMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element_3F_ GGS_grammarLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_grammarLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_grammarLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_grammarLabelMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelSignature = info->mProperty_mLabelSignature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::class_func_mapWithMapToOverride (const GGS_grammarLabelMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_grammarLabelMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_grammarLabelMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_formalParameterSignature inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_grammarLabelMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' grammar label has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_formalParameterSignature & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' grammar label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLabelSignature ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_grammarLabelMap::getter_mLabelSignatureForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::setter_setMLabelSignatureForKey (GGS_formalParameterSignature inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_grammarLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_grammarLabelMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> & inArray,
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
    ioString.appendString ("mLabelSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelSignature.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarLabelMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarLabelMap_2E_element>> array = sortedInfoArray () ;
    GGS_grammarLabelMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_grammarLabelMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_grammarLabelMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @grammarLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_grammarLabelMap::DownEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element DownEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelSignature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @grammarLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_grammarLabelMap::UpEnumerator_grammarLabelMap (const GGS_grammarLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap_2E_element UpEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelSignature ;
}


//--------------------------------------------------------------------------------------------------
//     @grammarLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarLabelMap ("grammarLabelMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarLabelMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_grammarLabelMap result ;
  const GGS_grammarLabelMap * p = (const GGS_grammarLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @grammarMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_grammarMap::GGS_grammarMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap::~ GGS_grammarMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap::GGS_grammarMap (const GGS_grammarMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap & GGS_grammarMap::operator = (const GGS_grammarMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_hasKey (const GGS_string & inKey
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                               const GGS_uint & inLevel
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_grammarMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_grammarMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarMap::getter_locationForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_grammarMap::getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_grammarMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_grammarMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::performInsert (const GGS_grammarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_grammarMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>
GGS_grammarMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_grammarMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>>
GGS_grammarMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_grammarMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element_3F_ GGS_grammarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_grammarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_grammarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_grammarMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelMap = info->mProperty_mLabelMap ;
      element.mProperty_mHasIndexing = info->mProperty_mHasIndexing ;
      element.mProperty_mHasTranslateFeature = info->mProperty_mHasTranslateFeature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::class_func_mapWithMapToOverride (const GGS_grammarMap & inMapToOverride
                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_grammarMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_grammarMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_insertGrammar (GGS_lstring inLKey,
                                           GGS_grammarLabelMap inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_bool inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_grammarMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' grammar has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::method_searchKey (GGS_lstring inLKey,
                                       GGS_grammarLabelMap & outArgument0,
                                       GGS_bool & outArgument1,
                                       GGS_bool & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' grammar is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mLabelMap ;
    outArgument1 = info->mProperty_mHasIndexing ;
    outArgument2 = info->mProperty_mHasTranslateFeature ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap GGS_grammarMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_grammarLabelMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_mHasIndexingForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasIndexing ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarMap::getter_mHasTranslateFeatureForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasTranslateFeature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMLabelMapForKey (GGS_grammarLabelMap inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_grammarMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMHasIndexingForKey (GGS_bool inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_grammarMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasIndexing = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::setter_setMHasTranslateFeatureForKey (GGS_bool inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_grammarMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasTranslateFeature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_grammarMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> & inArray,
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
    ioString.appendString ("mLabelMap:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasIndexing:") ;
    inArray (i COMMA_HERE)->mProperty_mHasIndexing.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasTranslateFeature:") ;
    inArray (i COMMA_HERE)->mProperty_mHasTranslateFeature.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_grammarMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_grammarMap_2E_element>> array = sortedInfoArray () ;
    GGS_grammarMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_grammarMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_grammarMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @grammarMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_grammarMap::DownEnumerator_grammarMap (const GGS_grammarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element DownEnumerator_grammarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap DownEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasIndexing ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @grammarMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_grammarMap::UpEnumerator_grammarMap (const GGS_grammarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap_2E_element UpEnumerator_grammarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarLabelMap UpEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasIndexing ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasTranslateFeature ;
}


//--------------------------------------------------------------------------------------------------
//     @grammarMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarMap ("grammarMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarMap GGS_grammarMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_grammarMap result ;
  const GGS_grammarMap * p = (const GGS_grammarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @functionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_functionMap::GGS_functionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap::~ GGS_functionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap::GGS_functionMap (const GGS_functionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap & GGS_functionMap::operator = (const GGS_functionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_functionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_functionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_functionMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_functionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_functionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::performInsert (const GGS_functionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_functionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>
GGS_functionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_functionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>>
GGS_functionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_functionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element_3F_ GGS_functionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_functionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_functionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_functionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFunctionSignature = info->mProperty_mFunctionSignature ;
      element.mProperty_mResultType = info->mProperty_mResultType ;
      element.mProperty_mIsInternal = info->mProperty_mIsInternal ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::class_func_mapWithMapToOverride (const GGS_functionMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_functionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_functionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_functionSignature inArgument0,
                                        GGS_unifiedTypeMapEntry inArgument1,
                                        GGS_bool inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_functionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' function has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_functionSignature & outArgument0,
                                        GGS_unifiedTypeMapEntry & outArgument1,
                                        GGS_bool & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' function is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mFunctionSignature ;
    outArgument1 = info->mProperty_mResultType ;
    outArgument2 = info->mProperty_mIsInternal ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionMap::getter_mFunctionSignatureForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFunctionSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mResultType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionMap::getter_mIsInternalForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsInternal ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMFunctionSignatureForKey (GGS_functionSignature inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_functionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFunctionSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMResultTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_functionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mResultType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_functionMap::setter_setMIsInternalForKey (GGS_bool inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_functionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsInternal = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_functionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> & inArray,
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
    ioString.appendString ("mFunctionSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mFunctionSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mResultType:") ;
    inArray (i COMMA_HERE)->mProperty_mResultType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsInternal:") ;
    inArray (i COMMA_HERE)->mProperty_mIsInternal.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_functionMap_2E_element>> array = sortedInfoArray () ;
    GGS_functionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_functionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_functionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @functionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_functionMap::DownEnumerator_functionMap (const GGS_functionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element DownEnumerator_functionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFunctionSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @functionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_functionMap::UpEnumerator_functionMap (const GGS_functionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap_2E_element UpEnumerator_functionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFunctionSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsInternal ;
}


//--------------------------------------------------------------------------------------------------
//     @functionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionMap GGS_functionMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_functionMap result ;
  const GGS_functionMap * p = (const GGS_functionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap::GGS_filewrapperTemplateMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap::~ GGS_filewrapperTemplateMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap::GGS_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap & GGS_filewrapperTemplateMap::operator = (const GGS_filewrapperTemplateMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperTemplateMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperTemplateMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperTemplateMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperTemplateMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_filewrapperTemplateMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_filewrapperTemplateMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_filewrapperTemplateMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::performInsert (const GGS_filewrapperTemplateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_filewrapperTemplateMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>
GGS_filewrapperTemplateMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_filewrapperTemplateMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>>
GGS_filewrapperTemplateMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_filewrapperTemplateMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element_3F_ GGS_filewrapperTemplateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_filewrapperTemplateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_filewrapperTemplateMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTemplateSignature = info->mProperty_mTemplateSignature ;
      element.mProperty_mFilewrapperTemplatePath = info->mProperty_mFilewrapperTemplatePath ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::class_func_mapWithMapToOverride (const GGS_filewrapperTemplateMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_filewrapperTemplateMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_functionSignature inArgument0,
                                                   GGS_lstring inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_filewrapperTemplateMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper template has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_functionSignature & outArgument0,
                                                   GGS_lstring & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' filewrapper template is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mTemplateSignature ;
    outArgument1 = info->mProperty_mFilewrapperTemplatePath ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_filewrapperTemplateMap::getter_mTemplateSignatureForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTemplateSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateMap::getter_mFilewrapperTemplatePathForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperTemplatePath ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_setMTemplateSignatureForKey (GGS_functionSignature inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperTemplateMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTemplateSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::setter_setMFilewrapperTemplatePathForKey (GGS_lstring inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperTemplateMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperTemplatePath = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_filewrapperTemplateMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> & inArray,
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
    ioString.appendString ("mTemplateSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mTemplateSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFilewrapperTemplatePath:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> array = sortedInfoArray () ;
    GGS_filewrapperTemplateMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_filewrapperTemplateMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_filewrapperTemplateMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateMap::DownEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element DownEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTemplateSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @filewrapperTemplateMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateMap::UpEnumerator_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap_2E_element UpEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTemplateSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperTemplatePath ;
}


//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ("filewrapperTemplateMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperTemplateMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap result ;
  const GGS_filewrapperTemplateMap * p = (const GGS_filewrapperTemplateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @filewrapperMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap::GGS_filewrapperMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap::~ GGS_filewrapperMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap::GGS_filewrapperMap (const GGS_filewrapperMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap & GGS_filewrapperMap::operator = (const GGS_filewrapperMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_filewrapperMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_filewrapperMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_filewrapperMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::performInsert (const GGS_filewrapperMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>
GGS_filewrapperMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_filewrapperMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>>
GGS_filewrapperMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_filewrapperMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element_3F_ GGS_filewrapperMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_filewrapperMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_filewrapperMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFilewrapperPath = info->mProperty_mFilewrapperPath ;
      element.mProperty_mFilewrapperExtensionList = info->mProperty_mFilewrapperExtensionList ;
      element.mProperty_mFilewrapperFileMap = info->mProperty_mFilewrapperFileMap ;
      element.mProperty_mFilewrapperDirectoryMap = info->mProperty_mFilewrapperDirectoryMap ;
      element.mProperty_mFilewrapperTemplateMap = info->mProperty_mFilewrapperTemplateMap ;
      element.mProperty_mIsInternal = info->mProperty_mIsInternal ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::class_func_mapWithMapToOverride (const GGS_filewrapperMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_filewrapperMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_filewrapperMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lstring inArgument0,
                                           GGS_lstringlist inArgument1,
                                           GGS_wrapperFileMap inArgument2,
                                           GGS_wrapperDirectoryMap inArgument3,
                                           GGS_filewrapperTemplateMap inArgument4,
                                           GGS_bool inArgument5,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_filewrapperMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lstring & outArgument0,
                                           GGS_lstringlist & outArgument1,
                                           GGS_wrapperFileMap & outArgument2,
                                           GGS_wrapperDirectoryMap & outArgument3,
                                           GGS_filewrapperTemplateMap & outArgument4,
                                           GGS_bool & outArgument5,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' filewrapper is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    outArgument0 = info->mProperty_mFilewrapperPath ;
    outArgument1 = info->mProperty_mFilewrapperExtensionList ;
    outArgument2 = info->mProperty_mFilewrapperFileMap ;
    outArgument3 = info->mProperty_mFilewrapperDirectoryMap ;
    outArgument4 = info->mProperty_mFilewrapperTemplateMap ;
    outArgument5 = info->mProperty_mIsInternal ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperMap::getter_mFilewrapperPathForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperPath ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperMap::getter_mFilewrapperExtensionListForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperExtensionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_filewrapperMap::getter_mFilewrapperFileMapForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_wrapperFileMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperFileMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_filewrapperMap::getter_mFilewrapperDirectoryMapForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_wrapperDirectoryMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperDirectoryMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap GGS_filewrapperMap::getter_mFilewrapperTemplateMapForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFilewrapperTemplateMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperMap::getter_mIsInternalForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsInternal ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperPathForKey (GGS_lstring inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperPath = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperExtensionListForKey (GGS_lstringlist inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperExtensionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperFileMapForKey (GGS_wrapperFileMap inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperFileMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperDirectoryMapForKey (GGS_wrapperDirectoryMap inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperDirectoryMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMFilewrapperTemplateMapForKey (GGS_filewrapperTemplateMap inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFilewrapperTemplateMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::setter_setMIsInternalForKey (GGS_bool inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_filewrapperMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsInternal = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_filewrapperMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> & inArray,
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
    ioString.appendString ("mFilewrapperPath:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperPath.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFilewrapperExtensionList:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperExtensionList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFilewrapperFileMap:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperFileMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFilewrapperDirectoryMap:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFilewrapperTemplateMap:") ;
    inArray (i COMMA_HERE)->mProperty_mFilewrapperTemplateMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsInternal:") ;
    inArray (i COMMA_HERE)->mProperty_mIsInternal.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperMap_2E_element>> array = sortedInfoArray () ;
    GGS_filewrapperMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_filewrapperMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_filewrapperMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @filewrapperMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperMap::DownEnumerator_filewrapperMap (const GGS_filewrapperMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element DownEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperExtensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap DownEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap DownEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap DownEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @filewrapperMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperMap::UpEnumerator_filewrapperMap (const GGS_filewrapperMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap_2E_element UpEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperExtensionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap UpEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperFileMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap UpEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperDirectoryMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateMap UpEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFilewrapperTemplateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsInternal ;
}


//--------------------------------------------------------------------------------------------------
//     @filewrapperMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperMap ("filewrapperMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperMap GGS_filewrapperMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperMap result ;
  const GGS_filewrapperMap * p = (const GGS_filewrapperMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis::GGS_optionComponentMapForSemanticAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis::~ GGS_optionComponentMapForSemanticAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis::GGS_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis & GGS_optionComponentMapForSemanticAnalysis::operator = (const GGS_optionComponentMapForSemanticAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForSemanticAnalysis::getter_hasKey (const GGS_string & inKey
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForSemanticAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                          const GGS_uint & inLevel
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForSemanticAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_optionComponentMapForSemanticAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_optionComponentMapForSemanticAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_optionComponentMapForSemanticAnalysis::getter_keyList (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionComponentMapForSemanticAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForSemanticAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::performInsert (const GGS_optionComponentMapForSemanticAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>
GGS_optionComponentMapForSemanticAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_optionComponentMapForSemanticAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>>
GGS_optionComponentMapForSemanticAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_optionComponentMapForSemanticAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ GGS_optionComponentMapForSemanticAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_optionComponentMapForSemanticAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_optionComponentMapForSemanticAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsPredefined = info->mProperty_mIsPredefined ;
      element.mProperty_mBoolOptionMap = info->mProperty_mBoolOptionMap ;
      element.mProperty_mUIntOptionMap = info->mProperty_mUIntOptionMap ;
      element.mProperty_mStringOptionMap = info->mProperty_mStringOptionMap ;
      element.mProperty_mStringListOptionMap = info->mProperty_mStringListOptionMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::class_func_mapWithMapToOverride (const GGS_optionComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForSemanticAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_optionComponentMapForSemanticAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                  GGS_bool inArgument0,
                                                                  GGS_commandLineOptionMap inArgument1,
                                                                  GGS_commandLineOptionMap inArgument2,
                                                                  GGS_commandLineOptionMap inArgument3,
                                                                  GGS_commandLineOptionMap inArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_optionComponentMapForSemanticAnalysis_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                  GGS_bool & outArgument0,
                                                                  GGS_commandLineOptionMap & outArgument1,
                                                                  GGS_commandLineOptionMap & outArgument2,
                                                                  GGS_commandLineOptionMap & outArgument3,
                                                                  GGS_commandLineOptionMap & outArgument4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' option component is not imported" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mIsPredefined ;
    outArgument1 = info->mProperty_mBoolOptionMap ;
    outArgument2 = info->mProperty_mUIntOptionMap ;
    outArgument3 = info->mProperty_mStringOptionMap ;
    outArgument4 = info->mProperty_mStringListOptionMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentMapForSemanticAnalysis::getter_mIsPredefinedForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsPredefined ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mBoolOptionMapForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBoolOptionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mUIntOptionMapForKey (const GGS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUIntOptionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mStringOptionMapForKey (const GGS_string & inKey,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStringOptionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_optionComponentMapForSemanticAnalysis::getter_mStringListOptionMapForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStringListOptionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMIsPredefinedForKey (GGS_bool inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsPredefined = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMBoolOptionMapForKey (GGS_commandLineOptionMap inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBoolOptionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMUIntOptionMapForKey (GGS_commandLineOptionMap inValue,
                                                                                GGS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUIntOptionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMStringOptionMapForKey (GGS_commandLineOptionMap inValue,
                                                                                  GGS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStringOptionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::setter_setMStringListOptionMapForKey (GGS_commandLineOptionMap inValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_optionComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStringListOptionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_optionComponentMapForSemanticAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> & inArray,
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
    ioString.appendString ("mIsPredefined:") ;
    inArray (i COMMA_HERE)->mProperty_mIsPredefined.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBoolOptionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mBoolOptionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUIntOptionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mUIntOptionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStringOptionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mStringOptionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStringListOptionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mStringListOptionMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_optionComponentMapForSemanticAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_optionComponentMapForSemanticAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_optionComponentMapForSemanticAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_optionComponentMapForSemanticAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_optionComponentMapForSemanticAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_optionComponentMapForSemanticAnalysis::DownEnumerator_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element DownEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBoolOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUIntOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStringOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap DownEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStringListOptionMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @optionComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_optionComponentMapForSemanticAnalysis::UpEnumerator_optionComponentMapForSemanticAnalysis (const GGS_optionComponentMapForSemanticAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis_2E_element UpEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBoolOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUIntOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStringOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap UpEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStringListOptionMap ;
}


//--------------------------------------------------------------------------------------------------
//     @optionComponentMapForSemanticAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ("optionComponentMapForSemanticAnalysis",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentMapForSemanticAnalysis GGS_optionComponentMapForSemanticAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionComponentMapForSemanticAnalysis result ;
  const GGS_optionComponentMapForSemanticAnalysis * p = (const GGS_optionComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::~ GGS_lexiqueComponentMapForSemanticAnalysis (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis::GGS_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis & GGS_lexiqueComponentMapForSemanticAnalysis::operator = (const GGS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentMapForSemanticAnalysis::getter_hasKey (const GGS_string & inKey
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentMapForSemanticAnalysis::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                           const GGS_uint & inLevel
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexiqueComponentMapForSemanticAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_lexiqueComponentMapForSemanticAnalysis::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexiqueComponentMapForSemanticAnalysis::getter_locationForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_lexiqueComponentMapForSemanticAnalysis::getter_keyList (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::performInsert (const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>
GGS_lexiqueComponentMapForSemanticAnalysis::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_lexiqueComponentMapForSemanticAnalysis::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>>
GGS_lexiqueComponentMapForSemanticAnalysis::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_lexiqueComponentMapForSemanticAnalysis::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ GGS_lexiqueComponentMapForSemanticAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_lexiqueComponentMapForSemanticAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_lexiqueComponentMapForSemanticAnalysis_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsTemplate = info->mProperty_mIsTemplate ;
      element.mProperty_mTerminalMap = info->mProperty_mTerminalMap ;
      element.mProperty_mIndexingListAST = info->mProperty_mIndexingListAST ;
      element.mProperty_mTerminalListAST = info->mProperty_mTerminalListAST ;
      element.mProperty_mLexicalAttributeListAST = info->mProperty_mLexicalAttributeListAST ;
      element.mProperty_mLexicalStyleListAST = info->mProperty_mLexicalStyleListAST ;
      element.mProperty_mLexicalListDeclarationListAST = info->mProperty_mLexicalListDeclarationListAST ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::class_func_mapWithMapToOverride (const GGS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_insertKey (GGS_lstring inLKey,
                                                                   GGS_bool inArgument0,
                                                                   GGS_terminalMap inArgument1,
                                                                   GGS_indexingListAST inArgument2,
                                                                   GGS_terminalDeclarationListAST inArgument3,
                                                                   GGS_lexicalAttributeListAST inArgument4,
                                                                   GGS_lexicalStyleListAST inArgument5,
                                                                   GGS_lexicalListDeclarationListAST inArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lexiqueComponentMapForSemanticAnalysis_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                   GGS_bool & outArgument0,
                                                                   GGS_terminalMap & outArgument1,
                                                                   GGS_indexingListAST & outArgument2,
                                                                   GGS_terminalDeclarationListAST & outArgument3,
                                                                   GGS_lexicalAttributeListAST & outArgument4,
                                                                   GGS_lexicalStyleListAST & outArgument5,
                                                                   GGS_lexicalListDeclarationListAST & outArgument6,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' lexique component is not imported" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    outArgument0 = info->mProperty_mIsTemplate ;
    outArgument1 = info->mProperty_mTerminalMap ;
    outArgument2 = info->mProperty_mIndexingListAST ;
    outArgument3 = info->mProperty_mTerminalListAST ;
    outArgument4 = info->mProperty_mLexicalAttributeListAST ;
    outArgument5 = info->mProperty_mLexicalStyleListAST ;
    outArgument6 = info->mProperty_mLexicalListDeclarationListAST ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIsTemplateForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsTemplate ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_terminalMap GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalMapForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_terminalMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminalMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingListASTForKey (const GGS_string & inKey,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_indexingListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndexingListAST ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalListASTForKey (const GGS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalDeclarationListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTerminalListAST ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalAttributeListASTForKey (const GGS_string & inKey,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalAttributeListAST ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalStyleListASTForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalStyleListAST ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexiqueComponentMapForSemanticAnalysis::getter_mLexicalListDeclarationListASTForKey (const GGS_string & inKey,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lexicalListDeclarationListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexicalListDeclarationListAST ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIsTemplateForKey (GGS_bool inValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsTemplate = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalMapForKey (GGS_terminalMap inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminalMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingListASTForKey (GGS_indexingListAST inValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndexingListAST = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalListASTForKey (GGS_terminalDeclarationListAST inValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTerminalListAST = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalAttributeListASTForKey (GGS_lexicalAttributeListAST inValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalAttributeListAST = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalStyleListASTForKey (GGS_lexicalStyleListAST inValue,
                                                                                       GGS_string inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalStyleListAST = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::setter_setMLexicalListDeclarationListASTForKey (GGS_lexicalListDeclarationListAST inValue,
                                                                                                 GGS_string inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexicalListDeclarationListAST = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_lexiqueComponentMapForSemanticAnalysis_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> & inArray,
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
    ioString.appendString ("mIsTemplate:") ;
    inArray (i COMMA_HERE)->mProperty_mIsTemplate.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminalMap:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminalMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndexingListAST:") ;
    inArray (i COMMA_HERE)->mProperty_mIndexingListAST.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTerminalListAST:") ;
    inArray (i COMMA_HERE)->mProperty_mTerminalListAST.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalAttributeListAST:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalAttributeListAST.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalStyleListAST:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalStyleListAST.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLexicalListDeclarationListAST:") ;
    inArray (i COMMA_HERE)->mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueComponentMapForSemanticAnalysis::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> array = sortedInfoArray () ;
    GGS_lexiqueComponentMapForSemanticAnalysis_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_lexiqueComponentMapForSemanticAnalysis_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_lexiqueComponentMapForSemanticAnalysis_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexiqueComponentMapForSemanticAnalysis::DownEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST DownEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @lexiqueComponentMapForSemanticAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexiqueComponentMapForSemanticAnalysis::UpEnumerator_lexiqueComponentMapForSemanticAnalysis (const GGS_lexiqueComponentMapForSemanticAnalysis & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis_2E_element UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIsTemplate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsTemplate ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalMap UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTerminalListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalAttributeListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalStyleListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST UpEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mLexicalListDeclarationListAST (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexicalListDeclarationListAST ;
}


//--------------------------------------------------------------------------------------------------
//     @lexiqueComponentMapForSemanticAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentMapForSemanticAnalysis GGS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexiqueComponentMapForSemanticAnalysis result ;
  const GGS_lexiqueComponentMapForSemanticAnalysis * p = (const GGS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::~ GGS_syntaxComponentMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap::GGS_syntaxComponentMap (const GGS_syntaxComponentMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap & GGS_syntaxComponentMap::operator = (const GGS_syntaxComponentMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxComponentMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxComponentMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxComponentMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxComponentMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxComponentMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_syntaxComponentMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxComponentMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_syntaxComponentMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::performInsert (const GGS_syntaxComponentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_syntaxComponentMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>
GGS_syntaxComponentMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_syntaxComponentMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>>
GGS_syntaxComponentMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_syntaxComponentMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element_3F_ GGS_syntaxComponentMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_syntaxComponentMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_syntaxComponentMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLexiqueName = info->mProperty_mLexiqueName ;
      element.mProperty_mNonterminalDeclarationList = info->mProperty_mNonterminalDeclarationList ;
      element.mProperty_mRuleList = info->mProperty_mRuleList ;
      element.mProperty_mHasTranslateFeature = info->mProperty_mHasTranslateFeature ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::class_func_mapWithMapToOverride (const GGS_syntaxComponentMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_syntaxComponentMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_lstring inArgument0,
                                               GGS_nonterminalDeclarationListAST inArgument1,
                                               GGS_syntaxRuleListAST inArgument2,
                                               GGS_bool inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_lstring & outArgument0,
                                               GGS_nonterminalDeclarationListAST & outArgument1,
                                               GGS_syntaxRuleListAST & outArgument2,
                                               GGS_bool & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' syntax component is not parsed" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mLexiqueName ;
    outArgument1 = info->mProperty_mNonterminalDeclarationList ;
    outArgument2 = info->mProperty_mRuleList ;
    outArgument3 = info->mProperty_mHasTranslateFeature ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxComponentMap::getter_mLexiqueNameForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLexiqueName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_syntaxComponentMap::getter_mNonterminalDeclarationListForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_nonterminalDeclarationListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNonterminalDeclarationList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_syntaxComponentMap::getter_mRuleListForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_syntaxRuleListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRuleList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxComponentMap::getter_mHasTranslateFeatureForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasTranslateFeature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMLexiqueNameForKey (GGS_lstring inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_syntaxComponentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLexiqueName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMNonterminalDeclarationListForKey (GGS_nonterminalDeclarationListAST inValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_syntaxComponentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNonterminalDeclarationList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMRuleListForKey (GGS_syntaxRuleListAST inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_syntaxComponentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRuleList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::setter_setMHasTranslateFeatureForKey (GGS_bool inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_syntaxComponentMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasTranslateFeature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_syntaxComponentMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> & inArray,
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
    ioString.appendString ("mLexiqueName:") ;
    inArray (i COMMA_HERE)->mProperty_mLexiqueName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNonterminalDeclarationList:") ;
    inArray (i COMMA_HERE)->mProperty_mNonterminalDeclarationList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRuleList:") ;
    inArray (i COMMA_HERE)->mProperty_mRuleList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasTranslateFeature:") ;
    inArray (i COMMA_HERE)->mProperty_mHasTranslateFeature.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_syntaxComponentMap_2E_element>> array = sortedInfoArray () ;
    GGS_syntaxComponentMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_syntaxComponentMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_syntaxComponentMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxComponentMap::DownEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element DownEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST DownEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST DownEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @syntaxComponentMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxComponentMap::UpEnumerator_syntaxComponentMap (const GGS_syntaxComponentMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap_2E_element UpEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLexiqueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST UpEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST UpEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasTranslateFeature ;
}


//--------------------------------------------------------------------------------------------------
//     @syntaxComponentMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentMap GGS_syntaxComponentMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentMap result ;
  const GGS_syntaxComponentMap * p = (const GGS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::~ GGS_extensionInitializerMapForType (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType::GGS_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType & GGS_extensionInitializerMapForType::operator = (const GGS_extensionInitializerMapForType & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionInitializerMapForType::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionInitializerMapForType::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionInitializerMapForType::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionInitializerMapForType::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionInitializerMapForType::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionInitializerMapForType::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerMapForType::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerMapForType_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::performInsert (const GGS_extensionInitializerMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionInitializerMapForType_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>
GGS_extensionInitializerMapForType::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionInitializerMapForType::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>>
GGS_extensionInitializerMapForType::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionInitializerMapForType::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element_3F_ GGS_extensionInitializerMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionInitializerMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerMapForType_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalParameterList = info->mProperty_mFormalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::class_func_mapWithMapToOverride (const GGS_extensionInitializerMapForType & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerMapForType_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_insertKey (GGS_lstring inLKey,
                                                           GGS_formalInputParameterListAST inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_extensionInitializerMapForType_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' initializer has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionInitializerMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::setter_setMFormalParameterListForKey (GGS_formalInputParameterListAST inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionInitializerMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionInitializerMapForType_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> & inArray,
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
    ioString.appendString ("mFormalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalParameterList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerMapForType::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerMapForType_2E_element>> array = sortedInfoArray () ;
    GGS_extensionInitializerMapForType_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerMapForType_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionInitializerMapForType_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionInitializerMapForType::DownEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element DownEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST DownEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionInitializerMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionInitializerMapForType::UpEnumerator_extensionInitializerMapForType (const GGS_extensionInitializerMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType_2E_element UpEnumerator_extensionInitializerMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionInitializerMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST UpEnumerator_extensionInitializerMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionInitializerMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ("extensionInitializerMapForType",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerMapForType::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerMapForType result ;
  const GGS_extensionInitializerMapForType * p = (const GGS_extensionInitializerMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::~ GGS_extensionInitializerForBuildingContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext::GGS_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext & GGS_extensionInitializerForBuildingContext::operator = (const GGS_extensionInitializerForBuildingContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionInitializerForBuildingContext::getter_hasKey (const GGS_string & inKey
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionInitializerForBuildingContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                           const GGS_uint & inLevel
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionInitializerForBuildingContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionInitializerForBuildingContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionInitializerForBuildingContext::getter_locationForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionInitializerForBuildingContext::getter_keyList (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionInitializerForBuildingContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerForBuildingContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::performInsert (const GGS_extensionInitializerForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionInitializerForBuildingContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>
GGS_extensionInitializerForBuildingContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionInitializerForBuildingContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>>
GGS_extensionInitializerForBuildingContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionInitializerForBuildingContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element_3F_ GGS_extensionInitializerForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionInitializerForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionInitializerForBuildingContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtensionInitializerMapForType = info->mProperty_mExtensionInitializerMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element GGS_extensionInitializerForBuildingContext
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "internal error" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionInitializerForBuildingContext & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerForBuildingContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForBuildingContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_insertKey (GGS_lstring inLKey,
                                                                   GGS_extensionInitializerMapForType inArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_extensionInitializerForBuildingContext_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::method_searchKey (GGS_lstring inLKey,
                                                                   GGS_extensionInitializerMapForType & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtensionInitializerMapForType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_replaceKey (GGS_extensionInitializerForBuildingContext_2E_element inElement,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "internal error" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionInitializerForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType GGS_extensionInitializerForBuildingContext::getter_mExtensionInitializerMapForTypeForKey (const GGS_string & inKey,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerMapForType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtensionInitializerMapForType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::setter_setMExtensionInitializerMapForTypeForKey (GGS_extensionInitializerMapForType inValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionInitializerForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtensionInitializerMapForType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionInitializerForBuildingContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> & inArray,
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
    ioString.appendString ("mExtensionInitializerMapForType:") ;
    inArray (i COMMA_HERE)->mProperty_mExtensionInitializerMapForType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionInitializerForBuildingContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionInitializerForBuildingContext_2E_element>> array = sortedInfoArray () ;
    GGS_extensionInitializerForBuildingContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionInitializerForBuildingContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionInitializerForBuildingContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionInitializerForBuildingContext::DownEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element DownEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType DownEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionInitializerMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionInitializerForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionInitializerForBuildingContext::UpEnumerator_extensionInitializerForBuildingContext (const GGS_extensionInitializerForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext_2E_element UpEnumerator_extensionInitializerForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionInitializerForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerMapForType UpEnumerator_extensionInitializerForBuildingContext::current_mExtensionInitializerMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionInitializerMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ("extensionInitializerForBuildingContext",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForBuildingContext GGS_extensionInitializerForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForBuildingContext result ;
  const GGS_extensionInitializerForBuildingContext * p = (const GGS_extensionInitializerForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::~ GGS_extensionMethodMapForType (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType::GGS_extensionMethodMapForType (const GGS_extensionMethodMapForType & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType & GGS_extensionMethodMapForType::operator = (const GGS_extensionMethodMapForType & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForType::getter_hasKey (const GGS_string & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForType::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                              const GGS_uint & inLevel
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForType::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForType::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMethodMapForType::getter_locationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionMethodMapForType::getter_keyList (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForType::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForType_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::performInsert (const GGS_extensionMethodMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForType_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>
GGS_extensionMethodMapForType::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMethodMapForType::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>>
GGS_extensionMethodMapForType::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMethodMapForType::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element_3F_ GGS_extensionMethodMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMethodMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForType_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalParameterList = info->mProperty_mFormalParameterList ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForType_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_insertKey (GGS_lstring inLKey,
                                                      GGS_formalParameterListAST inArgument0,
                                                      GGS_methodQualifier inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_extensionMethodMapForType_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionMethodMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionMethodMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMFormalParameterListForKey (GGS_formalParameterListAST inValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionMethodMapForType_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> & inArray,
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
    ioString.appendString ("mFormalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForType::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForType_2E_element>> array = sortedInfoArray () ;
    GGS_extensionMethodMapForType_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForType_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionMethodMapForType_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForType::DownEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element DownEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForType::UpEnumerator_extensionMethodMapForType (const GGS_extensionMethodMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType_2E_element UpEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_extensionMethodMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ("extensionMethodMapForType",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForType result ;
  const GGS_extensionMethodMapForType * p = (const GGS_extensionMethodMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::~ GGS_extensionMethodMapForBuildingContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext::GGS_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext & GGS_extensionMethodMapForBuildingContext::operator = (const GGS_extensionMethodMapForBuildingContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForBuildingContext::getter_hasKey (const GGS_string & inKey
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForBuildingContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForBuildingContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForBuildingContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMethodMapForBuildingContext::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionMethodMapForBuildingContext::getter_keyList (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForBuildingContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForBuildingContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::performInsert (const GGS_extensionMethodMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForBuildingContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>
GGS_extensionMethodMapForBuildingContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMethodMapForBuildingContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>>
GGS_extensionMethodMapForBuildingContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMethodMapForBuildingContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element_3F_ GGS_extensionMethodMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMethodMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtensionMethodMapForType = info->mProperty_mExtensionMethodMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element GGS_extensionMethodMapForBuildingContext
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "internal error" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForBuildingContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForBuildingContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_extensionMethodMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extensionMethodMapForBuildingContext_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_extensionMethodMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtensionMethodMapForType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_replaceKey (GGS_extensionMethodMapForBuildingContext_2E_element inElement,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "internal error" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType GGS_extensionMethodMapForBuildingContext::getter_mExtensionMethodMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtensionMethodMapForType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::setter_setMExtensionMethodMapForTypeForKey (GGS_extensionMethodMapForType inValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtensionMethodMapForType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionMethodMapForBuildingContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> & inArray,
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
    ioString.appendString ("mExtensionMethodMapForType:") ;
    inArray (i COMMA_HERE)->mProperty_mExtensionMethodMapForType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForBuildingContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForBuildingContext_2E_element>> array = sortedInfoArray () ;
    GGS_extensionMethodMapForBuildingContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForBuildingContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionMethodMapForBuildingContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForBuildingContext::DownEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element DownEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType DownEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionMethodMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForBuildingContext::UpEnumerator_extensionMethodMapForBuildingContext (const GGS_extensionMethodMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext_2E_element UpEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForType UpEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionMethodMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ("extensionMethodMapForBuildingContext",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForBuildingContext GGS_extensionMethodMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForBuildingContext result ;
  const GGS_extensionMethodMapForBuildingContext * p = (const GGS_extensionMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionSetterMapForType
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType::GGS_extensionSetterMapForType (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType::~ GGS_extensionSetterMapForType (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType::GGS_extensionSetterMapForType (const GGS_extensionSetterMapForType & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType & GGS_extensionSetterMapForType::operator = (const GGS_extensionSetterMapForType & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterMapForType::getter_hasKey (const GGS_string & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterMapForType::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                              const GGS_uint & inLevel
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionSetterMapForType::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionSetterMapForType::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionSetterMapForType::getter_locationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionSetterMapForType::getter_keyList (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForType::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForType_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::performInsert (const GGS_extensionSetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionSetterMapForType_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>
GGS_extensionSetterMapForType::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionSetterMapForType::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>>
GGS_extensionSetterMapForType::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionSetterMapForType::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element_3F_ GGS_extensionSetterMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionSetterMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionSetterMapForType_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalParameterList = info->mProperty_mFormalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::class_func_mapWithMapToOverride (const GGS_extensionSetterMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForType_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::setter_insertKey (GGS_lstring inLKey,
                                                      GGS_formalParameterListAST inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_extensionSetterMapForType_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' setter has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionSetterMapForType::getter_mFormalParameterListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::setter_setMFormalParameterListForKey (GGS_formalParameterListAST inValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionSetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionSetterMapForType_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> & inArray,
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
    ioString.appendString ("mFormalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalParameterList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForType::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForType_2E_element>> array = sortedInfoArray () ;
    GGS_extensionSetterMapForType_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForType_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionSetterMapForType_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionSetterMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionSetterMapForType::DownEnumerator_extensionSetterMapForType (const GGS_extensionSetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element DownEnumerator_extensionSetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionSetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST DownEnumerator_extensionSetterMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionSetterMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionSetterMapForType::UpEnumerator_extensionSetterMapForType (const GGS_extensionSetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType_2E_element UpEnumerator_extensionSetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionSetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST UpEnumerator_extensionSetterMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalParameterList ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionSetterMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ("extensionSetterMapForType",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForType result ;
  const GGS_extensionSetterMapForType * p = (const GGS_extensionSetterMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionSetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext::GGS_extensionSetterMapForBuildingContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext::~ GGS_extensionSetterMapForBuildingContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext::GGS_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext & GGS_extensionSetterMapForBuildingContext::operator = (const GGS_extensionSetterMapForBuildingContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterMapForBuildingContext::getter_hasKey (const GGS_string & inKey
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterMapForBuildingContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionSetterMapForBuildingContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionSetterMapForBuildingContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionSetterMapForBuildingContext::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionSetterMapForBuildingContext::getter_keyList (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForBuildingContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForBuildingContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::performInsert (const GGS_extensionSetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionSetterMapForBuildingContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>
GGS_extensionSetterMapForBuildingContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionSetterMapForBuildingContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>>
GGS_extensionSetterMapForBuildingContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionSetterMapForBuildingContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element_3F_ GGS_extensionSetterMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionSetterMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionSetterMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtensionSetterMapForType = info->mProperty_mExtensionSetterMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element GGS_extensionSetterMapForBuildingContext
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "internal error" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionSetterMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForBuildingContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForBuildingContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_extensionSetterMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extensionSetterMapForBuildingContext_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_extensionSetterMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtensionSetterMapForType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::setter_replaceKey (GGS_extensionSetterMapForBuildingContext_2E_element inElement,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "internal error" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionSetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType GGS_extensionSetterMapForBuildingContext::getter_mExtensionSetterMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtensionSetterMapForType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::setter_setMExtensionSetterMapForTypeForKey (GGS_extensionSetterMapForType inValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionSetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtensionSetterMapForType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionSetterMapForBuildingContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> & inArray,
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
    ioString.appendString ("mExtensionSetterMapForType:") ;
    inArray (i COMMA_HERE)->mProperty_mExtensionSetterMapForType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForBuildingContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionSetterMapForBuildingContext_2E_element>> array = sortedInfoArray () ;
    GGS_extensionSetterMapForBuildingContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionSetterMapForBuildingContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionSetterMapForBuildingContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionSetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionSetterMapForBuildingContext::DownEnumerator_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element DownEnumerator_extensionSetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionSetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType DownEnumerator_extensionSetterMapForBuildingContext::current_mExtensionSetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionSetterMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionSetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionSetterMapForBuildingContext::UpEnumerator_extensionSetterMapForBuildingContext (const GGS_extensionSetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext_2E_element UpEnumerator_extensionSetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionSetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForType UpEnumerator_extensionSetterMapForBuildingContext::current_mExtensionSetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionSetterMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionSetterMapForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ("extensionSetterMapForBuildingContext",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForBuildingContext GGS_extensionSetterMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForBuildingContext result ;
  const GGS_extensionSetterMapForBuildingContext * p = (const GGS_extensionSetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::~ GGS_extensionGetterMapForType (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType::GGS_extensionGetterMapForType (const GGS_extensionGetterMapForType & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType & GGS_extensionGetterMapForType::operator = (const GGS_extensionGetterMapForType & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForType::getter_hasKey (const GGS_string & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForType::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                              const GGS_uint & inLevel
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForType::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForType::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionGetterMapForType::getter_locationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionGetterMapForType::getter_keyList (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForType::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::performInsert (const GGS_extensionGetterMapForType_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>
GGS_extensionGetterMapForType::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionGetterMapForType::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>>
GGS_extensionGetterMapForType::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionGetterMapForType::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element_3F_ GGS_extensionGetterMapForType
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionGetterMapForType_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForType_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mResultTypeName = info->mProperty_mResultTypeName ;
      element.mProperty_mInputFormalParameterList = info->mProperty_mInputFormalParameterList ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForType & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_insertKey (GGS_lstring inLKey,
                                                      GGS_lstring inArgument0,
                                                      GGS_formalInputParameterListAST inArgument1,
                                                      GGS_methodQualifier inArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_extensionGetterMapForType_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterMapForType::getter_mResultTypeNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mResultTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionGetterMapForType::getter_mInputFormalParameterListForKey (const GGS_string & inKey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListAST result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInputFormalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_extensionGetterMapForType::getter_mQualifierForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMResultTypeNameForKey (GGS_lstring inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mResultTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMInputFormalParameterListForKey (GGS_formalInputParameterListAST inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInputFormalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForType_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionGetterMapForType_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> & inArray,
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
    ioString.appendString ("mResultTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mResultTypeName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInputFormalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mInputFormalParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForType::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForType_2E_element>> array = sortedInfoArray () ;
    GGS_extensionGetterMapForType_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForType_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionGetterMapForType_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionGetterMapForType::DownEnumerator_extensionGetterMapForType (const GGS_extensionGetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element DownEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST DownEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_extensionGetterMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionGetterMapForType
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionGetterMapForType::UpEnumerator_extensionGetterMapForType (const GGS_extensionGetterMapForType & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType_2E_element UpEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST UpEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInputFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_extensionGetterMapForType::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ("extensionGetterMapForType",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForType::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForType result ;
  const GGS_extensionGetterMapForType * p = (const GGS_extensionGetterMapForType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::~ GGS_extensionGetterMapForBuildingContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext::GGS_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext & GGS_extensionGetterMapForBuildingContext::operator = (const GGS_extensionGetterMapForBuildingContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForBuildingContext::getter_hasKey (const GGS_string & inKey
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterMapForBuildingContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForBuildingContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionGetterMapForBuildingContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionGetterMapForBuildingContext::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_extensionGetterMapForBuildingContext::getter_keyList (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForBuildingContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::performInsert (const GGS_extensionGetterMapForBuildingContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>
GGS_extensionGetterMapForBuildingContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionGetterMapForBuildingContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>>
GGS_extensionGetterMapForBuildingContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionGetterMapForBuildingContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element_3F_ GGS_extensionGetterMapForBuildingContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionGetterMapForBuildingContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForBuildingContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtensionGetterMapForType = info->mProperty_mExtensionGetterMapForType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element GGS_extensionGetterMapForBuildingContext
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "internal error" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForBuildingContext & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForBuildingContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_insertKey (GGS_lstring inLKey,
                                                                 GGS_extensionGetterMapForType inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extensionGetterMapForBuildingContext_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::method_searchKey (GGS_lstring inLKey,
                                                                 GGS_extensionGetterMapForType & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "internal error" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtensionGetterMapForType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_replaceKey (GGS_extensionGetterMapForBuildingContext_2E_element inElement,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "internal error" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType GGS_extensionGetterMapForBuildingContext::getter_mExtensionGetterMapForTypeForKey (const GGS_string & inKey,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtensionGetterMapForType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::setter_setMExtensionGetterMapForTypeForKey (GGS_extensionGetterMapForType inValue,
                                                                                           GGS_string inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_extensionGetterMapForBuildingContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtensionGetterMapForType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_extensionGetterMapForBuildingContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> & inArray,
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
    ioString.appendString ("mExtensionGetterMapForType:") ;
    inArray (i COMMA_HERE)->mProperty_mExtensionGetterMapForType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForBuildingContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionGetterMapForBuildingContext_2E_element>> array = sortedInfoArray () ;
    GGS_extensionGetterMapForBuildingContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionGetterMapForBuildingContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionGetterMapForBuildingContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionGetterMapForBuildingContext::DownEnumerator_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element DownEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType DownEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionGetterMapForType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionGetterMapForBuildingContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionGetterMapForBuildingContext::UpEnumerator_extensionGetterMapForBuildingContext (const GGS_extensionGetterMapForBuildingContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext_2E_element UpEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForType UpEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtensionGetterMapForType ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForBuildingContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ("extensionGetterMapForBuildingContext",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForBuildingContext GGS_extensionGetterMapForBuildingContext::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForBuildingContext result ;
  const GGS_extensionGetterMapForBuildingContext * p = (const GGS_extensionGetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::~ GGS_wrapperExtensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap::GGS_wrapperExtensionMap (const GGS_wrapperExtensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap & GGS_wrapperExtensionMap::operator = (const GGS_wrapperExtensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_wrapperExtensionMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_wrapperExtensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperExtensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_wrapperExtensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_wrapperExtensionMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_wrapperExtensionMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_wrapperExtensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::performInsert (const GGS_wrapperExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_wrapperExtensionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>
GGS_wrapperExtensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_wrapperExtensionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>>
GGS_wrapperExtensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_wrapperExtensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element_3F_ GGS_wrapperExtensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_wrapperExtensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_wrapperExtensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::class_func_mapWithMapToOverride (const GGS_wrapperExtensionMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_wrapperExtensionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::setter_insertKey (GGS_lstring inLKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_wrapperExtensionMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' extension has been already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_wrapperExtensionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_wrapperExtensionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_wrapperExtensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_wrapperExtensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_wrapperExtensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_wrapperExtensionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_wrapperExtensionMap::DownEnumerator_wrapperExtensionMap (const GGS_wrapperExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element DownEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @wrapperExtensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_wrapperExtensionMap::UpEnumerator_wrapperExtensionMap (const GGS_wrapperExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap_2E_element UpEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @wrapperExtensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_wrapperExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_wrapperExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_wrapperExtensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperExtensionMap GGS_wrapperExtensionMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_wrapperExtensionMap result ;
  const GGS_wrapperExtensionMap * p = (const GGS_wrapperExtensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_wrapperExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_semanticDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_semanticDeclarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_semanticDeclarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_semanticDeclarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (cPtr_semanticDeclarationAST * inObject,
                                               GGS_galgasDeclarationAST & io_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_addAssociatedElement (io_ioDeclarations, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_QualifiedFeatureList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public: GGS_galgas_33_QualifiedFeatureList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_lstring & in_mFeatureName,
                                                             const GGS_lstring & in_mFeatureValue
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_lstring & in_mFeatureName,
                                                                                                      const GGS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFeatureName, inElement.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mProperty_mFeatureName, mObject.mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @galgas_33_QualifiedFeatureList
//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList::GGS_galgas_33_QualifiedFeatureList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList::GGS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    const GGS_galgas_33_QualifiedFeatureList_2E_element element (p->mObject.mProperty_mFeatureName, p->mObject.mProperty_mFeatureValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mFeatureName,
                                                                    const GGS_lstring & in_mFeatureValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (in_mFeatureName, in_mFeatureValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_galgas_33_QualifiedFeatureList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_galgas_33_QualifiedFeatureList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::description (String & ioString,
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
      ioString.appendString ("mFeatureName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFeatureName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFeatureValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFeatureValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::plusPlusAssignOperation (const GGS_galgas_33_QualifiedFeatureList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                 const GGS_lstring & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_QualifiedFeatureList_2E_element element (inOperand0, inOperand1) ;
  GGS_galgas_33_QualifiedFeatureList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::addAssignOperation (const GGS_lstring & inOperand0,
                                                             const GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_QualifiedFeatureList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_append (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_QualifiedFeatureList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_galgas_33_QualifiedFeatureList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFeatureName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFeatureValue ;
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

void GGS_galgas_33_QualifiedFeatureList::setter_popFirst (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFeatureName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFeatureValue ;
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

void GGS_galgas_33_QualifiedFeatureList::setter_popLast (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFeatureName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFeatureValue ;
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

void GGS_galgas_33_QualifiedFeatureList::method_first (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFeatureName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFeatureValue ;
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

void GGS_galgas_33_QualifiedFeatureList::method_last (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFeatureName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFeatureValue ;
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

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::add_operation (const GGS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
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

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
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

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::plusAssignOperation (const GGS_galgas_33_QualifiedFeatureList inList,
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

void GGS_galgas_33_QualifiedFeatureList::setter_setMFeatureNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFeatureName = inOperand ;
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
  
GGS_lstring GGS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFeatureName ;
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

void GGS_galgas_33_QualifiedFeatureList::setter_setMFeatureValueAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFeatureValue = inOperand ;
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
  
GGS_lstring GGS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFeatureValue ;
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
// Down Enumerator for @galgas_33_QualifiedFeatureList
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_QualifiedFeatureList::DownEnumerator_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element DownEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFeatureName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFeatureValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_QualifiedFeatureList
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_QualifiedFeatureList::UpEnumerator_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element UpEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFeatureName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFeatureValue ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3QualifiedFeatureList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList result ;
  const GGS_galgas_33_QualifiedFeatureList * p = (const GGS_galgas_33_QualifiedFeatureList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument_majorVersion,
                                                                                          GGS_lbigint & outArgument_minorVersion,
                                                                                          GGS_lbigint & outArgument_revisionVersion,
                                                                                          GGS_lstring & outArgument_targetName,
                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (const GGS_lstring constinArgument_inProjectSourceFilePath,
                                                                                                                GGS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GGS_lbigint var_majorVersion_3252 ;
  GGS_lbigint var_minorVersion_3285 ;
  GGS_lbigint var_revisionVersion_3318 ;
  GGS_lstring var_targetName_3354 ;
  nt_project_5F_header_ (var_majorVersion_3252, var_minorVersion_3285, var_revisionVersion_3318, var_targetName_3354, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
  GGS_lstringlist var_generateFeatureList_3394 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_3457 = GGS_galgas_33_QualifiedFeatureList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 91))  COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("MacSwiftApp").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 94))  COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 97))  COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 100))  COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 103))  COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 106))  COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 109))  COMMA_SOURCE_FILE ("galgasProject.galgas", 109)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 112))  COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 115))  COMMA_SOURCE_FILE ("galgasProject.galgas", 115)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 118))  COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
      var_generateFeatureList_3394.addAssignOperation (GGS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 121))  COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      GGS_lstring var_featureValue_4687 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
      var_qualifiedFeatureList_3457.addAssignOperation (GGS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 126)), var_featureValue_4687  COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      GGS_lstring var_featureValue_4848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
      var_qualifiedFeatureList_3457.addAssignOperation (GGS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 131)), var_featureValue_4848  COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      GGS_lstring var_featureValue_4999 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
      var_qualifiedFeatureList_3457.addAssignOperation (GGS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 136)), var_featureValue_4999  COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
  GGS_string var_sourceDirectory_5168 = constinArgument_inProjectSourceFilePath.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProject.galgas", 140)).add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 140)) ;
  GGS_stringlist var_extensionList_5268 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_extensionList_5268.addAssignOperation (GGS_string ("galgas")  COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
  var_extensionList_5268.addAssignOperation (GGS_string ("ggs")  COMMA_SOURCE_FILE ("galgasProject.galgas", 143)) ;
  GGS_stringlist var_projectSourceList_5369 = var_sourceDirectory_5168.getter_regularFilesWithExtensions (GGS_bool (true), var_extensionList_5268 COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  GGS_string var_toolCppDirectory_5509 = var_sourceDirectory_5168.add_operation (GGS_string ("/tool-sources"), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 146)) ;
  GGS_stringlist var_cppExtensionList_5571 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_cppExtensionList_5571.addAssignOperation (GGS_string ("cpp")  COMMA_SOURCE_FILE ("galgasProject.galgas", 148)) ;
  var_cppExtensionList_5571.addAssignOperation (GGS_string ("h")  COMMA_SOURCE_FILE ("galgasProject.galgas", 149)) ;
  GGS_stringlist var_toolCppSourceList_5676 = var_toolCppDirectory_5509.getter_regularFilesWithExtensions (GGS_bool (true), var_cppExtensionList_5571 COMMA_SOURCE_FILE ("galgasProject.galgas", 150)) ;
  outArgument_outProjectComponentAST = GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (var_projectSourceList_5369, var_toolCppSourceList_5676, var_majorVersion_3252, var_minorVersion_3285, var_revisionVersion_3318, var_generateFeatureList_3394, var_qualifiedFeatureList_3457, var_targetName_3354, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 161)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalLogInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST::objectCompare (const GGS_lexicalLogInstructionAST & inOperand) const {
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

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalLogInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalLogInstructionAST_init (inCompiler) ;
  const GGS_lexicalLogInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::
lexicalLogInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST::GGS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalLogInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@lexicalLogInstructionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalLogInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST result ;
  const GGS_lexicalLogInstructionAST * p = (const GGS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalLogInstructionAST_2E_weak::objectCompare (const GGS_lexicalLogInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak & GGS_lexicalLogInstructionAST_2E_weak::operator = (const GGS_lexicalLogInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak::GGS_lexicalLogInstructionAST_2E_weak (const GGS_lexicalLogInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalLogInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalLogInstructionAST * p = (cPtr_lexicalLogInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalLogInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST GGS_lexicalLogInstructionAST_2E_weak::bang_lexicalLogInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalLogInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalLogInstructionAST) ;
      result = GGS_lexicalLogInstructionAST ((cPtr_lexicalLogInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalLogInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ("lexicalLogInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalLogInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalLogInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalLogInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalLogInstructionAST_2E_weak GGS_lexicalLogInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalLogInstructionAST_2E_weak result ;
  const GGS_lexicalLogInstructionAST_2E_weak * p = (const GGS_lexicalLogInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalLogInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_galgasScanner_34_::cTokenFor_galgasScanner_34_ (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasScanner_34_::Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                      const String & inSourceString,
                                                      const String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasScanner_34__attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasScanner_34__floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasScanner_34__hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasScanner_34__internalError = "internal error" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasScanner_34__undefinedAttribute = "undefined attribute" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 197)) {
    static const char * syntaxErrorMessageArray [197] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a float number",
        "a literal integer",
        "a character constant",
        "a terminal symbol ($...$)",
        "a comment",
        "a comment",
        "a type name (@...)",
        "the '\?selector:' delimitor",
        "the '\?' delimitor",
        "the '\?!selector:' delimitor",
        "the '\?!' delimitor",
        "the '!selector:' delimitor",
        "the '!' delimitor",
        "the '!\?selector:' delimitor",
        "the '!\?' delimitor",
        "the '<' delimitor",
        "the '<=' delimitor",
        "the '<<' delimitor",
        "a non terminal symbol <...>",
        "a character string constant \"...\"",
        "the 'abstract' keyword",
        "the 'after' keyword",
        "the 'as' keyword",
        "the 'before' keyword",
        "the 'between' keyword",
        "the 'block' keyword",
        "the 'boolset' keyword",
        "the 'case' keyword",
        "the 'class' keyword",
        "the 'default' keyword",
        "the 'dict' keyword",
        "the 'do' keyword",
        "the 'drop' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'end' keyword",
        "the 'enum' keyword",
        "the 'error' keyword",
        "the 'extension' keyword",
        "the 'extern' keyword",
        "the 'false' keyword",
        "the 'fileprivate' keyword",
        "the 'filewrapper' keyword",
        "the 'final' keyword",
        "the 'for' keyword",
        "the 'fixit' keyword",
        "the 'func' keyword",
        "the 'grammar' keyword",
        "the 'graph' keyword",
        "the 'guard' keyword",
        "the 'gui' keyword",
        "the 'if' keyword",
        "the 'in' keyword",
        "the 'indexing' keyword",
        "the 'init' keyword",
        "the 'is' keyword",
        "the 'json' keyword",
        "the 'label' keyword",
        "the 'let' keyword",
        "the 'lexique' keyword",
        "the 'list' keyword",
        "the 'log' keyword",
        "the 'loop' keyword",
        "the 'map' keyword",
        "the 'mod' keyword",
        "the 'mutating' keyword",
        "the 'nil' keyword",
        "the 'not' keyword",
        "the 'on' keyword",
        "the 'operator' keyword",
        "the 'option' keyword",
        "the 'or' keyword",
        "the 'override' keyword",
        "the 'package' keyword",
        "the 'parse' keyword",
        "the 'public' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'proc' keyword",
        "the 'project' keyword",
        "the 'repeat' keyword",
        "the 'rewind' keyword",
        "the 'rule' keyword",
        "the 'select' keyword",
        "the 'self' keyword",
        "the 'send' keyword",
        "the 'sortedlist' keyword",
        "the 'spoil' keyword",
        "the 'super' keyword",
        "the 'struct' keyword",
        "the 'style' keyword",
        "the 'switch' keyword",
        "the 'syntax' keyword",
        "the 'tag' keyword",
        "the 'template' keyword",
        "the 'then' keyword",
        "the 'true' keyword",
        "the 'typealias' keyword",
        "the 'unused' keyword",
        "the 'var' keyword",
        "the 'warning' keyword",
        "the 'weak' keyword",
        "the 'while' keyword",
        "the 'with' keyword",
        "the '%applicationBundleBase' keyword",
        "the '%clonable' keyword",
        "the '%codeblocks-linux32' keyword",
        "the '%codeblocks-linux64' keyword",
        "the '%codeblocks-windows' keyword",
        "the '%comparable' keyword",
        "the '%equatable' keyword",
        "the '%errorMessage' keyword",
        "the '%from' keyword",
        "the '%generatedInSeparateFile' keyword",
        "the '%initArgLabel' keyword",
        "the '%insertAfter' keyword",
        "the '%insertBefore' keyword",
        "the '%insertOrReplaceSetter' keyword",
        "the '%insertSetter' keyword",
        "the '%libpmAtPath' keyword",
        "the '%macCodeSign' keyword",
        "the '%makefile-macosx' keyword",
        "the '%makefile-unix' keyword",
        "the '%makefile-x86linux32-on-macosx' keyword",
        "the '%makefile-x86linux64-on-macosx' keyword",
        "the '%makefile-arm64-linux-on-macosx' keyword",
        "the '%makefile-win32-on-macosx' keyword",
        "the '%MacSwiftApp' keyword",
        "the '%nonAtomicSelection' keyword",
        "the '%once' keyword",
        "the '%preserved' keyword",
        "the '%quietOutputByDefault' keyword",
        "the '%replaceBy' keyword",
        "the '%remove' keyword",
        "the '%removeSetter' keyword",
        "the '%replaceSetter' keyword",
        "the '%searchMethod' keyword",
        "the '%searchSubscript' keyword",
        "the '%searchString' keyword",
        "the '%templateEndMark' keyword",
        "the '%templateReplacement' keyword",
        "the '%translate' keyword",
        "the '%usefull' keyword",
        "the '*' delimitor",
        "the ',' delimitor",
        "the '+' delimitor",
        "the '&+' delimitor",
        "the '&-' delimitor",
        "the '&*' delimitor",
        "the '&/' delimitor",
        "the '>' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the ':>' delimitor",
        "the '-' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '->' delimitor",
        "the '==' delimitor",
        "the '=' delimitor",
        "the '&&' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '++=' delimitor",
        "the '.' delimitor",
        "the '@(' delimitor",
        "the '...' delimitor",
        "the '..<' delimitor",
        "the '+=' delimitor",
        "the '-=' delimitor",
        "the '*=' delimitor",
        "the '/=' delimitor",
        "the '&=' delimitor",
        "the '|=' delimitor",
        "the '^=' delimitor",
        "the '/' delimitor",
        "the '!=' delimitor",
        "the '>=' delimitor",
        "the '&' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '`' delimitor",
        "the '||' delimitor",
        "the '|' delimitor",
        "the '^' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '--' delimitor",
        "the '++' delimitor",
        "the '&--' delimitor",
        "the '&++' delimitor",
        "the '===' delimitor",
        "the '!==' delimitor",
        "the '\?^' delimitor",
        "the '!^' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D_ = {
  utf32 ('!'),
  utf32 ('='),
} ;

//--- Unicode string for '$!==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3D__3D_ = {
  utf32 ('!'),
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$!?$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__3F_ = {
  utf32 ('!'),
  utf32 ('\?'),
} ;

//--- Unicode string for '$!^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___21__5E_ = {
  utf32 ('!'),
  utf32 ('^'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$&&$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__26_ = {
  utf32 ('&'),
  utf32 ('&'),
} ;

//--- Unicode string for '$&*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2A_ = {
  utf32 ('&'),
  utf32 ('*'),
} ;

//--- Unicode string for '$&+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B_ = {
  utf32 ('&'),
  utf32 ('+'),
} ;

//--- Unicode string for '$&++$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2B__2B_ = {
  utf32 ('&'),
  utf32 ('+'),
  utf32 ('+'),
} ;

//--- Unicode string for '$&-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D_ = {
  utf32 ('&'),
  utf32 ('-'),
} ;

//--- Unicode string for '$&--$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2D__2D_ = {
  utf32 ('&'),
  utf32 ('-'),
  utf32 ('-'),
} ;

//--- Unicode string for '$&/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__2F_ = {
  utf32 ('&'),
  utf32 ('/'),
} ;

//--- Unicode string for '$&=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___26__3D_ = {
  utf32 ('&'),
  utf32 ('='),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$*=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2A__3D_ = {
  utf32 ('*'),
  utf32 ('='),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$++$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__2B_ = {
  utf32 ('+'),
  utf32 ('+'),
} ;

//--- Unicode string for '$++=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__2B__3D_ = {
  utf32 ('+'),
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2B__3D_ = {
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$--$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__2D_ = {
  utf32 ('-'),
  utf32 ('-'),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3D_ = {
  utf32 ('-'),
  utf32 ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$...$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$..<$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2E__2E__3C_ = {
  utf32 ('.'),
  utf32 ('.'),
  utf32 ('<'),
} ;

//--- Unicode string for '$/$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F_ = {
  utf32 ('/'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$/=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___2F__3D_ = {
  utf32 ('/'),
  utf32 ('='),
} ;

//--- Unicode string for '$0x$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___30_x = {
  utf32 ('0'),
  utf32 ('x'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$:>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3A__3E_ = {
  utf32 (':'),
  utf32 ('>'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$===$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3D__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3D_ = {
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$>>$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3E__3E_ = {
  utf32 ('>'),
  utf32 ('>'),
} ;

//--- Unicode string for '$?!$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__21_ = {
  utf32 ('\?'),
  utf32 ('!'),
} ;

//--- Unicode string for '$?^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___3F__5E_ = {
  utf32 ('\?'),
  utf32 ('^'),
} ;

//--- Unicode string for '$@($'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___40__28_ = {
  utf32 ('@'),
  utf32 ('('),
} ;

//--- Unicode string for '$MacSwiftApp$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__MacSwiftApp = {
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('S'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('p'),
  utf32 ('p'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$\\$$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__24_ = {
  utf32 ('\\'),
  utf32 ('$'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5C__5C_ = {
  utf32 ('\\'),
  utf32 ('\\'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$^=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___5E__3D_ = {
  utf32 ('^'),
  utf32 ('='),
} ;

//--- Unicode string for '$`$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___60_ = {
  utf32 ('`'),
} ;

//--- Unicode string for '$abstract$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__abstract = {
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$after$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__after = {
  utf32 ('a'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$applicationBundleBase$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__applicationBundleBase = {
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('B'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('B'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$as$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__as = {
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$before$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__before = {
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$between$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__between = {
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('w'),
  utf32 ('e'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$block$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__block = {
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$boolset$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__boolset = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$case$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__case = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__class = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
} ;

//--- Unicode string for '$clonable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__clonable = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$codeblocks-linux32$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
} ;

//--- Unicode string for '$codeblocks-linux64$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_ = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
} ;

//--- Unicode string for '$codeblocks-windows$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__codeblocks_2D_windows = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('s'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('o'),
  utf32 ('w'),
  utf32 ('s'),
} ;

//--- Unicode string for '$comparable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__comparable = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$default$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__default = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('t'),
} ;

//--- Unicode string for '$dict$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__dict = {
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$do$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__do = {
  utf32 ('d'),
  utf32 ('o'),
} ;

//--- Unicode string for '$drop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__drop = {
  utf32 ('d'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$else$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__else = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$elsif$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__elsif = {
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$end$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__end = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__enum = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('m'),
} ;

//--- Unicode string for '$equatable$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__equatable = {
  utf32 ('e'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$error$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__error = {
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$errorMessage$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__errorMessage = {
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('M'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$extension$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extension = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__extern = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__false = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$fileprivate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fileprivate = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$filewrapper$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__filewrapper = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$final$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__final = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('l'),
} ;

//--- Unicode string for '$fixit$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__fixit = {
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('t'),
} ;

//--- Unicode string for '$for$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__for = {
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$from$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__from = {
  utf32 ('f'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__func = {
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$generatedInSeparateFile$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__generatedInSeparateFile = {
  utf32 ('g'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('I'),
  utf32 ('n'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('F'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$grammar$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__grammar = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('m'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$graph$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__graph = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
} ;

//--- Unicode string for '$guard$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__guard = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('d'),
} ;

//--- Unicode string for '$gui$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__gui = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('i'),
} ;

//--- Unicode string for '$if$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__if = {
  utf32 ('i'),
  utf32 ('f'),
} ;

//--- Unicode string for '$in$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__in = {
  utf32 ('i'),
  utf32 ('n'),
} ;

//--- Unicode string for '$indexing$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__indexing = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$init$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__init = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('t'),
} ;

//--- Unicode string for '$initArgLabel$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__initArgLabel = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('r'),
  utf32 ('g'),
  utf32 ('L'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('l'),
} ;

//--- Unicode string for '$insertAfter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertAfter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('f'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$insertBefore$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertBefore = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('B'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$insertOrReplaceSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertOrReplaceSetter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('O'),
  utf32 ('r'),
  utf32 ('R'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$insertSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__insertSetter = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$is$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__is = {
  utf32 ('i'),
  utf32 ('s'),
} ;

//--- Unicode string for '$json$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__json = {
  utf32 ('j'),
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$label$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__label = {
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('e'),
  utf32 ('l'),
} ;

//--- Unicode string for '$let$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__let = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$lexique$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__lexique = {
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$libpmAtPath$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__libpmAtPath = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('b'),
  utf32 ('p'),
  utf32 ('m'),
  utf32 ('A'),
  utf32 ('t'),
  utf32 ('P'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '$list$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__list = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$log$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__log = {
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('g'),
} ;

//--- Unicode string for '$loop$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__loop = {
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('p'),
} ;

//--- Unicode string for '$macCodeSign$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__macCodeSign = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('n'),
} ;

//--- Unicode string for '$makefile-arm64-linux-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('m'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-unix$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_unix = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-win32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux32-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('3'),
  utf32 ('2'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$makefile-x86linux64-on-macosx$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('-'),
  utf32 ('x'),
  utf32 ('8'),
  utf32 ('6'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('x'),
  utf32 ('6'),
  utf32 ('4'),
  utf32 ('-'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('-'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('x'),
} ;

//--- Unicode string for '$map$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__map = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('p'),
} ;

//--- Unicode string for '$mod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mod = {
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('d'),
} ;

//--- Unicode string for '$mutating$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__mutating = {
  utf32 ('m'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$nil$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nil = {
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$nonAtomicSelection$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__nonAtomicSelection = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('A'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$not$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__not = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$on$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__on = {
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$once$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__once = {
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('e'),
} ;

//--- Unicode string for '$operator$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__operator = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$option$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__option = {
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$or$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__or = {
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$override$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__override = {
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$package$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__package = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('a'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$parse$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__parse = {
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$preserved$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__preserved = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$private$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__private = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$proc$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__proc = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('c'),
} ;

//--- Unicode string for '$project$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__project = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('j'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$protected$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__protected = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$public$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__public = {
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$quietOutputByDefault$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__quietOutputByDefault = {
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('O'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('B'),
  utf32 ('y'),
  utf32 ('D'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('t'),
} ;

//--- Unicode string for '$remove$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__remove = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
} ;

//--- Unicode string for '$removeSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__removeSetter = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$repeat$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__repeat = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('t'),
} ;

//--- Unicode string for '$replaceBy$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceBy = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('B'),
  utf32 ('y'),
} ;

//--- Unicode string for '$replaceSetter$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__replaceSetter = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('S'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$rewind$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rewind = {
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$rule$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__rule = {
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$searchMethod$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchMethod = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('M'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('h'),
  utf32 ('o'),
  utf32 ('d'),
} ;

//--- Unicode string for '$searchString$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchString = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('S'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$searchSubscript$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__searchSubscript = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('S'),
  utf32 ('u'),
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('c'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('p'),
  utf32 ('t'),
} ;

//--- Unicode string for '$select$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__select = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__self = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$send$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__send = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
} ;

//--- Unicode string for '$sortedlist$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__sortedlist = {
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('t'),
} ;

//--- Unicode string for '$spoil$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__spoil = {
  utf32 ('s'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('i'),
  utf32 ('l'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__struct = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$style$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__style = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$super$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__super = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$switch$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__switch = {
  utf32 ('s'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('c'),
  utf32 ('h'),
} ;

//--- Unicode string for '$syntax$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__syntax = {
  utf32 ('s'),
  utf32 ('y'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('x'),
} ;

//--- Unicode string for '$tag$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__tag = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('g'),
} ;

//--- Unicode string for '$template$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__template = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$templateEndMark$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateEndMark = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('E'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('k'),
} ;

//--- Unicode string for '$templateReplacement$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__templateReplacement = {
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('R'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$then$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__then = {
  utf32 ('t'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$translate$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__translate = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__true = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$typealias$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__typealias = {
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('a'),
  utf32 ('s'),
} ;

//--- Unicode string for '$unused$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__unused = {
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$usefull$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__usefull = {
  utf32 ('u'),
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$var$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__var = {
  utf32 ('v'),
  utf32 ('a'),
  utf32 ('r'),
} ;

//--- Unicode string for '$warning$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__warning = {
  utf32 ('w'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('n'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$weak$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__weak = {
  utf32 ('w'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('k'),
} ;

//--- Unicode string for '$while$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__while = {
  utf32 ('w'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('l'),
  utf32 ('e'),
} ;

//--- Unicode string for '$with$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34__with = {
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('h'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$|=$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__3D_ = {
  utf32 ('|'),
  utf32 ('='),
} ;

//--- Unicode string for '$||$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7C__7C_ = {
  utf32 ('|'),
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_galgasScanner_34___7E_ = {
  utf32 ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__attributeKeyWordList = 39 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [ktable_size_galgasScanner_34__attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__from, Lexique_galgasScanner_34_::kToken__25_from),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__once, Lexique_galgasScanner_34_::kToken__25_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__remove, Lexique_galgasScanner_34_::kToken__25_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__usefull, Lexique_galgasScanner_34_::kToken__25_usefull),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__clonable, Lexique_galgasScanner_34_::kToken__25_clonable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__equatable, Lexique_galgasScanner_34_::kToken__25_equatable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__preserved, Lexique_galgasScanner_34_::kToken__25_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceBy, Lexique_galgasScanner_34_::kToken__25_replaceBy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__translate, Lexique_galgasScanner_34_::kToken__25_translate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__comparable, Lexique_galgasScanner_34_::kToken__25_comparable),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacSwiftApp, Lexique_galgasScanner_34_::kToken__25_MacSwiftApp),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertAfter, Lexique_galgasScanner_34_::kToken__25_insertAfter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__libpmAtPath, Lexique_galgasScanner_34_::kToken__25_libpmAtPath),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__macCodeSign, Lexique_galgasScanner_34_::kToken__25_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__errorMessage, Lexique_galgasScanner_34_::kToken__25_errorMessage),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__initArgLabel, Lexique_galgasScanner_34_::kToken__25_initArgLabel),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertBefore, Lexique_galgasScanner_34_::kToken__25_insertBefore),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertSetter, Lexique_galgasScanner_34_::kToken__25_insertSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__removeSetter, Lexique_galgasScanner_34_::kToken__25_removeSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchMethod, Lexique_galgasScanner_34_::kToken__25_searchMethod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchString, Lexique_galgasScanner_34_::kToken__25_searchString),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_unix, Lexique_galgasScanner_34_::kToken__25_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceSetter, Lexique_galgasScanner_34_::kToken__25_replaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchSubscript, Lexique_galgasScanner_34_::kToken__25_searchSubscript),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateEndMark, Lexique_galgasScanner_34_::kToken__25_templateEndMark),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_windows, Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nonAtomicSelection, Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateReplacement, Lexique_galgasScanner_34_::kToken__25_templateReplacement),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__quietOutputByDefault, Lexique_galgasScanner_34_::kToken__25_quietOutputByDefault),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__applicationBundleBase, Lexique_galgasScanner_34_::kToken__25_applicationBundleBase),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertOrReplaceSetter, Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__generatedInSeparateFile, Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, Lexique_galgasScanner_34_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx)
} ;

int32_t Lexique_galgasScanner_34_::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, ktable_size_galgasScanner_34__attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasDelimitorsList = 52 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasDelimitorsList [ktable_size_galgasScanner_34__galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26_, Lexique_galgasScanner_34_::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___28_, Lexique_galgasScanner_34_::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___29_, Lexique_galgasScanner_34_::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A_, Lexique_galgasScanner_34_::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B_, Lexique_galgasScanner_34_::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2C_, Lexique_galgasScanner_34_::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D_, Lexique_galgasScanner_34_::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E_, Lexique_galgasScanner_34_::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F_, Lexique_galgasScanner_34_::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A_, Lexique_galgasScanner_34_::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3B_, Lexique_galgasScanner_34_::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D_, Lexique_galgasScanner_34_::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E_, Lexique_galgasScanner_34_::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5B_, Lexique_galgasScanner_34_::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5D_, Lexique_galgasScanner_34_::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E_, Lexique_galgasScanner_34_::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___60_, Lexique_galgasScanner_34_::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7B_, Lexique_galgasScanner_34_::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C_, Lexique_galgasScanner_34_::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7D_, Lexique_galgasScanner_34_::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7E_, Lexique_galgasScanner_34_::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D_, Lexique_galgasScanner_34_::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__5E_, Lexique_galgasScanner_34_::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__26_, Lexique_galgasScanner_34_::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2A_, Lexique_galgasScanner_34_::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B_, Lexique_galgasScanner_34_::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D_, Lexique_galgasScanner_34_::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2F_, Lexique_galgasScanner_34_::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__3D_, Lexique_galgasScanner_34_::kToken__26__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A__3D_, Lexique_galgasScanner_34_::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__2B_, Lexique_galgasScanner_34_::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__3D_, Lexique_galgasScanner_34_::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__2D_, Lexique_galgasScanner_34_::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3D_, Lexique_galgasScanner_34_::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3E_, Lexique_galgasScanner_34_::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F__3D_, Lexique_galgasScanner_34_::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A__3E_, Lexique_galgasScanner_34_::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3D_, Lexique_galgasScanner_34_::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3E_, Lexique_galgasScanner_34_::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3F__5E_, Lexique_galgasScanner_34_::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___40__28_, Lexique_galgasScanner_34_::kToken__40__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E__3D_, Lexique_galgasScanner_34_::kToken__5E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__3D_, Lexique_galgasScanner_34_::kToken__7C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__7C_, Lexique_galgasScanner_34_::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D__3D_, Lexique_galgasScanner_34_::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B__2B_, Lexique_galgasScanner_34_::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D__2D_, Lexique_galgasScanner_34_::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__2B__3D_, Lexique_galgasScanner_34_::kToken__2B__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E__2E__2E_, Lexique_galgasScanner_34_::kToken__2E__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2E__2E__3C_, Lexique_galgasScanner_34_::kToken__2E__2E__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D__3D_, Lexique_galgasScanner_34_::kToken__3D__3D__3D_)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasDelimitorsList, ktable_size_galgasScanner_34__galgasDelimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasKeyWordList = 84 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasKeyWordList [ktable_size_galgasScanner_34__galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__as, Lexique_galgasScanner_34_::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__do, Lexique_galgasScanner_34_::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__if, Lexique_galgasScanner_34_::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__in, Lexique_galgasScanner_34_::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__is, Lexique_galgasScanner_34_::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__on, Lexique_galgasScanner_34_::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__or, Lexique_galgasScanner_34_::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__end, Lexique_galgasScanner_34_::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__for, Lexique_galgasScanner_34_::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__gui, Lexique_galgasScanner_34_::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__let, Lexique_galgasScanner_34_::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__log, Lexique_galgasScanner_34_::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__map, Lexique_galgasScanner_34_::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mod, Lexique_galgasScanner_34_::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nil, Lexique_galgasScanner_34_::kToken_nil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__not, Lexique_galgasScanner_34_::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tag, Lexique_galgasScanner_34_::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__var, Lexique_galgasScanner_34_::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__case, Lexique_galgasScanner_34_::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__dict, Lexique_galgasScanner_34_::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__drop, Lexique_galgasScanner_34_::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__else, Lexique_galgasScanner_34_::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__enum, Lexique_galgasScanner_34_::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__func, Lexique_galgasScanner_34_::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__init, Lexique_galgasScanner_34_::kToken_init),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__json, Lexique_galgasScanner_34_::kToken_json),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__list, Lexique_galgasScanner_34_::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__loop, Lexique_galgasScanner_34_::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__proc, Lexique_galgasScanner_34_::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rule, Lexique_galgasScanner_34_::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__self, Lexique_galgasScanner_34_::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__send, Lexique_galgasScanner_34_::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__then, Lexique_galgasScanner_34_::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__true, Lexique_galgasScanner_34_::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__weak, Lexique_galgasScanner_34_::kToken_weak),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__with, Lexique_galgasScanner_34_::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__after, Lexique_galgasScanner_34_::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__block, Lexique_galgasScanner_34_::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__class, Lexique_galgasScanner_34_::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__elsif, Lexique_galgasScanner_34_::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__error, Lexique_galgasScanner_34_::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__false, Lexique_galgasScanner_34_::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__final, Lexique_galgasScanner_34_::kToken_final),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fixit, Lexique_galgasScanner_34_::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__graph, Lexique_galgasScanner_34_::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__guard, Lexique_galgasScanner_34_::kToken_guard),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__label, Lexique_galgasScanner_34_::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__parse, Lexique_galgasScanner_34_::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__spoil, Lexique_galgasScanner_34_::kToken_spoil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__style, Lexique_galgasScanner_34_::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__super, Lexique_galgasScanner_34_::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__while, Lexique_galgasScanner_34_::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__before, Lexique_galgasScanner_34_::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extern, Lexique_galgasScanner_34_::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__option, Lexique_galgasScanner_34_::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__public, Lexique_galgasScanner_34_::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__repeat, Lexique_galgasScanner_34_::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rewind, Lexique_galgasScanner_34_::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__select, Lexique_galgasScanner_34_::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__struct, Lexique_galgasScanner_34_::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__switch, Lexique_galgasScanner_34_::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__syntax, Lexique_galgasScanner_34_::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__unused, Lexique_galgasScanner_34_::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__between, Lexique_galgasScanner_34_::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__boolset, Lexique_galgasScanner_34_::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__default, Lexique_galgasScanner_34_::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__grammar, Lexique_galgasScanner_34_::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__lexique, Lexique_galgasScanner_34_::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__package, Lexique_galgasScanner_34_::kToken_package),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__private, Lexique_galgasScanner_34_::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__project, Lexique_galgasScanner_34_::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__warning, Lexique_galgasScanner_34_::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__abstract, Lexique_galgasScanner_34_::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__indexing, Lexique_galgasScanner_34_::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mutating, Lexique_galgasScanner_34_::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__operator, Lexique_galgasScanner_34_::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__override, Lexique_galgasScanner_34_::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__template, Lexique_galgasScanner_34_::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extension, Lexique_galgasScanner_34_::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__protected, Lexique_galgasScanner_34_::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__typealias, Lexique_galgasScanner_34_::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__sortedlist, Lexique_galgasScanner_34_::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fileprivate, Lexique_galgasScanner_34_::kToken_fileprivate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__filewrapper, Lexique_galgasScanner_34_::kToken_filewrapper)
} ;

int32_t Lexique_galgasScanner_34_::search_into_galgasKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasKeyWordList, ktable_size_galgasScanner_34__galgasKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasScanner_34_ * ptr = (const cTokenFor_galgasScanner_34_ *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_double_2E_xxx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("double.xxx") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literalInt:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literalInt") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__27_char_27_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("'char'") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendChar (ptr->mLexicalAttribute_charValue) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("$terminal$") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_commentMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("commentMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__40_type:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@type") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3F_selector_3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?selector:") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_non_5F_terminal_3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<non_terminal>") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_abstract:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("abstract") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_after:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("after") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_as:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("as") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_before:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("before") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_between:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("between") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_block:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("block") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_boolset:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("boolset") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_case:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("case") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_class:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_default:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("default") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_dict:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("dict") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_do:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("do") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_drop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("drop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_else:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("else") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_elsif:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("elsif") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_end:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("end") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_error:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("error") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extension:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extension") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fileprivate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fileprivate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_filewrapper:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("filewrapper") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_final:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("final") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_for:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("for") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_fixit:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("fixit") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_grammar:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("grammar") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graph:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graph") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_guard:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("guard") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_gui:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("gui") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_if:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("if") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_in:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("in") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_indexing:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("indexing") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_init:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("init") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_is:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("is") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_json:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("json") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_label:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("label") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_let:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("let") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_lexique:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("lexique") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_list:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("list") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_log:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("log") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_loop:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("loop") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_map:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("map") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mod:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mod") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mutating:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mutating") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nil:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nil") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_not:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("not") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_on:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("on") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_operator:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("operator") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_option:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("option") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_or:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("or") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_override:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("override") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_package:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("package") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_parse:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("parse") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_public:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("public") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_protected:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("protected") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_private:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("private") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_proc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("proc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_project:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("project") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_repeat:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("repeat") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rewind:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rewind") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_rule:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("rule") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_select:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("select") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_send:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("send") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sortedlist:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sortedlist") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_spoil:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("spoil") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_super:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("super") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_style:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("style") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_switch:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("switch") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_syntax:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("syntax") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tag:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tag") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_template:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("template") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_then:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("then") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_typealias:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("typealias") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_unused:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("unused") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_var:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("var") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_warning:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("warning") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_weak:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("weak") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_while:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("while") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_with:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("with") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_applicationBundleBase:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%applicationBundleBase") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_clonable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%clonable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_33__32_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-linux32") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_linux_36__34_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-linux64") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_codeblocks_2D_windows:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%codeblocks-windows") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_comparable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%comparable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_equatable:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%equatable") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_errorMessage:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%errorMessage") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_from:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%from") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_generatedInSeparateFile:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%generatedInSeparateFile") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_initArgLabel:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%initArgLabel") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertAfter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertAfter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertBefore:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertBefore") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertOrReplaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertOrReplaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_insertSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%insertSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_libpmAtPath:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%libpmAtPath") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_macCodeSign:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%macCodeSign") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_unix:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-unix") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-x86linux32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-x86linux64-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-arm64-linux-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%makefile-win32-on-macosx") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_MacSwiftApp:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%MacSwiftApp") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_nonAtomicSelection:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%nonAtomicSelection") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_once:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%once") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_preserved:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%preserved") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_quietOutputByDefault:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%quietOutputByDefault") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_replaceBy:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%replaceBy") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_remove:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%remove") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_removeSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%removeSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_replaceSetter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%replaceSetter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchMethod:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchMethod") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchSubscript:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchSubscript") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_searchString:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%searchString") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_templateEndMark:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%templateEndMark") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_templateReplacement:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%templateReplacement") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_translate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%translate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__25_usefull:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("%usefull") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("++=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__40__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("...") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("..<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__60_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("`") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("||") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("--") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("++") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2D__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&--") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26__2B__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&++") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("===") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = utf32 (0) ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___30_x, true)) {
      do {
        if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('.')) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('%'))) {
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('-')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_attributeKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        lexicalError (gLexicalMessage_galgasScanner_34__undefinedAttribute COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\''))) {
      if (testForInputUTF32Char (utf32 ('\\'))) {
        if (testForInputUTF32Char (utf32 ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\f')) ;
        }else if (testForInputUTF32Char (utf32 ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\n')) ;
        }else if (testForInputUTF32Char (utf32 ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\r')) ;
        }else if (testForInputUTF32Char (utf32 ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\t')) ;
        }else if (testForInputUTF32Char (utf32 ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\v')) ;
        }else if (testForInputUTF32Char (utf32 ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\\')) ;
        }else if (testForInputUTF32Char (utf32 ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\0')) ;
        }else if (testForInputUTF32Char (utf32 ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, utf32 ('\'')) ;
        }else if (testForInputUTF32Char (utf32 ('u'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 ('U'))) {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (utf32 (' '), utf32 (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('$')) ;
          }else if (testForInputUTF32CharRange (utf32 ('!'), utf32 ('#')) || testForInputUTF32CharRange (utf32 ('%'), utf32 (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (utf32 ('$'))) {
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_terminal_24_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__2F_, true)) {
      if (testForInputUTF32Char (utf32 ('!'))) {
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E__3C_, true)) {
      token.mTokenCode = kToken__2E__2E__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__2B__3D_, true)) {
      token.mTokenCode = kToken__2B__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D__2D_, true)) {
      token.mTokenCode = kToken__26__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B__2B_, true)) {
      token.mTokenCode = kToken__26__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D__3D_, true)) {
      token.mTokenCode = kToken__21__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__7C_, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__3D_, true)) {
      token.mTokenCode = kToken__7C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E__3D_, true)) {
      token.mTokenCode = kToken__5E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___40__28_, true)) {
      token.mTokenCode = kToken__40__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__5E_, true)) {
      token.mTokenCode = kToken__3F__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3E_, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A__3E_, true)) {
      token.mTokenCode = kToken__3A__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__3D_, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__2D_, true)) {
      token.mTokenCode = kToken__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__2B_, true)) {
      token.mTokenCode = kToken__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A__3D_, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__3D_, true)) {
      token.mTokenCode = kToken__26__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2F_, true)) {
      token.mTokenCode = kToken__26__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D_, true)) {
      token.mTokenCode = kToken__26__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B_, true)) {
      token.mTokenCode = kToken__26__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2A_, true)) {
      token.mTokenCode = kToken__26__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__26_, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__5E_, true)) {
      token.mTokenCode = kToken__21__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___60_, true)) {
      token.mTokenCode = kToken__60_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F_, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_type ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__21_, true)) {
      const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__3F__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
          token.mTokenCode = kToken__3F__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationMark ;
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3F_, true)) {
      const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__21__3F_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
          token.mTokenCode = kToken__21__3F_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21__3F_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 (':'))) {
          token.mTokenCode = kToken__21_selector_3A_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationMark ;
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('<'))) {
      const LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
      if (testForInputUTF32Char (utf32 ('='))) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (utf32 ('<'))) {
        token.mTokenCode = kToken__3C__3C_ ;
        enterToken (token) ;
      }else if (testForChar_isUnicodeLetter ()) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (utf32 ('>'))) {
          token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
          enterToken (token) ;
        }else{
          mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
          mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
          mCurrentChar = currentCharForTag_onlyInfDelimiter ;
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 ('\\'))) {
          if (testForInputUTF32Char (utf32 ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\f')) ;
          }else if (testForInputUTF32Char (utf32 ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
          }else if (testForInputUTF32Char (utf32 ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\r')) ;
          }else if (testForInputUTF32Char (utf32 ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\t')) ;
          }else if (testForInputUTF32Char (utf32 ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\v')) ;
          }else if (testForInputUTF32Char (utf32 ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\\')) ;
          }else if (testForInputUTF32Char (utf32 ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
          }else if (testForInputUTF32Char (utf32 ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
          }else if (testForInputUTF32Char (utf32 ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\?')) ;
          }else if (testForInputUTF32Char (utf32 ('u'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (utf32 ('U'))) {
            if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32CharRange (utf32 ('a'), utf32 ('f')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasScanner_34_::parseLexicalToken (void) {
  cTokenFor_galgasScanner_34_ token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_galgasScanner_34_::enterToken (cTokenFor_galgasScanner_34_ & ioToken) {
  cTokenFor_galgasScanner_34_ * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_galgasScanner_34_ ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned Lexique_galgasScanner_34_::attributeValue_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 Lexique_galgasScanner_34_::attributeValue_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

double Lexique_galgasScanner_34_::attributeValue_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::attributeValue_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::attributeValue_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lbigint Lexique_galgasScanner_34_::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GGS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lchar Lexique_galgasScanner_34_::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_char value (ptr->mLexicalAttribute_charValue) ;
  GGS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble Lexique_galgasScanner_34_::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_double value (ptr->mLexicalAttribute_floatValue) ;
  GGS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_galgasScanner_34_::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_galgasScanner_34_::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

 GGS_stringlist Lexique_galgasScanner_34_::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("double.xxx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literalInt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("'char'") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("$terminal$") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@type") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("after") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("as") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("before") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("between") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("boolset") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("default") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("dict") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("drop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("error") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extension") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fileprivate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("filewrapper") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("final") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fixit") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("grammar") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graph") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("gui") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("indexing") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("init") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("is") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("json") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("lexique") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("list") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("log") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("loop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mutating") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("on") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("operator") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("or") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("override") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("package") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("parse") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("proc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("project") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("repeat") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rewind") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rule") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("select") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("send") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sortedlist") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("spoil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("super") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("style") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("syntax") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tag") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("template") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("then") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("warning") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("with") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%clonable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%comparable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%equatable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%errorMessage") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%from") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%initArgLabel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertAfter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertBefore") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%insertSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%MacSwiftApp") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%once") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%replaceBy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%remove") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%removeSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%replaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchMethod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchSubscript") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%searchString") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%templateReplacement") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%translate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("%usefull") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("++=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("`") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("--") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("++") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&--") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&++") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("===") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasScanner_34_ (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("galgasScanner4:attributeKeyWordList") ;
  ioList.appendObject ("galgasScanner4:galgasDelimitorsList") ;
  ioList.appendObject ("galgasScanner4:galgasKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasScanner_34_ (const String & inIdentifier,
                                                        bool & ioFound,
                                                        GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "galgasScanner4:attributeKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("from") ;
    ioList.appendObject ("once") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("usefull") ;
    ioList.appendObject ("clonable") ;
    ioList.appendObject ("equatable") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("replaceBy") ;
    ioList.appendObject ("translate") ;
    ioList.appendObject ("comparable") ;
    ioList.appendObject ("MacSwiftApp") ;
    ioList.appendObject ("insertAfter") ;
    ioList.appendObject ("libpmAtPath") ;
    ioList.appendObject ("macCodeSign") ;
    ioList.appendObject ("errorMessage") ;
    ioList.appendObject ("initArgLabel") ;
    ioList.appendObject ("insertBefore") ;
    ioList.appendObject ("insertSetter") ;
    ioList.appendObject ("removeSetter") ;
    ioList.appendObject ("searchMethod") ;
    ioList.appendObject ("searchString") ;
    ioList.appendObject ("makefile-unix") ;
    ioList.appendObject ("replaceSetter") ;
    ioList.appendObject ("makefile-macosx") ;
    ioList.appendObject ("searchSubscript") ;
    ioList.appendObject ("templateEndMark") ;
    ioList.appendObject ("codeblocks-linux32") ;
    ioList.appendObject ("codeblocks-linux64") ;
    ioList.appendObject ("codeblocks-windows") ;
    ioList.appendObject ("nonAtomicSelection") ;
    ioList.appendObject ("templateReplacement") ;
    ioList.appendObject ("quietOutputByDefault") ;
    ioList.appendObject ("applicationBundleBase") ;
    ioList.appendObject ("insertOrReplaceSetter") ;
    ioList.appendObject ("generatedInSeparateFile") ;
    ioList.appendObject ("makefile-win32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux64-on-macosx") ;
    ioList.appendObject ("makefile-arm64-linux-on-macosx") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("&=") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("@(") ;
    ioList.appendObject ("^=") ;
    ioList.appendObject ("|=") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.appendObject ("++=") ;
    ioList.appendObject ("...") ;
    ioList.appendObject ("..<") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("nil") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("init") ;
    ioList.appendObject ("json") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("weak") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("final") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("guard") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("spoil") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("super") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("package") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("fileprivate") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_galgasScanner_34_
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasScanner_34_, getKeywordsForIdentifier_galgasScanner_34_) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_galgasScanner_34_::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [197] = {0,
    0 /* galgasScanner4_1_identifier */,
    7 /* galgasScanner4_1_double_2E_xxx */,
    6 /* galgasScanner4_1_literalInt */,
    8 /* galgasScanner4_1__27_char_27_ */,
    4 /* galgasScanner4_1__24_terminal_24_ */,
    12 /* galgasScanner4_1_comment */,
    12 /* galgasScanner4_1_commentMark */,
    10 /* galgasScanner4_1__40_type */,
    3 /* galgasScanner4_1__3F_selector_3A_ */,
    2 /* galgasScanner4_1__3F_ */,
    3 /* galgasScanner4_1__3F__21_selector_3A_ */,
    2 /* galgasScanner4_1__3F__21_ */,
    3 /* galgasScanner4_1__21_selector_3A_ */,
    2 /* galgasScanner4_1__21_ */,
    3 /* galgasScanner4_1__21__3F_selector_3A_ */,
    2 /* galgasScanner4_1__21__3F_ */,
    2 /* galgasScanner4_1__3C_ */,
    2 /* galgasScanner4_1__3C__3D_ */,
    2 /* galgasScanner4_1__3C__3C_ */,
    5 /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    9 /* galgasScanner4_1__22_string_22_ */,
    1 /* galgasScanner4_1_abstract */,
    1 /* galgasScanner4_1_after */,
    1 /* galgasScanner4_1_as */,
    1 /* galgasScanner4_1_before */,
    1 /* galgasScanner4_1_between */,
    1 /* galgasScanner4_1_block */,
    1 /* galgasScanner4_1_boolset */,
    1 /* galgasScanner4_1_case */,
    1 /* galgasScanner4_1_class */,
    1 /* galgasScanner4_1_default */,
    1 /* galgasScanner4_1_dict */,
    1 /* galgasScanner4_1_do */,
    1 /* galgasScanner4_1_drop */,
    1 /* galgasScanner4_1_else */,
    1 /* galgasScanner4_1_elsif */,
    1 /* galgasScanner4_1_end */,
    1 /* galgasScanner4_1_enum */,
    1 /* galgasScanner4_1_error */,
    1 /* galgasScanner4_1_extension */,
    1 /* galgasScanner4_1_extern */,
    1 /* galgasScanner4_1_false */,
    1 /* galgasScanner4_1_fileprivate */,
    1 /* galgasScanner4_1_filewrapper */,
    1 /* galgasScanner4_1_final */,
    1 /* galgasScanner4_1_for */,
    1 /* galgasScanner4_1_fixit */,
    1 /* galgasScanner4_1_func */,
    1 /* galgasScanner4_1_grammar */,
    1 /* galgasScanner4_1_graph */,
    1 /* galgasScanner4_1_guard */,
    1 /* galgasScanner4_1_gui */,
    1 /* galgasScanner4_1_if */,
    1 /* galgasScanner4_1_in */,
    1 /* galgasScanner4_1_indexing */,
    1 /* galgasScanner4_1_init */,
    1 /* galgasScanner4_1_is */,
    1 /* galgasScanner4_1_json */,
    1 /* galgasScanner4_1_label */,
    1 /* galgasScanner4_1_let */,
    1 /* galgasScanner4_1_lexique */,
    1 /* galgasScanner4_1_list */,
    1 /* galgasScanner4_1_log */,
    1 /* galgasScanner4_1_loop */,
    1 /* galgasScanner4_1_map */,
    1 /* galgasScanner4_1_mod */,
    1 /* galgasScanner4_1_mutating */,
    1 /* galgasScanner4_1_nil */,
    1 /* galgasScanner4_1_not */,
    1 /* galgasScanner4_1_on */,
    1 /* galgasScanner4_1_operator */,
    1 /* galgasScanner4_1_option */,
    1 /* galgasScanner4_1_or */,
    1 /* galgasScanner4_1_override */,
    1 /* galgasScanner4_1_package */,
    1 /* galgasScanner4_1_parse */,
    1 /* galgasScanner4_1_public */,
    1 /* galgasScanner4_1_protected */,
    1 /* galgasScanner4_1_private */,
    1 /* galgasScanner4_1_proc */,
    1 /* galgasScanner4_1_project */,
    1 /* galgasScanner4_1_repeat */,
    1 /* galgasScanner4_1_rewind */,
    1 /* galgasScanner4_1_rule */,
    1 /* galgasScanner4_1_select */,
    1 /* galgasScanner4_1_self */,
    1 /* galgasScanner4_1_send */,
    1 /* galgasScanner4_1_sortedlist */,
    1 /* galgasScanner4_1_spoil */,
    1 /* galgasScanner4_1_super */,
    1 /* galgasScanner4_1_struct */,
    1 /* galgasScanner4_1_style */,
    1 /* galgasScanner4_1_switch */,
    1 /* galgasScanner4_1_syntax */,
    1 /* galgasScanner4_1_tag */,
    1 /* galgasScanner4_1_template */,
    1 /* galgasScanner4_1_then */,
    1 /* galgasScanner4_1_true */,
    1 /* galgasScanner4_1_typealias */,
    1 /* galgasScanner4_1_unused */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_weak */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    11 /* galgasScanner4_1__25_applicationBundleBase */,
    11 /* galgasScanner4_1__25_clonable */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_windows */,
    11 /* galgasScanner4_1__25_comparable */,
    11 /* galgasScanner4_1__25_equatable */,
    11 /* galgasScanner4_1__25_errorMessage */,
    11 /* galgasScanner4_1__25_from */,
    11 /* galgasScanner4_1__25_generatedInSeparateFile */,
    11 /* galgasScanner4_1__25_initArgLabel */,
    11 /* galgasScanner4_1__25_insertAfter */,
    11 /* galgasScanner4_1__25_insertBefore */,
    11 /* galgasScanner4_1__25_insertOrReplaceSetter */,
    11 /* galgasScanner4_1__25_insertSetter */,
    11 /* galgasScanner4_1__25_libpmAtPath */,
    11 /* galgasScanner4_1__25_macCodeSign */,
    11 /* galgasScanner4_1__25_makefile_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_unix */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_MacSwiftApp */,
    11 /* galgasScanner4_1__25_nonAtomicSelection */,
    11 /* galgasScanner4_1__25_once */,
    11 /* galgasScanner4_1__25_preserved */,
    11 /* galgasScanner4_1__25_quietOutputByDefault */,
    11 /* galgasScanner4_1__25_replaceBy */,
    11 /* galgasScanner4_1__25_remove */,
    11 /* galgasScanner4_1__25_removeSetter */,
    11 /* galgasScanner4_1__25_replaceSetter */,
    11 /* galgasScanner4_1__25_searchMethod */,
    11 /* galgasScanner4_1__25_searchSubscript */,
    11 /* galgasScanner4_1__25_searchString */,
    11 /* galgasScanner4_1__25_templateEndMark */,
    11 /* galgasScanner4_1__25_templateReplacement */,
    11 /* galgasScanner4_1__25_translate */,
    11 /* galgasScanner4_1__25_usefull */,
    2 /* galgasScanner4_1__2A_ */,
    2 /* galgasScanner4_1__2C_ */,
    2 /* galgasScanner4_1__2B_ */,
    2 /* galgasScanner4_1__26__2B_ */,
    2 /* galgasScanner4_1__26__2D_ */,
    2 /* galgasScanner4_1__26__2A_ */,
    2 /* galgasScanner4_1__26__2F_ */,
    2 /* galgasScanner4_1__3E_ */,
    2 /* galgasScanner4_1__3B_ */,
    2 /* galgasScanner4_1__3A_ */,
    2 /* galgasScanner4_1__3A__3E_ */,
    2 /* galgasScanner4_1__2D_ */,
    2 /* galgasScanner4_1__28_ */,
    2 /* galgasScanner4_1__29_ */,
    2 /* galgasScanner4_1__2D__3E_ */,
    2 /* galgasScanner4_1__3D__3D_ */,
    2 /* galgasScanner4_1__3D_ */,
    2 /* galgasScanner4_1__26__26_ */,
    2 /* galgasScanner4_1__5B_ */,
    2 /* galgasScanner4_1__5D_ */,
    2 /* galgasScanner4_1__2B__2B__3D_ */,
    2 /* galgasScanner4_1__2E_ */,
    2 /* galgasScanner4_1__40__28_ */,
    2 /* galgasScanner4_1__2E__2E__2E_ */,
    2 /* galgasScanner4_1__2E__2E__3C_ */,
    2 /* galgasScanner4_1__2B__3D_ */,
    2 /* galgasScanner4_1__2D__3D_ */,
    2 /* galgasScanner4_1__2A__3D_ */,
    2 /* galgasScanner4_1__2F__3D_ */,
    2 /* galgasScanner4_1__26__3D_ */,
    2 /* galgasScanner4_1__7C__3D_ */,
    2 /* galgasScanner4_1__5E__3D_ */,
    2 /* galgasScanner4_1__2F_ */,
    2 /* galgasScanner4_1__21__3D_ */,
    2 /* galgasScanner4_1__3E__3D_ */,
    2 /* galgasScanner4_1__26_ */,
    2 /* galgasScanner4_1__7B_ */,
    2 /* galgasScanner4_1__7D_ */,
    2 /* galgasScanner4_1__60_ */,
    2 /* galgasScanner4_1__7C__7C_ */,
    2 /* galgasScanner4_1__7C_ */,
    2 /* galgasScanner4_1__5E_ */,
    2 /* galgasScanner4_1__3E__3E_ */,
    2 /* galgasScanner4_1__7E_ */,
    2 /* galgasScanner4_1__2D__2D_ */,
    2 /* galgasScanner4_1__2B__2B_ */,
    2 /* galgasScanner4_1__26__2D__2D_ */,
    2 /* galgasScanner4_1__26__2B__2B_ */,
    2 /* galgasScanner4_1__3D__3D__3D_ */,
    2 /* galgasScanner4_1__21__3D__3D_ */,
    2 /* galgasScanner4_1__3F__5E_ */,
    2 /* galgasScanner4_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_galgasScanner_34_::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 13) {
    static const char * kStyleArray [13] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

