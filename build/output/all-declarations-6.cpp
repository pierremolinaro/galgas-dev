#include "all-declarations-6.h"
//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (const GGS_prologueEpilogueAST & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST & GGS_prologueEpilogueAST::operator = (const GGS_prologueEpilogueAST & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prologueEpilogueAST GGS_prologueEpilogueAST::init_21__21_ (const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                               const GGS_location & in_mEndOfInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (const GGS__5B_semanticInstructionAST_5D_ & inOperand0,
                                                  const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_prologueEpilogueAST::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prologueEpilogueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueAST ("prologueEpilogueAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueAST ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExpressionAST::objectCompare (const GGS_lexicalExpressionAST & inOperand) const {
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

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalExpressionAST::
lexicalExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum selfMutability
//--------------------------------------------------------------------------------------------------

GGS_selfMutability::GGS_selfMutability (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_propertiesAreMutableSelfIsNot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_selfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_selfAndPropertiesAreMutable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_initializer (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_initializer ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfMutability [5] = {
  "(not built)",
  "none",
  "propertiesAreMutableSelfIsNot",
  "selfAndPropertiesAreMutable",
  "initializer"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isPropertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_propertiesAreMutableSelfIsNot == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isSelfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfAndPropertiesAreMutable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isInitializer (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfMutability::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @selfMutability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfMutability [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMutability::objectCompare (const GGS_selfMutability & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfMutability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMutability ("selfMutability",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMutability ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability selfIsMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_selfIsMutable (const GGS_selfMutability & inObject,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  const GGS_selfMutability temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_selfMutability::Enumeration::invalid:
    break ;
  case GGS_selfMutability::Enumeration::enum_none:
  case GGS_selfMutability::Enumeration::enum_propertiesAreMutableSelfIsNot:
    {
      result = GGS_bool (false) ;
    }
    break ;
  case GGS_selfMutability::Enumeration::enum_selfAndPropertiesAreMutable:
  case GGS_selfMutability::Enumeration::enum_initializer:
    {
      result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum selfAvailability
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability::GGS_selfAvailability (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_available (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                 const GGS_selfMutability & inAssociatedValue1
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_available ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_selfAvailability_2E_available (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::method_extractAvailable (GGS_unifiedTypeMapEntry & outAssociatedValue_type,
                                                    GGS_selfMutability & outAssociatedValue_selfMutability,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_available) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_selfMutability.drop () ;
    String s ;
    s.appendCString ("proc @selfAvailability.available invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_selfMutability = ptr->mProperty_selfMutability ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability::getter_getAvailable (UNUSED_LOCATION_ARGS) const {
  GGS_selfAvailability_2E_available_3F_ result ;
  if (mEnum == Enumeration::enum_available) {
    const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_selfAvailability_2E_available (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::getAssociatedValuesFor_available (GGS_unifiedTypeMapEntry & out_type,
                                                             GGS_selfMutability & out_selfMutability) const {
  const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_selfMutability = ptr->mProperty_selfMutability ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfAvailability [3] = {
  "(not built)",
  "none",
  "available"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isAvailable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_available == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @selfAvailability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfAvailability [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability::objectCompare (const GGS_selfAvailability & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_available: {
        const auto left = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_selfAvailability_2E_available *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAvailability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (void) :
mProperty_mLocationType (),
mProperty_mBoolType (),
mProperty_mCharType (),
mProperty_mStringType (),
mProperty_mUIntType (),
mProperty_mSIntType (),
mProperty_mUInt_36__34_Type (),
mProperty_mSInt_36__34_Type (),
mProperty_mDoubleType (),
mProperty_mLBoolType (),
mProperty_mLCharType (),
mProperty_mLStringType (),
mProperty_mLUIntType (),
mProperty_mLSIntType (),
mProperty_mLUInt_36__34_Type (),
mProperty_mLSInt_36__34_Type (),
mProperty_mLDoubleType (),
mProperty_mLBigIntType (),
mProperty_mBigIntType (),
mProperty_mStringSetType (),
mProperty_mStringArrayType (),
mProperty_mLStringArrayType () {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_predefinedTypes & inSource) :
mProperty_mLocationType (inSource.mProperty_mLocationType),
mProperty_mBoolType (inSource.mProperty_mBoolType),
mProperty_mCharType (inSource.mProperty_mCharType),
mProperty_mStringType (inSource.mProperty_mStringType),
mProperty_mUIntType (inSource.mProperty_mUIntType),
mProperty_mSIntType (inSource.mProperty_mSIntType),
mProperty_mUInt_36__34_Type (inSource.mProperty_mUInt_36__34_Type),
mProperty_mSInt_36__34_Type (inSource.mProperty_mSInt_36__34_Type),
mProperty_mDoubleType (inSource.mProperty_mDoubleType),
mProperty_mLBoolType (inSource.mProperty_mLBoolType),
mProperty_mLCharType (inSource.mProperty_mLCharType),
mProperty_mLStringType (inSource.mProperty_mLStringType),
mProperty_mLUIntType (inSource.mProperty_mLUIntType),
mProperty_mLSIntType (inSource.mProperty_mLSIntType),
mProperty_mLUInt_36__34_Type (inSource.mProperty_mLUInt_36__34_Type),
mProperty_mLSInt_36__34_Type (inSource.mProperty_mLSInt_36__34_Type),
mProperty_mLDoubleType (inSource.mProperty_mLDoubleType),
mProperty_mLBigIntType (inSource.mProperty_mLBigIntType),
mProperty_mBigIntType (inSource.mProperty_mBigIntType),
mProperty_mStringSetType (inSource.mProperty_mStringSetType),
mProperty_mStringArrayType (inSource.mProperty_mStringArrayType),
mProperty_mLStringArrayType (inSource.mProperty_mLStringArrayType) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes & GGS_predefinedTypes::operator = (const GGS_predefinedTypes & inSource) {
  mProperty_mLocationType = inSource.mProperty_mLocationType ;
  mProperty_mBoolType = inSource.mProperty_mBoolType ;
  mProperty_mCharType = inSource.mProperty_mCharType ;
  mProperty_mStringType = inSource.mProperty_mStringType ;
  mProperty_mUIntType = inSource.mProperty_mUIntType ;
  mProperty_mSIntType = inSource.mProperty_mSIntType ;
  mProperty_mUInt_36__34_Type = inSource.mProperty_mUInt_36__34_Type ;
  mProperty_mSInt_36__34_Type = inSource.mProperty_mSInt_36__34_Type ;
  mProperty_mDoubleType = inSource.mProperty_mDoubleType ;
  mProperty_mLBoolType = inSource.mProperty_mLBoolType ;
  mProperty_mLCharType = inSource.mProperty_mLCharType ;
  mProperty_mLStringType = inSource.mProperty_mLStringType ;
  mProperty_mLUIntType = inSource.mProperty_mLUIntType ;
  mProperty_mLSIntType = inSource.mProperty_mLSIntType ;
  mProperty_mLUInt_36__34_Type = inSource.mProperty_mLUInt_36__34_Type ;
  mProperty_mLSInt_36__34_Type = inSource.mProperty_mLSInt_36__34_Type ;
  mProperty_mLDoubleType = inSource.mProperty_mLDoubleType ;
  mProperty_mLBigIntType = inSource.mProperty_mLBigIntType ;
  mProperty_mBigIntType = inSource.mProperty_mBigIntType ;
  mProperty_mStringSetType = inSource.mProperty_mStringSetType ;
  mProperty_mStringArrayType = inSource.mProperty_mStringArrayType ;
  mProperty_mLStringArrayType = inSource.mProperty_mLStringArrayType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_predefinedTypes GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mLocationType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringSetType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringArrayType,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLocationType = in_mLocationType ;
  result.mProperty_mBoolType = in_mBoolType ;
  result.mProperty_mCharType = in_mCharType ;
  result.mProperty_mStringType = in_mStringType ;
  result.mProperty_mUIntType = in_mUIntType ;
  result.mProperty_mSIntType = in_mSIntType ;
  result.mProperty_mUInt_36__34_Type = in_mUInt_36__34_Type ;
  result.mProperty_mSInt_36__34_Type = in_mSInt_36__34_Type ;
  result.mProperty_mDoubleType = in_mDoubleType ;
  result.mProperty_mLBoolType = in_mLBoolType ;
  result.mProperty_mLCharType = in_mLCharType ;
  result.mProperty_mLStringType = in_mLStringType ;
  result.mProperty_mLUIntType = in_mLUIntType ;
  result.mProperty_mLSIntType = in_mLSIntType ;
  result.mProperty_mLUInt_36__34_Type = in_mLUInt_36__34_Type ;
  result.mProperty_mLSInt_36__34_Type = in_mLSInt_36__34_Type ;
  result.mProperty_mLDoubleType = in_mLDoubleType ;
  result.mProperty_mLBigIntType = in_mLBigIntType ;
  result.mProperty_mBigIntType = in_mBigIntType ;
  result.mProperty_mStringSetType = in_mStringSetType ;
  result.mProperty_mStringArrayType = in_mStringArrayType ;
  result.mProperty_mLStringArrayType = in_mLStringArrayType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_unifiedTypeMapEntry & inOperand0,
                                          const GGS_unifiedTypeMapEntry & inOperand1,
                                          const GGS_unifiedTypeMapEntry & inOperand2,
                                          const GGS_unifiedTypeMapEntry & inOperand3,
                                          const GGS_unifiedTypeMapEntry & inOperand4,
                                          const GGS_unifiedTypeMapEntry & inOperand5,
                                          const GGS_unifiedTypeMapEntry & inOperand6,
                                          const GGS_unifiedTypeMapEntry & inOperand7,
                                          const GGS_unifiedTypeMapEntry & inOperand8,
                                          const GGS_unifiedTypeMapEntry & inOperand9,
                                          const GGS_unifiedTypeMapEntry & inOperand10,
                                          const GGS_unifiedTypeMapEntry & inOperand11,
                                          const GGS_unifiedTypeMapEntry & inOperand12,
                                          const GGS_unifiedTypeMapEntry & inOperand13,
                                          const GGS_unifiedTypeMapEntry & inOperand14,
                                          const GGS_unifiedTypeMapEntry & inOperand15,
                                          const GGS_unifiedTypeMapEntry & inOperand16,
                                          const GGS_unifiedTypeMapEntry & inOperand17,
                                          const GGS_unifiedTypeMapEntry & inOperand18,
                                          const GGS_unifiedTypeMapEntry & inOperand19,
                                          const GGS_unifiedTypeMapEntry & inOperand20,
                                          const GGS_unifiedTypeMapEntry & inOperand21) :
mProperty_mLocationType (inOperand0),
mProperty_mBoolType (inOperand1),
mProperty_mCharType (inOperand2),
mProperty_mStringType (inOperand3),
mProperty_mUIntType (inOperand4),
mProperty_mSIntType (inOperand5),
mProperty_mUInt_36__34_Type (inOperand6),
mProperty_mSInt_36__34_Type (inOperand7),
mProperty_mDoubleType (inOperand8),
mProperty_mLBoolType (inOperand9),
mProperty_mLCharType (inOperand10),
mProperty_mLStringType (inOperand11),
mProperty_mLUIntType (inOperand12),
mProperty_mLSIntType (inOperand13),
mProperty_mLUInt_36__34_Type (inOperand14),
mProperty_mLSInt_36__34_Type (inOperand15),
mProperty_mLDoubleType (inOperand16),
mProperty_mLBigIntType (inOperand17),
mProperty_mBigIntType (inOperand18),
mProperty_mStringSetType (inOperand19),
mProperty_mStringArrayType (inOperand20),
mProperty_mLStringArrayType (inOperand21) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_predefinedTypes::isValid (void) const {
  return mProperty_mLocationType.isValid () && mProperty_mBoolType.isValid () && mProperty_mCharType.isValid () && mProperty_mStringType.isValid () && mProperty_mUIntType.isValid () && mProperty_mSIntType.isValid () && mProperty_mUInt_36__34_Type.isValid () && mProperty_mSInt_36__34_Type.isValid () && mProperty_mDoubleType.isValid () && mProperty_mLBoolType.isValid () && mProperty_mLCharType.isValid () && mProperty_mLStringType.isValid () && mProperty_mLUIntType.isValid () && mProperty_mLSIntType.isValid () && mProperty_mLUInt_36__34_Type.isValid () && mProperty_mLSInt_36__34_Type.isValid () && mProperty_mLDoubleType.isValid () && mProperty_mLBigIntType.isValid () && mProperty_mBigIntType.isValid () && mProperty_mStringSetType.isValid () && mProperty_mStringArrayType.isValid () && mProperty_mLStringArrayType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::drop (void) {
  mProperty_mLocationType.drop () ;
  mProperty_mBoolType.drop () ;
  mProperty_mCharType.drop () ;
  mProperty_mStringType.drop () ;
  mProperty_mUIntType.drop () ;
  mProperty_mSIntType.drop () ;
  mProperty_mUInt_36__34_Type.drop () ;
  mProperty_mSInt_36__34_Type.drop () ;
  mProperty_mDoubleType.drop () ;
  mProperty_mLBoolType.drop () ;
  mProperty_mLCharType.drop () ;
  mProperty_mLStringType.drop () ;
  mProperty_mLUIntType.drop () ;
  mProperty_mLSIntType.drop () ;
  mProperty_mLUInt_36__34_Type.drop () ;
  mProperty_mLSInt_36__34_Type.drop () ;
  mProperty_mLDoubleType.drop () ;
  mProperty_mLBigIntType.drop () ;
  mProperty_mBigIntType.drop () ;
  mProperty_mStringSetType.drop () ;
  mProperty_mStringArrayType.drop () ;
  mProperty_mLStringArrayType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @predefinedTypes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLocationType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringSetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringArrayType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringArrayType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @predefinedTypes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST::GGS_templateDelimiterDescriptorAST (void) :
mProperty_mOpenTemplateDelimiter (),
mProperty_mCloseTemplateDelimiter () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST::GGS_templateDelimiterDescriptorAST (const GGS_templateDelimiterDescriptorAST & inSource) :
mProperty_mOpenTemplateDelimiter (inSource.mProperty_mOpenTemplateDelimiter),
mProperty_mCloseTemplateDelimiter (inSource.mProperty_mCloseTemplateDelimiter) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST & GGS_templateDelimiterDescriptorAST::operator = (const GGS_templateDelimiterDescriptorAST & inSource) {
  mProperty_mOpenTemplateDelimiter = inSource.mProperty_mOpenTemplateDelimiter ;
  mProperty_mCloseTemplateDelimiter = inSource.mProperty_mCloseTemplateDelimiter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST GGS_templateDelimiterDescriptorAST::init_21__21_ (const GGS_lstring & in_mOpenTemplateDelimiter,
                                                                                     const GGS_lstring & in_mCloseTemplateDelimiter,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimiterDescriptorAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOpenTemplateDelimiter = in_mOpenTemplateDelimiter ;
  result.mProperty_mCloseTemplateDelimiter = in_mCloseTemplateDelimiter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimiterDescriptorAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST::GGS_templateDelimiterDescriptorAST (const GGS_lstring & inOperand0,
                                                                        const GGS_lstring & inOperand1) :
mProperty_mOpenTemplateDelimiter (inOperand0),
mProperty_mCloseTemplateDelimiter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateDelimiterDescriptorAST::isValid (void) const {
  return mProperty_mOpenTemplateDelimiter.isValid () && mProperty_mCloseTemplateDelimiter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimiterDescriptorAST::drop (void) {
  mProperty_mOpenTemplateDelimiter.drop () ;
  mProperty_mCloseTemplateDelimiter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimiterDescriptorAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateDelimiterDescriptorAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOpenTemplateDelimiter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCloseTemplateDelimiter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateDelimiterDescriptorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimiterDescriptorAST ("templateDelimiterDescriptorAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimiterDescriptorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimiterDescriptorAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_nonTerminalToAdd_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_::GGS__5B_nonTerminalToAdd_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_::GGS__5B_nonTerminalToAdd_5D_ (const GGS__5B_nonTerminalToAdd_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ & GGS__5B_nonTerminalToAdd_5D_::operator = (const GGS__5B_nonTerminalToAdd_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ GGS__5B_nonTerminalToAdd_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_nonTerminalToAdd_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::plusPlusAssignOperation (const GGS_nonTerminalToAdd & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_nonTerminalToAdd_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ GGS__5B_nonTerminalToAdd_5D_::add_operation (const GGS__5B_nonTerminalToAdd_5D_ & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_nonTerminalToAdd_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@nonTerminalToAdd], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::plusAssignOperation (const GGS__5B_nonTerminalToAdd_5D_ inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_append (const GGS_nonTerminalToAdd inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_insert (const GGS_nonTerminalToAdd inValue,
                                                  const GGS_u_33__32_ inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_remove (GGS_nonTerminalToAdd & outValue,
                                                  const GGS_u_33__32_ inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_removeFirst (GGS_nonTerminalToAdd & outValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::setter_removeLast (GGS_nonTerminalToAdd & outValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ GGS__5B_nonTerminalToAdd_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_nonTerminalToAdd_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ GGS__5B_nonTerminalToAdd_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                           const GGS_u_33__32_ & inLength,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_nonTerminalToAdd_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd GGS__5B_nonTerminalToAdd_5D_::getter_first (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAdd result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd GGS__5B_nonTerminalToAdd_5D_::getter_last (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAdd result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd GGS__5B_nonTerminalToAdd_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAdd result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_nonTerminalToAdd_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                        const GGS_nonTerminalToAdd inValue,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_nonTerminalToAdd_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_nonTerminalToAdd_5D_::DownEnumerator__5B_nonTerminalToAdd_5D_ (const GGS__5B_nonTerminalToAdd_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd DownEnumerator__5B_nonTerminalToAdd_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd DownEnumerator__5B_nonTerminalToAdd_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_nonTerminalToAdd_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_nonTerminalToAdd_5D_::UpEnumerator__5B_nonTerminalToAdd_5D_ (const GGS__5B_nonTerminalToAdd_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd UpEnumerator__5B_nonTerminalToAdd_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd UpEnumerator__5B_nonTerminalToAdd_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[nonTerminalToAdd] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_nonTerminalToAdd_5D_ ("[nonTerminalToAdd]",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_nonTerminalToAdd_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_nonTerminalToAdd_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd::GGS_nonTerminalToAdd (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd::GGS_nonTerminalToAdd (const GGS_nonTerminalToAdd & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mNonTerminalToAddCount (inSource.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd & GGS_nonTerminalToAdd::operator = (const GGS_nonTerminalToAdd & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mNonTerminalToAddCount = inSource.mProperty_mNonTerminalToAddCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalToAdd GGS_nonTerminalToAdd::init_21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                         const GGS_u_33__32_ & in_mNonTerminalToAddCount,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAdd result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAdd::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAdd::GGS_nonTerminalToAdd (const GGS_string & inOperand0,
                                            const GGS_u_33__32_ & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalToAdd::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAdd::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAdd::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalToAdd:") ;
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
//     @nonTerminalToAdd generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalToAdd ("nonTerminalToAdd",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalToAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAdd ;
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
init_21_isPredefined_21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                              const GGS_lbool & in_mHasIndexing,
                                                              const GGS_lstring & in_mGrammarComponentName,
                                                              const GGS_lstring & in_mGrammarClass,
                                                              const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                              const GGS_lstring & in_mStartSymbolName,
                                                              const GGS__5B_nonTerminalLabelAST_5D_ & in_mStartSymbolLabelList,
                                                              const GGS__5B_lstring_5D_ & in_mUnusedNonterminalList,
                                                              const GGS_templateDelimiterDescriptorAST_3F_ & in_mTemplateDelimiterDescriptor,
                                                              const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
                                                              const GGS_bool & in_mHasTranslateFeature,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mTemplateDelimiterDescriptor, in_mTemplateReplacementList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                            const GGS_lbool & in_mHasIndexing,
                                                                                            const GGS_lstring & in_mGrammarComponentName,
                                                                                            const GGS_lstring & in_mGrammarClass,
                                                                                            const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                                                            const GGS_lstring & in_mStartSymbolName,
                                                                                            const GGS__5B_nonTerminalLabelAST_5D_ & in_mStartSymbolLabelList,
                                                                                            const GGS__5B_lstring_5D_ & in_mUnusedNonterminalList,
                                                                                            const GGS_templateDelimiterDescriptorAST_3F_ & in_mTemplateDelimiterDescriptor,
                                                                                            const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
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
  mProperty_mTemplateDelimiterDescriptor = in_mTemplateDelimiterDescriptor ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
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

GGS__5B_lstring_5D_ GGS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
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

GGS__5B_nonTerminalLabelAST_5D_ GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_nonTerminalLabelAST_5D_ () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimiterDescriptorAST_3F_ GGS_galgas_33_GrammarComponentAST::readProperty_mTemplateDelimiterDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimiterDescriptorAST_3F_ () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mTemplateDelimiterDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateReplacementAST_5D_ GGS_galgas_33_GrammarComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateReplacementAST_5D_ () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
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
mProperty_mTemplateDelimiterDescriptor (),
mProperty_mTemplateReplacementList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lbool & in_mHasIndexing,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mGrammarClass,
                                                                        const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                                        const GGS_lstring & in_mStartSymbolName,
                                                                        const GGS__5B_nonTerminalLabelAST_5D_ & in_mStartSymbolLabelList,
                                                                        const GGS__5B_lstring_5D_ & in_mUnusedNonterminalList,
                                                                        const GGS_templateDelimiterDescriptorAST_3F_ & in_mTemplateDelimiterDescriptor,
                                                                        const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
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
mProperty_mTemplateDelimiterDescriptor (),
mProperty_mTemplateReplacementList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mTemplateDelimiterDescriptor = in_mTemplateDelimiterDescriptor ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
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
  mProperty_mTemplateDelimiterDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_galgas_33_GrammarComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mTemplateDelimiterDescriptor, mProperty_mTemplateReplacementList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
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
    mProperty_mTemplateDelimiterDescriptor.printNonNullClassInstanceProperties ("mTemplateDelimiterDescriptor") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeDeclarationAST::objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const {
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

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::
init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_arrayTypeName,
                                                                       const GGS_lstring & in_elementTypeName,
                                                                       const GGS_bool & in_isUsefull,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayTypeDeclarationAST_init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, inCompiler) ;
  const GGS_arrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::
arrayTypeDeclarationAST_init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                                               const GGS_lstring & in_arrayTypeName,
                                                                                               const GGS_lstring & in_elementTypeName,
                                                                                               const GGS_bool & in_isUsefull,
                                                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (const cPtr_arrayTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_arrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_arrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_elementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_elementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_arrayTypeName,
                                                            const GGS_lstring & in_elementTypeName,
                                                            const GGS_bool & in_isUsefull,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

void cPtr_arrayTypeDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_arrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_arrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeDeclarationAST (mProperty_isPredefined, mProperty_arrayTypeName, mProperty_elementTypeName, mProperty_isUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_arrayTypeName.printNonNullClassInstanceProperties ("arrayTypeName") ;
    mProperty_elementTypeName.printNonNullClassInstanceProperties ("elementTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ("arrayTypeDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeForGeneration::objectCompare (const GGS_arrayTypeForGeneration & inOperand) const {
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

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::
init_21_infoMessage_21__21_ (const GGS_string & in_infoMessage,
                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                             const GGS_unifiedTypeMapEntry & in_elementType,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->arrayTypeForGeneration_init_21_infoMessage_21__21_ (in_infoMessage, in_mSelfTypeEntry, in_elementType, inCompiler) ;
  const GGS_arrayTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::
arrayTypeForGeneration_init_21_infoMessage_21__21_ (const GGS_string & in_infoMessage,
                                                    const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_elementType,
                                                    Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_arrayTypeForGeneration::readProperty_elementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_elementType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GGS_string & in_infoMessage,
                                                          const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GGS_unifiedTypeMapEntry & in_elementType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_elementType () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

void cPtr_arrayTypeForGeneration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_arrayTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_elementType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_elementType.printNonNullClassInstanceProperties ("elementType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'arrayTypeGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_arrayTypeGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_arrayTypeGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @arrayTypeGenerationTemplate  arrayTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS-array.h1.galgasTemplate", 2)).add_operation (GGS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS-array.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }\n\n//---\n  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }\n  public: inline int32_t index (void) { return mCurrent ; }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }\n\n//---\n  public: inline void gotoNextObject (void) { mCurrent += 1 ; }\n\n//---\n  public: inline void rewind (void) { mCurrent = 0 ; }\n  public: inline int32_t index (void) { return mCurrent ; }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: bool mIsValid ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Direct access\n  public: void removeAll (void) ;\n  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override { return mIsValid ; }\n\n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @arrayTypeGenerationTemplate  arrayTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-array.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' array"), inCompiler COMMA_SOURCE_FILE ("GALGAS-array.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedArray (),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedArray (inSource.mSharedArray),\nmIsValid (inSource.mIsValid) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource)  {\n  mSharedArray = inSource.mSharedArray ;\n  mIsValid = inSource.mIsValid ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mIsValid = true ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mSharedArray.removeAll () ;\n  mIsValid = false ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeAll (void) {\n  mSharedArray.removeAll () ;\n  mIsValid = true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_u_33__32_ result ;\n  if (isValid ()) {\n    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<array [@") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("], \") ;\n  ioString.appendSigned (mSharedArray.count ()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((mSharedArray.count () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAll (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * /* inCompiler */\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_u_33__32_ inInsertionIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    if (idx > mSharedArray.count ()) {\n      String errorMessage = \"'insert' setter call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_remove (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_u_33__32_ inRemoveIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  outValue.drop () ;\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    if (idx >= mSharedArray.count ()) {\n      String errorMessage = \"'remove' setter call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      outValue = mSharedArray (idx COMMA_THERE) ;\n      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (!isValid ()) {\n    outValue.drop () ;\n  }else if (count () == 0) {\n    const String errorMessage = \"'removeFirst' setter call on an empty array\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    outValue.drop () ;\n  }else{\n    outValue = mSharedArray (0 COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeLast (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (!isValid ()) {\n    outValue.drop () ;\n  }else if (count () == 0) {\n    const String errorMessage = \"'removeLast' setter call on an empty array\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    outValue.drop () ;\n  }else{\n    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_removingFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_u_33__32_ & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;\n    if (startIndex < int32_t (count ())) {\n      const int32_t lastIndex = int32_t (count ()) - 1 ;\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n    }else if (startIndex == int32_t (count ())) {\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n    }else{\n      String errorMessage ;\n      errorMessage.appendCString (\"'removingFirst' getter call with argument \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_sublist (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_u_33__32_ & inStartIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_u_33__32_ & inLength,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {\n    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;\n    const int32_t length = int32_t (inLength.uintValue ()) ;\n    if ((startIndex == 0) && (length == 0) && (count () == 0)) {\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n    }else if (startIndex >= int32_t (count ())) {\n      String errorMessage ;\n      errorMessage.appendCString (\"'sublist' getter call with start index \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      const int32_t lastIndex = startIndex + length - 1 ;\n      if (lastIndex >= int32_t (count ())) {\n        String errorMessage ;\n        errorMessage.appendCString (\"'sublist' getter call with last index \") ;\n        errorMessage.appendSigned (lastIndex) ;\n        errorMessage.appendCString (\" too large (array size is\") ;\n        errorMessage.appendSigned (mSharedArray.count ()) ;\n        errorMessage.appendCString (\")\") ;\n        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n      }else{\n        result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n      }\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'first' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray (0 COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'last' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray.lastObject (THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_u_33__32_ & inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < uint32_t (mSharedArray.count ())) {\n      result = mSharedArray (int32_t (idx) COMMA_HERE) ;\n    }else{\n      String errorMessage = \"read subscript call with index \" ;\n      errorMessage.appendUnsigned (idx) ;\n      errorMessage.appendCString (\") too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::writeSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_u_33__32_ inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t idx = int32_t (inIndex.uintValue ()) ;\n    if (idx >= mSharedArray.count ()) {\n      String errorMessage = \"write subscript call with index \" ;\n      errorMessage.appendSigned (idx) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      mSharedArray (idx COMMA_THERE) = inValue ;\n    }\n  }\n}\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mSharedArray (int32_t (i) COMMA_HERE) ;\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mSharedArray (int32_t (i) COMMA_HERE) ;\n        result = left.objectCompare (right) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (inOperand.mSharedArray.count () - 1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
// @dictionaryDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictionaryDeclarationAST::objectCompare (const GGS_dictionaryDeclarationAST & inOperand) const {
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

GGS_dictionaryDeclarationAST::GGS_dictionaryDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictionaryDeclarationAST GGS_dictionaryDeclarationAST::
init_21_isPredefined_21_dictionaryTypeName_21_keyTypeName_21_valueTypeName_21_equatable (const GGS_bool & in_isPredefined,
                                                                                         const GGS_lstring & in_dictionaryTypeName,
                                                                                         const GGS_lstring & in_keyTypeName,
                                                                                         const GGS_lstring & in_valueTypeName,
                                                                                         const GGS_bool & in_equatable,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_dictionaryDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictionaryDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictionaryDeclarationAST_init_21_isPredefined_21_dictionaryTypeName_21_keyTypeName_21_valueTypeName_21_equatable (in_isPredefined, in_dictionaryTypeName, in_keyTypeName, in_valueTypeName, in_equatable, inCompiler) ;
  const GGS_dictionaryDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::
dictionaryDeclarationAST_init_21_isPredefined_21_dictionaryTypeName_21_keyTypeName_21_valueTypeName_21_equatable (const GGS_bool & in_isPredefined,
                                                                                                                  const GGS_lstring & in_dictionaryTypeName,
                                                                                                                  const GGS_lstring & in_keyTypeName,
                                                                                                                  const GGS_lstring & in_valueTypeName,
                                                                                                                  const GGS_bool & in_equatable,
                                                                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_dictionaryTypeName = in_dictionaryTypeName ;
  mProperty_keyTypeName = in_keyTypeName ;
  mProperty_valueTypeName = in_valueTypeName ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictionaryDeclarationAST::GGS_dictionaryDeclarationAST (const cPtr_dictionaryDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictionaryDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictionaryDeclarationAST::readProperty_dictionaryTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictionaryDeclarationAST * p = (cPtr_dictionaryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryDeclarationAST) ;
    return p->mProperty_dictionaryTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictionaryDeclarationAST::readProperty_keyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictionaryDeclarationAST * p = (cPtr_dictionaryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryDeclarationAST) ;
    return p->mProperty_keyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictionaryDeclarationAST::readProperty_valueTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictionaryDeclarationAST * p = (cPtr_dictionaryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryDeclarationAST) ;
    return p->mProperty_valueTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dictionaryDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_dictionaryDeclarationAST * p = (cPtr_dictionaryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictionaryDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictionaryDeclarationAST::cPtr_dictionaryDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_dictionaryTypeName (),
mProperty_keyTypeName (),
mProperty_valueTypeName (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictionaryDeclarationAST::cPtr_dictionaryDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_dictionaryTypeName,
                                                              const GGS_lstring & in_keyTypeName,
                                                              const GGS_lstring & in_valueTypeName,
                                                              const GGS_bool & in_equatable,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_dictionaryTypeName (),
mProperty_keyTypeName (),
mProperty_valueTypeName (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_dictionaryTypeName = in_dictionaryTypeName ;
  mProperty_keyTypeName = in_keyTypeName ;
  mProperty_valueTypeName = in_valueTypeName ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictionaryDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictionaryDeclarationAST ;
}

void cPtr_dictionaryDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dictionaryDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_dictionaryTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_keyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_valueTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dictionaryDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictionaryDeclarationAST (mProperty_isPredefined, mProperty_dictionaryTypeName, mProperty_keyTypeName, mProperty_valueTypeName, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictionaryDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_dictionaryTypeName.printNonNullClassInstanceProperties ("dictionaryTypeName") ;
    mProperty_keyTypeName.printNonNullClassInstanceProperties ("keyTypeName") ;
    mProperty_valueTypeName.printNonNullClassInstanceProperties ("valueTypeName") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictionaryDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictionaryDeclarationAST ("dictionaryDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictionaryDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictionaryDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @dictionaryTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictionaryTypeForGeneration::objectCompare (const GGS_dictionaryTypeForGeneration & inOperand) const {
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

GGS_dictionaryTypeForGeneration::GGS_dictionaryTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictionaryTypeForGeneration GGS_dictionaryTypeForGeneration::
init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (const GGS_string & in_infoMessage,
                                                                      const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                      const GGS_unifiedTypeMapEntry & in_valueType,
                                                                      const GGS_unifiedTypeMapEntry & in_keyType,
                                                                      const GGS_unifiedTypeMapEntry & in_optionalValueType,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cPtr_dictionaryTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictionaryTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictionaryTypeForGeneration_init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (in_infoMessage, in_mSelfTypeEntry, in_valueType, in_keyType, in_optionalValueType, inCompiler) ;
  const GGS_dictionaryTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::
dictionaryTypeForGeneration_init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (const GGS_string & in_infoMessage,
                                                                                                  const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                                  const GGS_unifiedTypeMapEntry & in_valueType,
                                                                                                  const GGS_unifiedTypeMapEntry & in_keyType,
                                                                                                  const GGS_unifiedTypeMapEntry & in_optionalValueType,
                                                                                                  Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_valueType = in_valueType ;
  mProperty_keyType = in_keyType ;
  mProperty_optionalValueType = in_optionalValueType ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictionaryTypeForGeneration::GGS_dictionaryTypeForGeneration (const cPtr_dictionaryTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictionaryTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictionaryTypeForGeneration::readProperty_valueType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictionaryTypeForGeneration * p = (cPtr_dictionaryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryTypeForGeneration) ;
    return p->mProperty_valueType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictionaryTypeForGeneration::readProperty_keyType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictionaryTypeForGeneration * p = (cPtr_dictionaryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryTypeForGeneration) ;
    return p->mProperty_keyType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictionaryTypeForGeneration::readProperty_optionalValueType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictionaryTypeForGeneration * p = (cPtr_dictionaryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictionaryTypeForGeneration) ;
    return p->mProperty_optionalValueType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictionaryTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_dictionaryTypeForGeneration::cPtr_dictionaryTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_valueType (),
mProperty_keyType (),
mProperty_optionalValueType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictionaryTypeForGeneration::cPtr_dictionaryTypeForGeneration (const GGS_string & in_infoMessage,
                                                                    const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                    const GGS_unifiedTypeMapEntry & in_valueType,
                                                                    const GGS_unifiedTypeMapEntry & in_keyType,
                                                                    const GGS_unifiedTypeMapEntry & in_optionalValueType,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_valueType (),
mProperty_keyType (),
mProperty_optionalValueType () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_valueType = in_valueType ;
  mProperty_keyType = in_keyType ;
  mProperty_optionalValueType = in_optionalValueType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictionaryTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictionaryTypeForGeneration ;
}

void cPtr_dictionaryTypeForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dictionaryTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_valueType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_keyType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_optionalValueType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dictionaryTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictionaryTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_valueType, mProperty_keyType, mProperty_optionalValueType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictionaryTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_valueType.printNonNullClassInstanceProperties ("valueType") ;
    mProperty_keyType.printNonNullClassInstanceProperties ("keyType") ;
    mProperty_optionalValueType.printNonNullClassInstanceProperties ("optionalValueType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictionaryTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictionaryTypeForGeneration ("dictionaryTypeForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictionaryTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictionaryTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'dictionaryGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_dictionaryGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_dictionaryGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_dictionaryGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_dictionaryGenerationTemplate_0,
  0,
  gWrapperAllDirectories_dictionaryGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_dictionaryGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_dictionaryGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @dictionaryGenerationTemplate  dictTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_dictionaryGenerationTemplate::class_func_dictTypeHeader_31_ (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                            const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 2)).add_operation (GGS_string (" dictionary"), inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public : GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mProperty_key ;\n  public : GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mProperty_value ;\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n  mProperty_key (),\n  mProperty_value () {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue) :\n  mProperty_key (inKey),\n  mProperty_value (inValue) {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n  mProperty_key (inSource.mProperty_key),\n  mProperty_value (inSource.mProperty_value) {\n  }\n\n  public: Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n    mProperty_key = inSource.mProperty_key ;\n    mProperty_value = inSource.mProperty_value ;\n    return *this ;\n  }\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_u_33__32_ index_1560_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_1560 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1560.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1560.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1560.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n\n") ;
      enumerator_1560.gotoNextObject () ;
      index_1560_.increment () ;
    }
  }
  result.appendString ("\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand)  ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n") ;
  GGS_u_33__32_ index_2565_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_2565 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2565.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2565.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 69)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2565.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.h1.galgasTemplate", 69)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n") ;
      enumerator_2565.gotoNextObject () ;
      index_2565_.increment () ;
    }
  }
  result.appendString ("//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public GenericDictionary <GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> {\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--------------------------------- Build\n  protected: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" buildEmptyDictionary (LOCATION_ARGS) ;\n\n//--------------------------------- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @dictionaryGenerationTemplate  dictTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_dictionaryGenerationTemplate::class_func_dictTypeSpecificImplementation (const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                        const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_bool & /* in_GENERATE_5F_COMPARISON */,
                                                                                        const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::buildEmptyDictionary (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::buildEmptyDictionary (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<dict @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (": \") ;\n  if (isValid ()) {\n    ioString.appendSigned (count ()) ;\n    ioString.appendCString (\" node(s)\") ;\n  }else{\n    ioString.appendCString (\"not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_u_33__32_ result ;\n  if (isValid ()) {\n    result = GGS_u_33__32_ (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object->mProperty_value) ;\n    }else{\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F__3F_default (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inDefaultValue,\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      result = GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object->mProperty_value) ;\n    }else{\n      result = inDefaultValue ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_unwrap (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) {\n    //--- Build error message\n     const String message = \"unknown dictionary key\" ;\n//      String message = \"dictionary does not contains the '\" ;\n//      message.appendString (inKey.stringValue ()) ;\n//      message.appendString (\"' key\") ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = object->mProperty_value ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::writeSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler *\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" object (inKey, inValue) ;\n    insertOrReplace (inKey, object COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::writeSubscript__3F_unique (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" object (inKey, inValue) ;\n    const bool overwrite = insertOrReplace (inKey, object COMMA_THERE) ;\n    if (overwrite) {\n    //--- Build error message\n     const String message = \"dictionary key overwrite\" ;\n//     String message = \"dictionary '\" ;\n//     message.appendString (inKey.stringValue ()) ;\n//     message.appendString (\"' key overwrite\") ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (hasKey (inKey)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_remove (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <Node_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> removedObject\n                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;\n    if (removedObject.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmArray (inOperand.sortedInfoArray ()),\nmIndex (0) {\n}\n\n") ;
  GGS_u_33__32_ index_6664_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_6664 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_6664.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6664.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 171)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_6664.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 171)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_6664.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 172)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_6664.gotoNextObject () ;
      index_6664_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmArray (inOperand.sortedInfoArray ()),\nmIndex () {\n  mIndex = mArray.count () - 1 ;\n}\n\n") ;
  GGS_u_33__32_ index_7558_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7558 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_7558.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7558.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 190)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_7558.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 190)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_7558.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-dictionary.cpp.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_7558.gotoNextObject () ;
      index_7558_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//  Enum structComparison
//--------------------------------------------------------------------------------------------------

GGS_structComparison::GGS_structComparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structComparison::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_structComparison result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structComparison::class_func_equatable (UNUSED_LOCATION_ARGS) {
  GGS_structComparison result ;
  result.mEnum = Enumeration::enum_equatable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structComparison::class_func_comparable (UNUSED_LOCATION_ARGS) {
  GGS_structComparison result ;
  result.mEnum = Enumeration::enum_comparable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_structComparison [4] = {
  "(not built)",
  "none",
  "equatable",
  "comparable"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structComparison::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structComparison::getter_isEquatable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equatable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structComparison::getter_isComparable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_comparable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_structComparison::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @structComparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_structComparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @structComparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structComparison ("structComparison",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structComparison ;
}

//--------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structDeclarationAST::objectCompare (const GGS_structDeclarationAST & inOperand) const {
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

GGS_structDeclarationAST::GGS_structDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::
init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                            const GGS_lstring & in_structTypeName,
                                                                                            const GGS__5B_propertyInCollectionAST_5D_ & in_mStructurePropertyListAST,
                                                                                            const GGS_string & in_enumeratedElementTypeName,
                                                                                            const GGS_structComparison & in_comparison,
                                                                                            const GGS_bool & in_isUsefullStruct,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_structDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefullStruct, inCompiler) ;
  const GGS_structDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::
structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                                                 const GGS_lstring & in_structTypeName,
                                                                                                                 const GGS__5B_propertyInCollectionAST_5D_ & in_mStructurePropertyListAST,
                                                                                                                 const GGS_string & in_enumeratedElementTypeName,
                                                                                                                 const GGS_structComparison & in_comparison,
                                                                                                                 const GGS_bool & in_isUsefullStruct,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST::GGS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structDeclarationAST::readProperty_structTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_structTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_propertyInCollectionAST_5D_ () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_structDeclarationAST::readProperty_enumeratedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_enumeratedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structDeclarationAST::readProperty_isUsefullStruct (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_isUsefullStruct ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_structTypeName,
                                                      const GGS__5B_propertyInCollectionAST_5D_ & in_mStructurePropertyListAST,
                                                      const GGS_string & in_enumeratedElementTypeName,
                                                      const GGS_structComparison & in_comparison,
                                                      const GGS_bool & in_isUsefullStruct,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@structDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefullStruct.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_isPredefined, mProperty_structTypeName, mProperty_mStructurePropertyListAST, mProperty_enumeratedElementTypeName, mProperty_comparison, mProperty_isUsefullStruct, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_structTypeName.printNonNullClassInstanceProperties ("structTypeName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_enumeratedElementTypeName.printNonNullClassInstanceProperties ("enumeratedElementTypeName") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
    mProperty_isUsefullStruct.printNonNullClassInstanceProperties ("isUsefullStruct") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @structTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structTypeForGeneration::objectCompare (const GGS_structTypeForGeneration & inOperand) const {
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

GGS_structTypeForGeneration::GGS_structTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structTypeForGeneration GGS_structTypeForGeneration::
init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS__5B_typedProperty_5D_ & in_mTypedPropertyList,
                                             const GGS__5B_typedProperty_5D_ & in_mConstructorArgumentList,
                                             const GGS_string & in_mConstructorInitializationCode,
                                             const GGS_bool & in_mConstructorNeedsCompilerVar,
                                             const GGS_bool & in_synthetizeAnInitializer,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_structTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_structTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->structTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mTypedPropertyList, in_mConstructorArgumentList, in_mConstructorInitializationCode, in_mConstructorNeedsCompilerVar, in_synthetizeAnInitializer, inCompiler) ;
  const GGS_structTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::
structTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                     const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                     const GGS__5B_typedProperty_5D_ & in_mTypedPropertyList,
                                                                     const GGS__5B_typedProperty_5D_ & in_mConstructorArgumentList,
                                                                     const GGS_string & in_mConstructorInitializationCode,
                                                                     const GGS_bool & in_mConstructorNeedsCompilerVar,
                                                                     const GGS_bool & in_synthetizeAnInitializer,
                                                                     Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mTypedPropertyList = in_mTypedPropertyList ;
  mProperty_mConstructorArgumentList = in_mConstructorArgumentList ;
  mProperty_mConstructorInitializationCode = in_mConstructorInitializationCode ;
  mProperty_mConstructorNeedsCompilerVar = in_mConstructorNeedsCompilerVar ;
  mProperty_synthetizeAnInitializer = in_synthetizeAnInitializer ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration::GGS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS_structTypeForGeneration::readProperty_mTypedPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_typedProperty_5D_ () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mTypedPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS_structTypeForGeneration::readProperty_mConstructorArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_typedProperty_5D_ () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_structTypeForGeneration::readProperty_mConstructorInitializationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorInitializationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structTypeForGeneration::readProperty_mConstructorNeedsCompilerVar (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorNeedsCompilerVar ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structTypeForGeneration::readProperty_synthetizeAnInitializer (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_synthetizeAnInitializer ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mTypedPropertyList (),
mProperty_mConstructorArgumentList (),
mProperty_mConstructorInitializationCode (),
mProperty_mConstructorNeedsCompilerVar (),
mProperty_synthetizeAnInitializer () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GGS_string & in_infoMessage,
                                                            const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                            const GGS__5B_typedProperty_5D_ & in_mTypedPropertyList,
                                                            const GGS__5B_typedProperty_5D_ & in_mConstructorArgumentList,
                                                            const GGS_string & in_mConstructorInitializationCode,
                                                            const GGS_bool & in_mConstructorNeedsCompilerVar,
                                                            const GGS_bool & in_synthetizeAnInitializer,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mTypedPropertyList (),
mProperty_mConstructorArgumentList (),
mProperty_mConstructorInitializationCode (),
mProperty_mConstructorNeedsCompilerVar (),
mProperty_synthetizeAnInitializer () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mTypedPropertyList = in_mTypedPropertyList ;
  mProperty_mConstructorArgumentList = in_mConstructorArgumentList ;
  mProperty_mConstructorInitializationCode = in_mConstructorInitializationCode ;
  mProperty_mConstructorNeedsCompilerVar = in_mConstructorNeedsCompilerVar ;
  mProperty_synthetizeAnInitializer = in_synthetizeAnInitializer ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@structTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorInitializationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorNeedsCompilerVar.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_synthetizeAnInitializer.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mTypedPropertyList, mProperty_mConstructorArgumentList, mProperty_mConstructorInitializationCode, mProperty_mConstructorNeedsCompilerVar, mProperty_synthetizeAnInitializer, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTypedPropertyList.printNonNullClassInstanceProperties ("mTypedPropertyList") ;
    mProperty_mConstructorArgumentList.printNonNullClassInstanceProperties ("mConstructorArgumentList") ;
    mProperty_mConstructorInitializationCode.printNonNullClassInstanceProperties ("mConstructorInitializationCode") ;
    mProperty_mConstructorNeedsCompilerVar.printNonNullClassInstanceProperties ("mConstructorNeedsCompilerVar") ;
    mProperty_synthetizeAnInitializer.printNonNullClassInstanceProperties ("synthetizeAnInitializer") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'structureGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structureGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structureGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_structureGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_structureGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @structureGenerationTemplate  structTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_structureGenerationTemplate::class_func_structTypeHeader_31_ (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 2)).add_operation (GGS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GGS_u_33__32_ index_394_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_394 (in_PROPERTY_5F_LIST) ;
    while (enumerator_394.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_394.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_394.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_394.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      enumerator_394.gotoNextObject () ;
      index_394_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GGS_u_33__32_ index_1112_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_1112 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1112.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1112.current_entry (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 24)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" (const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1112.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1112.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      enumerator_1112.gotoNextObject () ;
      index_1112_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Set initialized properties\n  private: void setInitializedProperties (Compiler * inCompiler) ;\n\n//--------------------------------- Native constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_u_33__32_ index_1677_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_1677 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1677.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1677.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1677.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.h1.galgasTemplate", 33)).stringValue ()) ;
      enumerator_1677.gotoNextObject () ;
      if (enumerator_1677.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1677_.increment () ;
    }
  }
  result.appendString (") ;\n\n//--------------------------------- Copy constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Assignment operator\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @structureGenerationTemplate  structTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_structureGenerationTemplate::class_func_structTypeSpecificImplementation (const GGS_string & in_TYPE_5F_NAME,
                                                                                         const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                                         const GGS__5B_typedProperty_5D_ & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                         const GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                         const GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                         const GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                         const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GGS_u_33__32_ index_194_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_194 (in_PROPERTY_5F_LIST) ;
    while (enumerator_194.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_194.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_194.gotoNextObject () ;
      if (enumerator_194.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_194_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  GGS_u_33__32_ index_511_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_511 (in_PROPERTY_5F_LIST) ;
    while (enumerator_511.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_511.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" (inSource.mProperty_") ;
      result.appendString (enumerator_511.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_511.gotoNextObject () ;
      if (enumerator_511.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_511_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n") ;
  GGS_u_33__32_ index_904_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_904 (in_PROPERTY_5F_LIST) ;
    while (enumerator_904.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_904.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inSource.mProperty_") ;
      result.appendString (enumerator_904.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_904.gotoNextObject () ;
      index_904_.increment () ;
    }
  }
  result.appendString ("  return *this ;\n}\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//---Synthetized initializer -----------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 36)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_u_33__32_ index_1382_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_1382 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1382.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1382.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_1382.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_1382.gotoNextObject () ;
        index_1382_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
    GGS_u_33__32_ index_1718_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_1718 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1718.hasCurrentObject ()) {
        result.appendString ("  result.mProperty_") ;
        result.appendString (enumerator_1718.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_1718.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" ;\n") ;
        enumerator_1718.gotoNextObject () ;
        index_1718_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setInitializedProperties (") ;
  const GalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("Compiler * /* inCompiler */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_u_33__32_ index_2375_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_2375 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2375.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2375.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_2375_IDX.getter_string (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      enumerator_2375.gotoNextObject () ;
      if (enumerator_2375.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2375_IDX.increment () ;
    }
  }
  result.appendString (") :\n") ;
  GGS_u_33__32_ index_2531_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_2531 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2531.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_2531.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_2531_IDX.getter_string (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2531.gotoNextObject () ;
      if (enumerator_2531.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2531_IDX.increment () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
    GGS_u_33__32_ index_2980_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_2980 (in_PROPERTY_5F_LIST) ;
      while (enumerator_2980.hasCurrentObject ()) {
        result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
        result.appendString (enumerator_2980.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (".objectCompare (inOperand.mProperty_") ;
        result.appendString (enumerator_2980.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        enumerator_2980.gotoNextObject () ;
        index_2980_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GGS_u_33__32_ index_3442_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_3442 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3442.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3442.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      enumerator_3442.gotoNextObject () ;
      if (enumerator_3442.hasCurrentObject ()) {
        result.appendString (" && ") ;
      }
      index_3442_.increment () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GGS_u_33__32_ index_3732_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_3732 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3732.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_3732.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_3732.gotoNextObject () ;
      index_3732_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<struct @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_u_33__32_ index_4222_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_4222 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4222.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4222.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-struct.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      enumerator_4222.gotoNextObject () ;
      if (enumerator_4222.hasCurrentObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4222_IDX.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//  Enum propertyMutability
//--------------------------------------------------------------------------------------------------

GGS_propertyMutability::GGS_propertyMutability (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::class_func_constantProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  result.mEnum = Enumeration::enum_constantProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMutability GGS_propertyMutability::class_func_mutableProperty (UNUSED_LOCATION_ARGS) {
  GGS_propertyMutability result ;
  result.mEnum = Enumeration::enum_mutableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyMutability [3] = {
  "(not built)",
  "constantProperty",
  "mutableProperty"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMutability::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_constantProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMutability::getter_isMutableProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mutableProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMutability::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @propertyMutability: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyMutability [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyMutability generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMutability ("propertyMutability",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMutability ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyInCollectionInitializationAST
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST::GGS_propertyInCollectionInitializationAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_some (const GGS_semanticExpressionAST & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_some ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyInCollectionInitializationAST_2E_some (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::method_extractSome (GGS_semanticExpressionAST & outAssociatedValue_expression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_some) {
    outAssociatedValue_expression.drop () ;
    String s ;
    s.appendCString ("proc @propertyInCollectionInitializationAST.some invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST::getter_getSome (UNUSED_LOCATION_ARGS) const {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  if (mEnum == Enumeration::enum_some) {
    const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyInCollectionInitializationAST_2E_some (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::getAssociatedValuesFor_some (GGS_semanticExpressionAST & out_expression) const {
  const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
  out_expression = ptr->mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyInCollectionInitializationAST [3] = {
  "(not built)",
  "none",
  "some"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isSome (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_some == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyInCollectionInitializationAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyInCollectionInitializationAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST::objectCompare (const GGS_propertyInCollectionInitializationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_some: {
        const auto left = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_propertyInCollectionInitializationAST_2E_some *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionInitializationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ("propertyInCollectionInitializationAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;
}

//--------------------------------------------------------------------------------------------------
//  Enum AccessControlAST
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST::GGS_AccessControlAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateAccess (const GGS_location & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateSetAccess (const GGS_location & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControlAST.fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateSetAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateSetAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControlAST.fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST::getter_getFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST::getter_getFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateSetAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateSetAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControlAST [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControlAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControlAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @AccessControlAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ("AccessControlAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@[propertyInCollectionAST] buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const GGS__5B_propertyInCollectionAST_5D_ inObject,
                                                      const GGS_lstring constinArgument_inTypeNameForUsefulness,
                                                      const GGS_semanticContext constinArgument_inSemanticContext,
                                                      const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      GGS_stringset & outArgument_outUnusedVariableCppNameSet,
                                                      GGS_string & outArgument_outInitializationCode,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnusedVariableCppNameSet.drop () ; // Release 'out' argument
  outArgument_outInitializationCode.drop () ; // Release 'out' argument
  outArgument_outInitializationCode = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_4302 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_temporaryVariableIndex_4342 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 106)) ;
  temp_0.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-property.galgas4", 106)) ;
  outArgument_outUnusedVariableCppNameSet = temp_0 ;
  const GGS__5B_propertyInCollectionAST_5D_ temp_1 = inObject ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_4449 (temp_1) ;
  while (enumerator_4449.hasCurrentObject ()) {
    switch (enumerator_4449.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      {
        GGS_semanticExpressionAST extractedValue_4522_expressionAST_0 ;
        enumerator_4449.current (HERE).readProperty_initialization ().getAssociatedValuesFor_some (extractedValue_4522_expressionAST_0) ;
        GGS_localVarManager var_variableMap_4549 = GGS_localVarManager::init_21_ (constinArgument_inSemanticContext.readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
        GGS_analysisContext var_analysisContext_4646 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("declaration-property.galgas4", 116)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        GGS_unifiedTypeMapEntry var_propertyType_4858 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_4449.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 119)) ;
        GGS_semanticExpressionForGeneration var_expression_5219 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_4522_expressionAST_0.ptr (), constinArgument_inTypeNameForUsefulness, ioArgument_ioUsefulEntitiesGraph, var_propertyType_4858, var_analysisContext_4646, ioArgument_ioTypeMap, var_variableMap_4549, var_expression_5219, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 120)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_propertyType_4858, var_expression_5219.readProperty_mResultType (), enumerator_4449.current (HERE).readProperty_name ().readProperty_location (), var_expression_5219, inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas4", 130)) ;
        }
        GGS_string var_sourceVar_5629 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_5219.ptr (), outArgument_outInitializationCode, var_inclusionSet_4302, var_temporaryVariableIndex_4342, outArgument_outUnusedVariableCppNameSet, var_sourceVar_5629, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 136)) ;
        outArgument_outInitializationCode.plusAssignOperation(GGS_string ("  mProperty_").add_operation (enumerator_4449.current (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-property.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 143)), inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas4", 143)) ;
        outArgument_outInitializationCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_5629, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 144)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 144)), inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas4", 144)) ;
      }
      break ;
    }
    enumerator_4449.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_enumConstant_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_::GGS__5B_enumConstant_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_::GGS__5B_enumConstant_5D_ (const GGS__5B_enumConstant_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ & GGS__5B_enumConstant_5D_::operator = (const GGS__5B_enumConstant_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ GGS__5B_enumConstant_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_enumConstant_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::plusPlusAssignOperation (const GGS_enumConstant & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_enumConstant_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ GGS__5B_enumConstant_5D_::add_operation (const GGS__5B_enumConstant_5D_ & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_enumConstant_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@enumConstant], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::plusAssignOperation (const GGS__5B_enumConstant_5D_ inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_append (const GGS_enumConstant inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_insert (const GGS_enumConstant inValue,
                                              const GGS_u_33__32_ inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_remove (GGS_enumConstant & outValue,
                                              const GGS_u_33__32_ inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_removeFirst (GGS_enumConstant & outValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::setter_removeLast (GGS_enumConstant & outValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ GGS__5B_enumConstant_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_enumConstant_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_enumConstant_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_enumConstant_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ GGS__5B_enumConstant_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                   const GGS_u_33__32_ & inLength,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_enumConstant_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_enumConstant_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_enumConstant_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant GGS__5B_enumConstant_5D_::getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_enumConstant result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant GGS__5B_enumConstant_5D_::getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumConstant result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant GGS__5B_enumConstant_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_enumConstant result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstant_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                    const GGS_enumConstant inValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_enumConstant_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_enumConstant_5D_::DownEnumerator__5B_enumConstant_5D_ (const GGS__5B_enumConstant_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant DownEnumerator__5B_enumConstant_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant DownEnumerator__5B_enumConstant_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_enumConstant_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_enumConstant_5D_::UpEnumerator__5B_enumConstant_5D_ (const GGS__5B_enumConstant_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant UpEnumerator__5B_enumConstant_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant UpEnumerator__5B_enumConstant_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[enumConstant] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_enumConstant_5D_ ("[enumConstant]",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_enumConstant_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_enumConstant_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_associatedValue_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_::GGS__5B_associatedValue_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_::GGS__5B_associatedValue_5D_ (const GGS__5B_associatedValue_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_ & GGS__5B_associatedValue_5D_::operator = (const GGS__5B_associatedValue_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_ GGS__5B_associatedValue_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_associatedValue_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::plusPlusAssignOperation (const GGS_associatedValue & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_associatedValue_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_ GGS__5B_associatedValue_5D_::add_operation (const GGS__5B_associatedValue_5D_ & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_associatedValue_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::description (String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@associatedValue], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::plusAssignOperation (const GGS__5B_associatedValue_5D_ inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_append (const GGS_associatedValue inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_insert (const GGS_associatedValue inValue,
                                                 const GGS_u_33__32_ inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_remove (GGS_associatedValue & outValue,
                                                 const GGS_u_33__32_ inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_removeFirst (GGS_associatedValue & outValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::setter_removeLast (GGS_associatedValue & outValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_ GGS__5B_associatedValue_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValue_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValue_5D_ GGS__5B_associatedValue_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                         const GGS_u_33__32_ & inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValue_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS__5B_associatedValue_5D_::getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_associatedValue result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS__5B_associatedValue_5D_::getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_associatedValue result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS__5B_associatedValue_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_associatedValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValue_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                       const GGS_associatedValue inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_associatedValue_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_associatedValue_5D_::DownEnumerator__5B_associatedValue_5D_ (const GGS__5B_associatedValue_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue DownEnumerator__5B_associatedValue_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue DownEnumerator__5B_associatedValue_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_associatedValue_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_associatedValue_5D_::UpEnumerator__5B_associatedValue_5D_ (const GGS__5B_associatedValue_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue UpEnumerator__5B_associatedValue_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue UpEnumerator__5B_associatedValue_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[associatedValue] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_associatedValue_5D_ ("[associatedValue]",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_associatedValue_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_associatedValue_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (void) :
mProperty_typeName (),
mProperty_valueName () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_associatedValue & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_valueName (inSource.mProperty_valueName) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue & GGS_associatedValue::operator = (const GGS_associatedValue & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_valueName = inSource.mProperty_valueName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::init_21__21_ (const GGS_lstring & in_typeName,
                                                       const GGS_lstring & in_valueName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_lstring & inOperand0,
                                          const GGS_lstring & inOperand1) :
mProperty_typeName (inOperand0),
mProperty_valueName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValue::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_valueName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_valueName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ("associatedValue",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValue ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_associatedValueDescriptor_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_::GGS__5B_associatedValueDescriptor_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_::GGS__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ & GGS__5B_associatedValueDescriptor_5D_::operator = (const GGS__5B_associatedValueDescriptor_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::plusPlusAssignOperation (const GGS_associatedValueDescriptor & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_associatedValueDescriptor_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::add_operation (const GGS__5B_associatedValueDescriptor_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@associatedValueDescriptor], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::plusAssignOperation (const GGS__5B_associatedValueDescriptor_5D_ inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_append (const GGS_associatedValueDescriptor inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_insert (const GGS_associatedValueDescriptor inValue,
                                                           const GGS_u_33__32_ inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_remove (GGS_associatedValueDescriptor & outValue,
                                                           const GGS_u_33__32_ inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeFirst (GGS_associatedValueDescriptor & outValue,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeLast (GGS_associatedValueDescriptor & outValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                                             const GGS_u_33__32_ & inLength,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::getter_first (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::getter_last (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                                 const GGS_associatedValueDescriptor inValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS__5B_associatedValueDescriptor_5D_::objectCompare (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_associatedValueDescriptor left = mSharedArray (int32_t (i) COMMA_HERE) ;
        const GGS_associatedValueDescriptor right = inOperand.mSharedArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_associatedValueDescriptor_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_associatedValueDescriptor_5D_::DownEnumerator__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor DownEnumerator__5B_associatedValueDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor DownEnumerator__5B_associatedValueDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_associatedValueDescriptor_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_associatedValueDescriptor_5D_::UpEnumerator__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor UpEnumerator__5B_associatedValueDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor UpEnumerator__5B_associatedValueDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[associatedValueDescriptor] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_associatedValueDescriptor_5D_ ("[associatedValueDescriptor]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_associatedValueDescriptor_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_associatedValueDescriptor_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (const GGS_associatedValueDescriptor & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor & GGS_associatedValueDescriptor::operator = (const GGS_associatedValueDescriptor & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValueDescriptor GGS_associatedValueDescriptor::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                           const GGS_string & in_name,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (const GGS_unifiedTypeMapEntry & inOperand0,
                                                              const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_associatedValueDescriptor::objectCompare (const GGS_associatedValueDescriptor & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValueDescriptor::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValueDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptor ("associatedValueDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptor ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_enumConstantForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_::GGS__5B_enumConstantForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_::GGS__5B_enumConstantForGeneration_5D_ (const GGS__5B_enumConstantForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ & GGS__5B_enumConstantForGeneration_5D_::operator = (const GGS__5B_enumConstantForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ GGS__5B_enumConstantForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_enumConstantForGeneration_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::plusPlusAssignOperation (const GGS_enumConstantForGeneration & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_enumConstantForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ GGS__5B_enumConstantForGeneration_5D_::add_operation (const GGS__5B_enumConstantForGeneration_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_enumConstantForGeneration_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@enumConstantForGeneration], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::plusAssignOperation (const GGS__5B_enumConstantForGeneration_5D_ inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_append (const GGS_enumConstantForGeneration inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_insert (const GGS_enumConstantForGeneration inValue,
                                                           const GGS_u_33__32_ inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_remove (GGS_enumConstantForGeneration & outValue,
                                                           const GGS_u_33__32_ inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_removeFirst (GGS_enumConstantForGeneration & outValue,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::setter_removeLast (GGS_enumConstantForGeneration & outValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ GGS__5B_enumConstantForGeneration_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_enumConstantForGeneration_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ GGS__5B_enumConstantForGeneration_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                                             const GGS_u_33__32_ & inLength,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_enumConstantForGeneration_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration GGS__5B_enumConstantForGeneration_5D_::getter_first (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_enumConstantForGeneration result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration GGS__5B_enumConstantForGeneration_5D_::getter_last (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_enumConstantForGeneration result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration GGS__5B_enumConstantForGeneration_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_enumConstantForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_enumConstantForGeneration_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                                 const GGS_enumConstantForGeneration inValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_enumConstantForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_enumConstantForGeneration_5D_::DownEnumerator__5B_enumConstantForGeneration_5D_ (const GGS__5B_enumConstantForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration DownEnumerator__5B_enumConstantForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration DownEnumerator__5B_enumConstantForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_enumConstantForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_enumConstantForGeneration_5D_::UpEnumerator__5B_enumConstantForGeneration_5D_ (const GGS__5B_enumConstantForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration UpEnumerator__5B_enumConstantForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration UpEnumerator__5B_enumConstantForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[enumConstantForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_enumConstantForGeneration_5D_ ("[enumConstantForGeneration]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_enumConstantForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_enumConstantForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration::GGS_enumConstantForGeneration (void) :
mProperty_name (),
mProperty_associatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration::GGS_enumConstantForGeneration (const GGS_enumConstantForGeneration & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_associatedValueTypeList (inSource.mProperty_associatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration & GGS_enumConstantForGeneration::operator = (const GGS_enumConstantForGeneration & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_associatedValueTypeList = inSource.mProperty_associatedValueTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantForGeneration GGS_enumConstantForGeneration::init_21__21_ (const GGS_string & in_name,
                                                                           const GGS__5B_associatedValueDescriptor_5D_ & in_associatedValueTypeList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantForGeneration::GGS_enumConstantForGeneration (const GGS_string & inOperand0,
                                                              const GGS__5B_associatedValueDescriptor_5D_ & inOperand1) :
mProperty_name (inOperand0),
mProperty_associatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantForGeneration::isValid (void) const {
  return mProperty_name.isValid () && mProperty_associatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantForGeneration::drop (void) {
  mProperty_name.drop () ;
  mProperty_associatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumConstantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantForGeneration ("enumConstantForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumDeclarationAST::objectCompare (const GGS_enumDeclarationAST & inOperand) const {
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

GGS_enumDeclarationAST::GGS_enumDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_enumTypeName,
                                            const GGS__5B_enumConstant_5D_ & in_mConstantList,
                                            const GGS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison, inCompiler) ;
  const GGS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS__5B_enumConstant_5D_ & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstant_5D_ GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_enumConstant_5D_ () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_enumTypeName,
                                                  const GGS__5B_enumConstant_5D_ & in_mConstantList,
                                                  const GGS_structComparison & in_comparison,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_mConstantList, mProperty_comparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_mConstantList.printNonNullClassInstanceProperties ("mConstantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @enumTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumTypeForGeneration::objectCompare (const GGS_enumTypeForGeneration & inOperand) const {
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

GGS_enumTypeForGeneration::GGS_enumTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumTypeForGeneration GGS_enumTypeForGeneration::
init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                 const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                 const GGS__5B_enumConstantForGeneration_5D_ & in_constantList,
                                 const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  cPtr_enumTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_enumTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->enumTypeForGeneration_init_21_infoMessage_21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_constantList, in_associatedValuesTypes, inCompiler) ;
  const GGS_enumTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::
enumTypeForGeneration_init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                                       const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                       const GGS__5B_enumConstantForGeneration_5D_ & in_constantList,
                                                       const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                                       Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_constantList = in_constantList ;
  mProperty_associatedValuesTypes = in_associatedValuesTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration::GGS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_enumConstantForGeneration_5D_ GGS_enumTypeForGeneration::readProperty_constantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_enumConstantForGeneration_5D_ () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_constantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_enumTypeForGeneration::readProperty_associatedValuesTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_associatedValuesTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_constantList (),
mProperty_associatedValuesTypes () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GGS_string & in_infoMessage,
                                                        const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS__5B_enumConstantForGeneration_5D_ & in_constantList,
                                                        const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_constantList (),
mProperty_associatedValuesTypes () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_constantList = in_constantList ;
  mProperty_associatedValuesTypes = in_associatedValuesTypes ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@enumTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_constantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_associatedValuesTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_constantList, mProperty_associatedValuesTypes, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_constantList.printNonNullClassInstanceProperties ("constantList") ;
    mProperty_associatedValuesTypes.printNonNullClassInstanceProperties ("associatedValuesTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'enumGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_enumGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_enumGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @enumGenerationTemplate  enumTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumGenerationTemplate::class_func_enumTypeHeader_31_ (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                      const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                      const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   enum ") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: enum class Enumeration {\n    invalid") ;
  GGS_u_33__32_ index_519_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_519 (in_CONSTANT_5F_LIST) ;
    while (enumerator_519.hasCurrentObject ()) {
      result.appendString (",\n    enum_") ;
      result.appendString (enumerator_519.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.h1.galgasTemplate", 13)).stringValue ()) ;
      enumerator_519.gotoNextObject () ;
      index_519_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  \n//--------------------------------- Private properties\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  private: Enumeration mEnum ;\n\n//--------------------------------- Associated value extraction\n") ;
  GGS_u_33__32_ index_890_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_890 (in_CONSTANT_5F_LIST) ;
    while (enumerator_890.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.h1.galgasTemplate", 28)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: void getAssociatedValuesFor_") ;
        result.appendString (enumerator_890.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.h1.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_u_33__32_ index_1095_idx (0) ;
        if (enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_1095 (enumerator_890.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1095.hasCurrentObject ()) {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1095.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.h1.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1095.current_entry (HERE).readProperty_name ().stringValue ()) ;
            enumerator_1095.gotoNextObject () ;
            if (enumerator_1095.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1095_idx.increment () ;
          }
        }
        result.appendString (") const ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_890.gotoNextObject () ;
      index_890_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override {\n    return Enumeration::invalid != mEnum ;\n  }\n\n  public: inline void drop (void) override {\n    mEnum = Enumeration::invalid ;\n") ;
  const GalgasBool test_2 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("    mAssociatedValues.drop () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  public: inline Enumeration enumValue (void) const {\n    return mEnum ;\n  }\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @enumGenerationTemplate  enumTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumGenerationTemplate::class_func_enumTypeSpecificImplementation (const GGS_string & in_TYPE_5F_NAME,
                                                                                  const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                                  const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                  const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Enum ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("mEnum (Enumeration::invalid) {\n}\n\n\n") ;
  GGS_u_33__32_ index_410_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_410 (in_CONSTANT_5F_LIST) ;
    while (enumerator_410.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 18)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolFalse : {
        GGS_u_33__32_ index_777_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_777 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_777.hasCurrentObject ()) {
            result.appendString ("const GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_777.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_777_idx.getter_string (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            enumerator_777.gotoNextObject () ;
            if (enumerator_777.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_777_idx.increment () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") {\n  GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  result.mEnum = Enumeration::enum_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 30)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("  AC_GALGAS_root * p = nullptr ;\n  macroMyNew (p, GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_410.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (" (") ;
        GGS_u_33__32_ index_1341_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_1341 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1341.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_1341_idx.getter_string (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 34)).stringValue ()) ;
            enumerator_1341.gotoNextObject () ;
            if (enumerator_1341.hasCurrentObject ()) {
              result.appendString (", ") ;
            }
            index_1341_idx.increment () ;
          }
        }
        result.appendString (")) ;\n  EnumerationAssociatedValues * eav = nullptr ;\n  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;\n  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues\n  macroDetachSharedObject (eav) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      enumerator_410.gotoNextObject () ;
      index_410_.increment () ;
    }
  }
  GGS_u_33__32_ index_1765_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_1765 (in_CONSTANT_5F_LIST) ;
    while (enumerator_1765.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 48)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_extract") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 50)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 50)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_u_33__32_ index_2107_ (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2107 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2107.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2107.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 52)).stringValue ()) ;
            result.appendString (" & outAssociatedValue_") ;
            result.appendString (enumerator_2107.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            enumerator_2107.gotoNextObject () ;
            index_2107_.increment () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != Enumeration::enum_") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") {\n") ;
        GGS_u_33__32_ index_2446_idx (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2446 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2446.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2446.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            enumerator_2446.gotoNextObject () ;
            index_2446_idx.increment () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"proc @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1765.current_entry (HERE).readProperty_name ().stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1765.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_u_33__32_ index_2967_idx (0) ;
        if (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_2967 (enumerator_1765.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2967.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2967.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_2967.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_2967.gotoNextObject () ;
            index_2967_idx.increment () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1765.gotoNextObject () ;
      index_1765_.increment () ;
    }
  }
  GGS_u_33__32_ index_3169_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_3169 (in_CONSTANT_5F_LIST) ;
    while (enumerator_3169.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 75)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3169.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_u_33__32_ index_4385_idx (0) ;
        if (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_4385 (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4385.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4385.current_entry (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4385.current_entry (HERE).readProperty_name ().stringValue ()) ;
            enumerator_4385.gotoNextObject () ;
            if (enumerator_4385.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4385_idx.increment () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3169.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_u_33__32_ index_4753_ (0) ;
        if (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_4753 (enumerator_3169.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4753.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4753.current_entry (HERE).readProperty_name ().stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4753.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_4753.gotoNextObject () ;
            index_4753_.increment () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3169.gotoNextObject () ;
      index_3169_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 101)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GGS_u_33__32_ index_5149_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_5149 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5149.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_5149.current_entry (HERE).readProperty_name ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      enumerator_5149.gotoNextObject () ;
      index_5149_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GGS_u_33__32_ index_5250_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_5250 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5250.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5250.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5250.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      enumerator_5250.gotoNextObject () ;
      index_5250_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const GalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [size_t (mEnum)]) ;\n") ;
  const GalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
    const GalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
    switch (test_8) {
    case GalgasBool::boolTrue : {
      result.appendString ("      switch (mEnum) {\n") ;
      GGS_u_33__32_ index_6861_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_6861 (in_CONSTANT_5F_LIST) ;
        while (enumerator_6861.hasCurrentObject ()) {
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, enumerator_6861.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 152)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_6861.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6861.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6861.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_6861.gotoNextObject () ;
          index_6861_.increment () ;
        }
      }
      result.appendString ("      default:\n        result = ComparisonResult::operandEqual ;\n        break ;\n      }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
// @optionSetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionSetDeclarationAST::objectCompare (const GGS_optionSetDeclarationAST & inOperand) const {
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

GGS_optionSetDeclarationAST::GGS_optionSetDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionSetDeclarationAST GGS_optionSetDeclarationAST::
init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mOptionSetTypeName,
                                             const GGS__5B_lstring_5D_ & in_mFlagList,
                                             const GGS_bool & in_isEquatable,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_optionSetDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionSetDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionSetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (in_isPredefined, in_mOptionSetTypeName, in_mFlagList, in_isEquatable, inCompiler) ;
  const GGS_optionSetDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::
optionSetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                                                     const GGS_lstring & in_mOptionSetTypeName,
                                                                     const GGS__5B_lstring_5D_ & in_mFlagList,
                                                                     const GGS_bool & in_isEquatable,
                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionSetTypeName = in_mOptionSetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionSetDeclarationAST::GGS_optionSetDeclarationAST (const cPtr_optionSetDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionSetDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionSetDeclarationAST::readProperty_mOptionSetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionSetDeclarationAST * p = (cPtr_optionSetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionSetDeclarationAST) ;
    return p->mProperty_mOptionSetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_optionSetDeclarationAST::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_optionSetDeclarationAST * p = (cPtr_optionSetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionSetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionSetDeclarationAST::readProperty_isEquatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionSetDeclarationAST * p = (cPtr_optionSetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionSetDeclarationAST) ;
    return p->mProperty_isEquatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionSetDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionSetDeclarationAST::cPtr_optionSetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOptionSetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionSetDeclarationAST::cPtr_optionSetDeclarationAST (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_mOptionSetTypeName,
                                                            const GGS__5B_lstring_5D_ & in_mFlagList,
                                                            const GGS_bool & in_isEquatable,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mOptionSetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionSetTypeName = in_mOptionSetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionSetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionSetDeclarationAST ;
}

void cPtr_optionSetDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@optionSetDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionSetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isEquatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionSetDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionSetDeclarationAST (mProperty_isPredefined, mProperty_mOptionSetTypeName, mProperty_mFlagList, mProperty_isEquatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionSetDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionSetTypeName.printNonNullClassInstanceProperties ("mOptionSetTypeName") ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
    mProperty_isEquatable.printNonNullClassInstanceProperties ("isEquatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionSetDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionSetDeclarationAST ("optionSetDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionSetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionSetDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @optionSetTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionSetTypeForGeneration::objectCompare (const GGS_optionSetTypeForGeneration & inOperand) const {
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

GGS_optionSetTypeForGeneration::GGS_optionSetTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionSetTypeForGeneration GGS_optionSetTypeForGeneration::
init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                 const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                 const GGS__5B_lstring_5D_ & in_mFlagList,
                                 const GGS_bool & in_equatable,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  cPtr_optionSetTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionSetTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->optionSetTypeForGeneration_init_21_infoMessage_21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mFlagList, in_equatable, inCompiler) ;
  const GGS_optionSetTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::
optionSetTypeForGeneration_init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                                            const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                            const GGS__5B_lstring_5D_ & in_mFlagList,
                                                            const GGS_bool & in_equatable,
                                                            Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionSetTypeForGeneration::GGS_optionSetTypeForGeneration (const cPtr_optionSetTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionSetTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_optionSetTypeForGeneration::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_optionSetTypeForGeneration * p = (cPtr_optionSetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionSetTypeForGeneration) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionSetTypeForGeneration::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionSetTypeForGeneration * p = (cPtr_optionSetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionSetTypeForGeneration) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionSetTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionSetTypeForGeneration::cPtr_optionSetTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mFlagList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionSetTypeForGeneration::cPtr_optionSetTypeForGeneration (const GGS_string & in_infoMessage,
                                                                  const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                  const GGS__5B_lstring_5D_ & in_mFlagList,
                                                                  const GGS_bool & in_equatable,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mFlagList (),
mProperty_equatable () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionSetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionSetTypeForGeneration ;
}

void cPtr_optionSetTypeForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@optionSetTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionSetTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionSetTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mFlagList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionSetTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionSetTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionSetTypeForGeneration ("optionSetTypeForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionSetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionSetTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'structGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_structGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_structGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @structGenerationTemplate  optionSetTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_structGenerationTemplate::class_func_optionSetTypeHeader_31_ (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GGS__5B_lstring_5D_ & /* in_SLOT_5F_LIST */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: optionset @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-option_set.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @structGenerationTemplate  optionSetTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_structGenerationTemplate::class_func_optionSetTypeSpecificImplementation (const GGS_string & in_TYPE_5F_NAME,
                                                                                         const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GGS__5B_lstring_5D_ & in_SLOT_5F_LIST,
                                                                                         const GGS_bigint & in_FULL_5F_SET,
                                                                                         const GGS_bool & in_EQUATABLE,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n") ;
  GGS_u_33__32_ index_713_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_713 (in_SLOT_5F_LIST) ;
    while (enumerator_713.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_713.current_entry (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-option_set.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_713_idx.getter_string (SOURCE_FILE ("GALGAS-option_set.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_713.gotoNextObject () ;
      index_713_idx.increment () ;
    }
  }
  const GalgasBool test_0 = in_EQUATABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::andAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::orAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags |= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::xorAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags ^= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::minusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= ~ inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subtract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS-option_set.cpp.galgasTemplate", 155)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<optionset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_u_33__32_ index_6275_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_6275 (in_SLOT_5F_LIST) ;
    while (enumerator_6275.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_6275_idx.getter_string (SOURCE_FILE ("GALGAS-option_set.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (")) != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_6275.current_entry (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      enumerator_6275.gotoNextObject () ;
      index_6275_idx.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_graphInsertModifier_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_::GGS__5B_graphInsertModifier_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_::GGS__5B_graphInsertModifier_5D_ (const GGS__5B_graphInsertModifier_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ & GGS__5B_graphInsertModifier_5D_::operator = (const GGS__5B_graphInsertModifier_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS__5B_graphInsertModifier_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_graphInsertModifier_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::plusPlusAssignOperation (const GGS_graphInsertModifier & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_graphInsertModifier_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS__5B_graphInsertModifier_5D_::add_operation (const GGS__5B_graphInsertModifier_5D_ & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_graphInsertModifier_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@graphInsertModifier], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::plusAssignOperation (const GGS__5B_graphInsertModifier_5D_ inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_append (const GGS_graphInsertModifier inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_insert (const GGS_graphInsertModifier inValue,
                                                     const GGS_u_33__32_ inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_remove (GGS_graphInsertModifier & outValue,
                                                     const GGS_u_33__32_ inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_removeFirst (GGS_graphInsertModifier & outValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::setter_removeLast (GGS_graphInsertModifier & outValue,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS__5B_graphInsertModifier_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_graphInsertModifier_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_graphInsertModifier_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_graphInsertModifier_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS__5B_graphInsertModifier_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                                 const GGS_u_33__32_ & inLength,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_graphInsertModifier_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_graphInsertModifier_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_graphInsertModifier_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier GGS__5B_graphInsertModifier_5D_::getter_first (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_graphInsertModifier result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier GGS__5B_graphInsertModifier_5D_::getter_last (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_graphInsertModifier result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier GGS__5B_graphInsertModifier_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_graphInsertModifier result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_graphInsertModifier_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                           const GGS_graphInsertModifier inValue,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_graphInsertModifier_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_graphInsertModifier_5D_::DownEnumerator__5B_graphInsertModifier_5D_ (const GGS__5B_graphInsertModifier_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier DownEnumerator__5B_graphInsertModifier_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier DownEnumerator__5B_graphInsertModifier_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_graphInsertModifier_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_graphInsertModifier_5D_::UpEnumerator__5B_graphInsertModifier_5D_ (const GGS__5B_graphInsertModifier_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier UpEnumerator__5B_graphInsertModifier_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier UpEnumerator__5B_graphInsertModifier_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[graphInsertModifier] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_graphInsertModifier_5D_ ("[graphInsertModifier]",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_graphInsertModifier_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_graphInsertModifier_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier::GGS_graphInsertModifier (void) :
mProperty_mInsertModifierName (),
mProperty_mInsertErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier::GGS_graphInsertModifier (const GGS_graphInsertModifier & inSource) :
mProperty_mInsertModifierName (inSource.mProperty_mInsertModifierName),
mProperty_mInsertErrorMessage (inSource.mProperty_mInsertErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier & GGS_graphInsertModifier::operator = (const GGS_graphInsertModifier & inSource) {
  mProperty_mInsertModifierName = inSource.mProperty_mInsertModifierName ;
  mProperty_mInsertErrorMessage = inSource.mProperty_mInsertErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_graphInsertModifier GGS_graphInsertModifier::init_21__21_ (const GGS_lstring & in_mInsertModifierName,
                                                               const GGS_lstring & in_mInsertErrorMessage,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_graphInsertModifier result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertModifierName = in_mInsertModifierName ;
  result.mProperty_mInsertErrorMessage = in_mInsertErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifier::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifier::GGS_graphInsertModifier (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1) :
mProperty_mInsertModifierName (inOperand0),
mProperty_mInsertErrorMessage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_graphInsertModifier::isValid (void) const {
  return mProperty_mInsertModifierName.isValid () && mProperty_mInsertErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifier::drop (void) {
  mProperty_mInsertModifierName.drop () ;
  mProperty_mInsertErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphInsertModifier::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @graphInsertModifier:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertModifierName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInsertErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @graphInsertModifier generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphInsertModifier ("graphInsertModifier",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphInsertModifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphInsertModifier ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationAST::objectCompare (const GGS_graphDeclarationAST & inOperand) const {
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

GGS_graphDeclarationAST::GGS_graphDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mGraphTypeName,
                                      const GGS_lstring & in_mAssociatedArrayTypeName,
                                      const GGS_lstring & in_mAssociatedElementTypeName,
                                      const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedArrayTypeName, in_mAssociatedElementTypeName, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mGraphTypeName,
                                                          const GGS_lstring & in_mAssociatedArrayTypeName,
                                                          const GGS_lstring & in_mAssociatedElementTypeName,
                                                          const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                                          Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedArrayTypeName = in_mAssociatedArrayTypeName ;
  mProperty_mAssociatedElementTypeName = in_mAssociatedElementTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedArrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedArrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_graphInsertModifier_5D_ () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedArrayTypeName (),
mProperty_mAssociatedElementTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mGraphTypeName,
                                                    const GGS_lstring & in_mAssociatedArrayTypeName,
                                                    const GGS_lstring & in_mAssociatedElementTypeName,
                                                    const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedArrayTypeName (),
mProperty_mAssociatedElementTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedArrayTypeName = in_mAssociatedArrayTypeName ;
  mProperty_mAssociatedElementTypeName = in_mAssociatedElementTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedArrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_graphDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedArrayTypeName, mProperty_mAssociatedElementTypeName, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGraphTypeName.printNonNullClassInstanceProperties ("mGraphTypeName") ;
    mProperty_mAssociatedArrayTypeName.printNonNullClassInstanceProperties ("mAssociatedArrayTypeName") ;
    mProperty_mAssociatedElementTypeName.printNonNullClassInstanceProperties ("mAssociatedElementTypeName") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @graphDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationForGeneration::objectCompare (const GGS_graphDeclarationForGeneration & inOperand) const {
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

GGS_graphDeclarationForGeneration::GGS_graphDeclarationForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphDeclarationForGeneration GGS_graphDeclarationForGeneration::
init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS_unifiedTypeMapEntry & in_mAssociatedArrayTypeEntry,
                                             const GGS_unifiedTypeMapEntry & in_mAssociatedElementTypeEntry,
                                             const GGS_unifiedTypeMapEntry & in_mLStringArrayType,
                                             const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                                             const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->graphDeclarationForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mAssociatedArrayTypeEntry, in_mAssociatedElementTypeEntry, in_mLStringArrayType, in_mStringArrayType, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::
graphDeclarationForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                           const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                           const GGS_unifiedTypeMapEntry & in_mAssociatedArrayTypeEntry,
                                                                           const GGS_unifiedTypeMapEntry & in_mAssociatedElementTypeEntry,
                                                                           const GGS_unifiedTypeMapEntry & in_mLStringArrayType,
                                                                           const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                                                                           const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedArrayTypeEntry = in_mAssociatedArrayTypeEntry ;
  mProperty_mAssociatedElementTypeEntry = in_mAssociatedElementTypeEntry ;
  mProperty_mLStringArrayType = in_mLStringArrayType ;
  mProperty_mStringArrayType = in_mStringArrayType ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration::GGS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mAssociatedArrayTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedArrayTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mAssociatedElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mLStringArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mLStringArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mStringArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mStringArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_graphInsertModifier_5D_ GGS_graphDeclarationForGeneration::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_graphInsertModifier_5D_ () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mAssociatedArrayTypeEntry (),
mProperty_mAssociatedElementTypeEntry (),
mProperty_mLStringArrayType (),
mProperty_mStringArrayType (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                                        const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                        const GGS_unifiedTypeMapEntry & in_mAssociatedArrayTypeEntry,
                                                                        const GGS_unifiedTypeMapEntry & in_mAssociatedElementTypeEntry,
                                                                        const GGS_unifiedTypeMapEntry & in_mLStringArrayType,
                                                                        const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                                                                        const GGS__5B_graphInsertModifier_5D_ & in_mInsertModifierList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mAssociatedArrayTypeEntry (),
mProperty_mAssociatedElementTypeEntry (),
mProperty_mLStringArrayType (),
mProperty_mStringArrayType (),
mProperty_mInsertModifierList () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedArrayTypeEntry = in_mAssociatedArrayTypeEntry ;
  mProperty_mAssociatedElementTypeEntry = in_mAssociatedElementTypeEntry ;
  mProperty_mLStringArrayType = in_mLStringArrayType ;
  mProperty_mStringArrayType = in_mStringArrayType ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedArrayTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLStringArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_graphDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mAssociatedArrayTypeEntry, mProperty_mAssociatedElementTypeEntry, mProperty_mLStringArrayType, mProperty_mStringArrayType, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAssociatedArrayTypeEntry.printNonNullClassInstanceProperties ("mAssociatedArrayTypeEntry") ;
    mProperty_mAssociatedElementTypeEntry.printNonNullClassInstanceProperties ("mAssociatedElementTypeEntry") ;
    mProperty_mLStringArrayType.printNonNullClassInstanceProperties ("mLStringArrayType") ;
    mProperty_mStringArrayType.printNonNullClassInstanceProperties ("mStringArrayType") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @graphDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ("graphDeclarationForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'graphGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_graphGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_graphGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_graphGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_graphGenerationTemplate_0,
  0,
  gWrapperAllDirectories_graphGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_graphGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_graphGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @graphGenerationTemplate  graphTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_graphGenerationTemplate::class_func_graphTypeHeader_31_ (const GGS_string & in_TYPE_5F_NAME,
                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                        const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                        const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 2)).add_operation (GGS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--- Private Data member\n  private: class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSharedGraph ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- count\n  public: uint32_t count (void) const ;\n\n//--- isValid\n  public: inline bool isValid (void) const override {\n    return mSharedGraph != nullptr ;\n  }\n\n//--- drop\n  public: void drop (void) override ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Create a new list\n  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;\n\n//--------------------------------- Getters\n  public: class GGS_u_33__32_ getter_count (LOCATION_ARGS) const ;\n\n  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 38)).stringValue ()) ;
  result.appendString (" getter_keyList (LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 40)).stringValue ()) ;
  result.appendString (" getter_lkeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_u_33__32_ getter_undefinedNodeCount (LOCATION_ARGS) const ;\n\n  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_location getter_locationForKey (const GGS_string & inKey,\n                                                    Compiler * inCompiler\n                                                    COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;\n\n  public: GGS__5B_stringString_5D_ getter_edges (UNUSED_LOCATION_ARGS) const ;\n\n//--------------------------------- Setters\n  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,\n                               const class GGS_lstring & inTargetNodeKey\n                               COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                         Compiler * inCompiler\n                                         COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;\n\n//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const ;\n\n//--- Description\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const override ;\n\n//--- Internal methods for handling graph\n  protected: void reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                          COMMA_LOCATION_ARGS) ;\n\n  protected: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 77)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const class GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const ;\n\n\n  protected: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (" graph (void) const ;\n\n  private: void insulateGraph (LOCATION_ARGS) ;\n\n  protected: void internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n  public: void setter_noteNode (const GGS_lstring & inKey\n                                COMMA_LOCATION_ARGS) ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 96)).stringValue ()) ;
  result.appendString (" getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;\n\n  protected: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 98)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                           Compiler * inCompiler\n                                           COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 106)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                             COMMA_UNUSED_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 109)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                  COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 113)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                COMMA_LOCATION_ARGS) const ;\n\n\n  protected: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 118)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 119)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 120)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.h1.galgasTemplate", 121)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const ;\n\n  friend class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @graphGenerationTemplate  graphTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_graphGenerationTemplate::class_func_graphTypeSpecificImplementation (const GGS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                    const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                                    const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                                    const GGS__5B_graphInsertModifier_5D_ & in_INSERT_5F_MODIFIER_5F_LIST,
                                                                                    const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                                    const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mInfPtr ;\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSupPtr ;\n  public: int32_t mBalance ;\n  public: const String mKey ;\n  public: const uint32_t mNodeID ;\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" mElement ;\n  public: GGS_location mDefinitionLocation ;\n  public: GenericUniqueArray <GGS_location> mReferenceLocationArray ;\n  public: bool mIsDefined ;\n\n//--- Constructors\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                        const uint32_t inNodeID) ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) ;\n\n  public: void accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n//--- Destructor\n  public: ~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- No copy\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mInfPtr) ;\n  macroMyDelete (mSupPtr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mRoot ;\n  public: inline const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * root (void) const { return mRoot ; }\n  private: DirectedGraph mDirectedGraph ;\n  private: GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> mNodeArray ;\n\n//--- Constructor\n  public: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) ;\n\n//--- Destructor\n  public: virtual ~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Count\n  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }\n\n//--- isNodeDefined\n  public: bool isNodeDefined (const String & inKey) const ;\n\n//--- locationForKey\n  public: GGS_location locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const ;\n\n//--- Internal methods\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const ;\n\n  public: void copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: void copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: int32_t graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findOrAddNodeForKey (const String & inKey) ;\n\n  protected: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                          const String & inKey,\n                                          bool & ioExtension) ;\n\n  public: void internalAddNode (const GGS_lstring & inKey,\n                                const char * inErrorMessage,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (" & inElement,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) ;\n\n  public: void addEdge (const String & inSourceNodeKey,\n                        const GGS_location & inSourceNodeLocation,\n                        const String & inTargetNodeKey,\n                        const GGS_location & inTargetNodeLocation) ;\n\n  public: void removeEdgesToDominators (LOCATION_ARGS) ;\n\n  public: void removeEdgesToNode (const String & inNodeName,\n                                  Compiler * inCompiler\n                                  COMMA_LOCATION_ARGS) ;\n\n  public: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 98)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n\n  public: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 104)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                          GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 107)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 111)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 113)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 116)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n  public: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                         const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 119)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                         const GGS_stringset & inNodesToExclude,\n                         Compiler * inCompiler\n                         COMMA_LOCATION_ARGS) const ;\n\n  public: void graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 124)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 126)).stringValue ()) ;
  result.appendString (" keyList (void) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 128)).stringValue ()) ;
  result.appendString (" lkeyList (void) const ;\n\n  public: String getter_graphviz (void) const ;\n\n  public: void edges (GGS__5B_stringString_5D_ & ioList) const ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: void checkGraph (LOCATION_ARGS) const ;\n  #endif\n\n//--- No copy\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) :\nSharedObject (THERE),\nmRoot (nullptr),\nmDirectedGraph (),\nmNodeArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mRoot) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Copy\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance),\nmKey (inNode->mKey),\nmNodeID (inNode->mNodeID),\nmElement (inNode->mElement),\nmDefinitionLocation (inNode->mDefinitionLocation),\nmReferenceLocationArray (),\nmIsDefined (inNode->mIsDefined) {\n  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;\n  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {\n    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;\n  }\n  if (nullptr != inNode->mInfPtr) {\n    macroMyNew (mInfPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr)) ;\n  }\n  if (nullptr != inNode->mSupPtr) {\n    macroMyNew (mSupPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildNodeArray (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                            GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> & ioNodeArray) {\n  if (nullptr != inNode) {\n    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, \"ioNodeArray (%lld COMMA_HERE) != nullptr\", inNode->mNodeID, 0) ;\n    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;\n    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;\n    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                const int32_t /* inIndentation */) const {\n  ioString.appendCString (\" (\") ;\n  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;\n  ioString.appendCString (\" node\") ;\n  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\", \") ;\n  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;\n  ioString.appendCString (\" edge\") ;\n  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::checkGraph (LOCATION_ARGS) const {\n    GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> nodeArray (mNodeArray.count () COMMA_HERE) ;\n    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, nodeArray) ;\n    macroAssertThere (nodeArray.count() == mNodeArray.count (), \"nodeArray.count() == %lld != mNodeArray.count () %lld\", nodeArray.count(), mNodeArray.count ()) ;\n    for (int32_t i=0 ; i<nodeArray.count() ; i++) {\n      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), \"nodeArray.(%lld) != mNodeArray.(%lld)\", i, i) ;\n      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), \"! mDirectedGraph.isNodeDefined (i) : %lld != 0\", i, 0) ;\n    }\n  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n//    GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeNewEmptyGraph (LOCATION_ARGS) {\n  macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t inIndentation) const {\n  ioString.appendCString (\"<graph @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\") ;\n  if (isValid ()) {\n    mSharedGraph->description (ioString, inIndentation) ;\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nuint32_t GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::count () const {\n  uint32_t result = 0 ;\n  if (isValid ()) {\n    result = mSharedGraph->allNodeCount () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  return GGS_u_33__32_ (count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::insulateGraph (LOCATION_ARGS) {\n  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {\n    SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    p->copyFrom (mSharedGraph) ;\n    macroAssignSharedObject (mSharedGraph, p) ;\n    macroDetachSharedObject (p) ;\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_hasKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_isNodeDefined (const GGS_string & inKey\n                                                   COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isNodeDefined (const String & inKey) const {\n  bool result = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    result = p->mIsDefined && (p->mKey == inKey) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_locationForKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_locationForKey (const GGS_string & inKey,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  bool found = false ;\n  bool ok = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    found = p->mKey == inKey ;\n    if (found && p->mIsDefined) {\n      ok = true ;\n      result = p->mDefinitionLocation ;\n    }\n  }\n  if (!ok) {\n    inCompiler->emitSemanticError (\n      GGS_location (),\n      String (\"graph locationForKey: node '\") + inKey + String (\"' is undefined\"),\n      GenericArray <FixItDescription> ()\n      COMMA_THERE\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_keyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 412)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::keyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 413)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 413)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    result.plusPlusAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 422)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 423)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->keyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_lkeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 438)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::lkeyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 439)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 439)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    GGS_location loc = p->mDefinitionLocation ;\n    if (! loc.isValid ()) {\n      loc = GGS_location::class_func_nowhere (HERE) ;\n    }\n    result.plusPlusAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 453)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_lkeyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 454)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->lkeyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalFindNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findNode (const String & inKey,\n                                   const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) {\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = nullptr ;\n  while ((nullptr != inNode) && (result == nullptr)) {\n    const int32_t r = inKey.compare (inNode->mKey) ;\n    if (r < 0) {\n      inNode = inNode->mInfPtr ;\n    }else if (r > 0) {\n      inNode = inNode->mSupPtr ;\n    }else{\n      result = inNode ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 493)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  outNodeList.plusPlusAssignOperation (mElement COMMA_HERE) ;\n  if (mInfPtr != nullptr) {\n    mInfPtr->accumulateNodes (outNodeList) ;\n  }\n  if (mSupPtr != nullptr) {\n    mSupPtr->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 505)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  if (mRoot != nullptr) {\n    mRoot->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 513)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 514)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    mSharedGraph->graph (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark subGraph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 530)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const {\n//--- Build start node set\n  UInt32Set startNodeSet ;\n  UpEnumerator_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 536)).stringValue ()) ;
  result.appendString (" enumerator1 (inStartNodes) ;\n  while (enumerator1.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator1.current (THERE).mProperty_string.stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator1.current (THERE).mProperty_string.stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot start from it\") ;\n      inCompiler->emitSemanticError (\n        enumerator1.current (THERE).mProperty_location,\n        message,\n        GenericArray <FixItDescription> ()\n        COMMA_THERE\n      ) ;\n    }else{\n      startNodeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator1.gotoNextObject () ;\n  }\n//--- Build node to exclude set\n  UInt32Set nodesToExcludeSet ;\n  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;\n  while (enumerator2.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator2.current_key (THERE).stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot be excluded\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      nodesToExcludeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator2.gotoNextObject () ;\n  }\n//--- Build sub graph\n  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (\n    startNodeSet,\n    nodesToExcludeSet\n  ) ;\n//--- Enter nodes\n  GenericUniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_string = nodePtr->mKey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    outResultingGraph.internalAddNode (\n      lkey,\n      \"subgraphFromNodes Internal error\",\n      nodePtr->mElement,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n//--- Enter edges\n  GenericUniqueArray <GraphEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;\n    GGS_lstring source ;\n    source.mProperty_string = sourceNodePtr->mKey ;\n    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;\n    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;\n    GGS_lstring target ;\n    target.mProperty_string = targetNodePtr->mKey ;\n    target.mProperty_location = targetNodePtr->mDefinitionLocation ;\n    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 610)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                                const GGS_stringset & inNodesToExclude,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) const {\n  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {\n    outResultingGraph.makeNewEmptyGraph (THERE) ;\n    mSharedGraph->subGraph (\n      outResultingGraph,\n      inStartNodes,\n      inNodesToExclude,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Reversed Graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                              COMMA_LOCATION_ARGS) {\n  macroDetachSharedObject (mSharedGraph) ;\n  if (inGraph.isValid ()) {\n    macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object Compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const {\n  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;\n  return r ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;\n    if (r < 0) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (r > 0) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Node Insertion\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateLeft (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mSupPtr ;\n  ioRootPtr->mSupPtr = b->mInfPtr ;\n  b->mInfPtr = ioRootPtr;\n\n  if (b->mBalance >= 0) {\n    ioRootPtr->mBalance += 1 ;\n  }else{\n    ioRootPtr->mBalance += 1 - b->mBalance ;\n  }\n\n  if (ioRootPtr->mBalance > 0) {\n    b->mBalance += ioRootPtr->mBalance + 1 ;\n  }else{\n    b->mBalance += 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateRight (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mInfPtr ;\n  ioRootPtr->mInfPtr = b->mSupPtr ;\n  b->mSupPtr = ioRootPtr ;\n\n  if (b->mBalance > 0) {\n    ioRootPtr->mBalance += -b->mBalance - 1 ;\n  }else{\n    ioRootPtr->mBalance -= 1 ;\n  }\n  if (ioRootPtr->mBalance >= 0) {\n    b->mBalance -= 1 ;\n  }else{\n    b->mBalance += ioRootPtr->mBalance - 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                                            const uint32_t inNodeID) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (0),\nmKey (inKey),\nmNodeID (inNodeID),\nmElement (),\nmDefinitionLocation (),\nmReferenceLocationArray (),\nmIsDefined (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                         const String & inKey,\n                                         bool & ioExtension) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * matchingEntry = nullptr ;\n  if (ioRootPtr == nullptr) {\n    macroMyNew (ioRootPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inKey, (uint32_t) mNodeArray.count ())) ;\n    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;\n    mNodeArray.appendObject (ioRootPtr) ;\n    ioExtension = true ;\n    matchingEntry = ioRootPtr ;\n  }else{\n    macroValidPointer (ioRootPtr) ;\n    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;\n    if (comparaison > 0) {\n      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance += 1 ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false;\n        }else if (ioRootPtr->mBalance == 2) {\n          if (ioRootPtr->mInfPtr->mBalance == -1) {\n            rotateLeft (ioRootPtr->mInfPtr) ;\n          }\n          rotateRight (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else if (comparaison < 0) {\n      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance-- ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false ;\n        }else if (ioRootPtr->mBalance == -2) {\n          if (ioRootPtr->mSupPtr->mBalance == 1) {\n            rotateRight (ioRootPtr->mSupPtr) ;\n          }\n          rotateLeft (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else{ // Entry already exists\n      matchingEntry = ioRootPtr ;\n      ioExtension = false ;\n    }\n  }\n  return matchingEntry ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalAddNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::findOrAddNodeForKey (const String & inKey) {\n  bool extension = false ; // Unused here\n  return internalInsert (mRoot, inKey, extension) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 818)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;\n  if (!node->mIsDefined) { // Node exists, but is undefined\n    node->mElement = inElement ;\n    node->mDefinitionLocation = inKey.mProperty_location ;\n    node->mIsDefined = true ;\n  }else{ // Error : node redefinition\n    GGS_lstring existingKey ;\n    existingKey.mProperty_location = node->mDefinitionLocation ;\n    existingKey.mProperty_string = GGS_string (node->mKey) ;\n    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                       const char * inErrorMessage,\n                                       const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 838)).stringValue ()) ;
  result.appendString (" & inElement,\n                                       Compiler * inCompiler\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid () && inElement.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->internalAddNode (inKey, inErrorMessage, inElement, inCompiler COMMA_THERE) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark modifier noteNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_noteNode (const GGS_lstring & inKey\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = (nullptr == mSharedGraph)\n      \? nullptr\n      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())\n    ;\n    if (nullptr != node) {\n      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier addEdge\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addEdge (const String & inSourceNodeKey,\n                           const GGS_location & inSourceNodeLocation,\n                           const String & inTargetNodeKey,\n                           const GGS_location & inTargetNodeLocation) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;\n  macroValidPointer (sourceNode) ;\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;\n  macroValidPointer (targetNode) ;\n  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;\n  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;\n  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_addEdge (const GGS_lstring & inSourceNodeKey,\n                                      const GGS_lstring & inTargetNodeKey\n                                      COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),\n                             inSourceNodeKey.mProperty_location,\n                             inTargetNodeKey.mProperty_string.stringValue (),\n                             inTargetNodeKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output graphviz text\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nString SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (void) const {\n  GenericUniqueArray <String> nodeNameArray ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;\n  }\n  return mDirectedGraph.graphvizString (nodeNameArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (UNUSED_LOCATION_ARGS) const {\n  GGS_string result ;\n  if (isValid ()) {\n    result = GGS_string (mSharedGraph->getter_graphviz ()) ;\n  }\n  return result ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output arc list\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::edges (GGS__5B_stringString_5D_ & ioList) const {\n  GenericUniqueArray <GraphEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const GraphEdge edge = edgeArray (i COMMA_HERE) ;\n    const GGS_stringString v = GGS_stringString (\n      mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,\n      mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey\n    ) ;\n    ioList.plusPlusAssignOperation (v COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_stringString_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_edges (LOCATION_ARGS) const {\n  GGS__5B_stringString_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_stringString_5D_::init (nullptr COMMA_THERE) ;\n    mSharedGraph->edges (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeCount\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void countUndefinedNodeCount (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, uint32_t & ioCount) {\n  if (nullptr != inNode) {\n    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;\n    if (! inNode->mIsDefined) {\n      ioCount += 1 ;\n    }\n    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {\n  GGS_u_33__32_ result ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    result = GGS_u_33__32_ (undefinedNodeCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeKeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeKeyList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, GGS__5B_string_5D_ & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      ioResult.plusPlusAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;\n    }\n    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_string_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeKeyList (LOCATION_ARGS) const {\n  GGS__5B_string_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Find circularities\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1046)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1047)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1051)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1065)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                 GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1066)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                 COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no predecessor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1082)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1083)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1087)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1101)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                      GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1102)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                      COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no successor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1118)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1119)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1123)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1137)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                    GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1138)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                    COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Breath First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1154)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1155)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1156)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1157)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1163)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1175)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1189)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1190)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1191)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1192)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                               Compiler * inCompiler\n                                               COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Depth First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1224)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1225)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1226)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1227)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1233)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1245)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1259)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1260)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1261)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1262)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                         Compiler * inCompiler\n                                                         COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeReferenceList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeReferenceList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1295)).stringValue ()) ;
  result.appendString (" & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      GGS_lstring lkey ;\n      lkey.mProperty_string = GGS_string (inNode->mKey) ;\n      for (int32_t i=0 ; i < inNode->mReferenceLocationArray.count () ; i++) {\n        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;\n        ioResult.plusPlusAssignOperation (lkey COMMA_HERE) ;\n      }\n    }\n    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1312)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1313)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1315)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                                Compiler * inCompiler\n                                                COMMA_LOCATION_ARGS) {\n  if (isValid () && inNodeName.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToNode (const String & inNodeName,\n                                     Compiler * inCompiler\n                                     COMMA_LOCATION_ARGS) {\n//--- Find node\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findNode (inNodeName, mRoot) ;\n  if (nullptr == node) {\n    String s (\"graph removeEdgesToNode: node '\") ;\n    s.appendString (inNodeName) ;\n    s.appendCString (\"' does not exist\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const uint32_t nodeIndex = node->mNodeID ;\n    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToDominators\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToDominators (LOCATION_ARGS) {\n  if (isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToDominators (THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToDominators (LOCATION_ARGS) {\n//--- Find start nodes\n  GenericUniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;\n//--- Add a dummy start node for handling case where there several start nodes\n  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;\n//--- Add edges from dummy node to start nodes\n  for (int32_t i=0 ; i<startNodes.count () ; i++) {\n    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;\n  }\n//--- Remove edge to dominator\n  mDirectedGraph.removeEdgesToDominator (THERE) ;\n//--- Remove dummy node\n  mDirectedGraph.removeNode (dummyNodeIndex) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GGS_u_33__32_ index_59236_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    UpEnumerator__5B_graphInsertModifier_5D_ enumerator_59236 (in_INSERT_5F_MODIFIER_5F_LIST) ;
    while (enumerator_59236.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_59236.current_entry (HERE).readProperty_mInsertModifierName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1405)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1406)).stringValue ()) ;
      result.appendString (" inElement,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_59236.current_entry (HERE).readProperty_mInsertErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1409)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, inElement, inCompiler COMMA_THERE) ;\n}\n") ;
      enumerator_59236.gotoNextObject () ;
      index_59236_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1417)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1418)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1419)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1420)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1423)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1424)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1426)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1427)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1432)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1433)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1434)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1435)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1438)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1439)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1441)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1442)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1456)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1457)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1459)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1461)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1466)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1467)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1469)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1471)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1476)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1477)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1479)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1481)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1486)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1497)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1498)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1507)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1507)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-graph.cpp.galgasTemplate", 1511)).stringValue ()) ;
  result.appendString (" result ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
// @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeDeclarationAST::objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const {
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

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::
init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                            const GGS_lstring & in_optionalTypeName,
                                                                            const GGS_lstring & in_unwrappedTypeName,
                                                                            const GGS_bool & in_isUsefull,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, inCompiler) ;
  const GGS_optionalTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::
optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                                                       const GGS_lstring & in_optionalTypeName,
                                                                                                       const GGS_lstring & in_unwrappedTypeName,
                                                                                                       const GGS_bool & in_isUsefull,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (const cPtr_optionalTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_optionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_optionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_unwrappedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_unwrappedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_optionalTypeName,
                                                                  const GGS_lstring & in_unwrappedTypeName,
                                                                  const GGS_bool & in_isUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionalTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

void cPtr_optionalTypeDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_optionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionalTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeDeclarationAST (mProperty_isPredefined, mProperty_optionalTypeName, mProperty_unwrappedTypeName, mProperty_isUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_optionalTypeName.printNonNullClassInstanceProperties ("optionalTypeName") ;
    mProperty_unwrappedTypeName.printNonNullClassInstanceProperties ("unwrappedTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionalTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ("optionalTypeDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeForGeneration::objectCompare (const GGS_optionalTypeForGeneration & inOperand) const {
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

GGS_optionalTypeForGeneration::GGS_optionalTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionalTypeForGeneration GGS_optionalTypeForGeneration::
init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                 const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                 const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                 const GGS_unifiedTypeMapEntry & in_weakType,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->optionalTypeForGeneration_init_21_infoMessage_21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_unwrappedType, in_weakType, inCompiler) ;
  const GGS_optionalTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::
optionalTypeForGeneration_init_21_infoMessage_21__21__21_ (const GGS_string & in_infoMessage,
                                                           const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                           const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                           const GGS_unifiedTypeMapEntry & in_weakType,
                                                           Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_unwrappedType = in_unwrappedType ;
  mProperty_weakType = in_weakType ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration::GGS_optionalTypeForGeneration (const cPtr_optionalTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_optionalTypeForGeneration::readProperty_unwrappedType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_optionalTypeForGeneration * p = (cPtr_optionalTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeForGeneration) ;
    return p->mProperty_unwrappedType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_optionalTypeForGeneration::readProperty_weakType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_optionalTypeForGeneration * p = (cPtr_optionalTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeForGeneration) ;
    return p->mProperty_weakType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeForGeneration::cPtr_optionalTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_unwrappedType (),
mProperty_weakType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeForGeneration::cPtr_optionalTypeForGeneration (const GGS_string & in_infoMessage,
                                                                const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                const GGS_unifiedTypeMapEntry & in_weakType,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_unwrappedType (),
mProperty_weakType () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_unwrappedType = in_unwrappedType ;
  mProperty_weakType = in_weakType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionalTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration ;
}

void cPtr_optionalTypeForGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_weakType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionalTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_unwrappedType, mProperty_weakType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_unwrappedType.printNonNullClassInstanceProperties ("unwrappedType") ;
    mProperty_weakType.printNonNullClassInstanceProperties ("weakType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionalTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration ("optionalTypeForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'optionalTypeGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_optionalTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_optionalTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_optionalTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_optionalTypeGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_optionalTypeGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @optionalTypeGenerationTemplate  optionalTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionalTypeGenerationTemplate::class_func_optionalTypeHeader_31_ (const GGS_string & in_TYPE_5F_NAME,
                                                                                  const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                  const GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS-optional.h1.galgasTemplate", 2)).add_operation (GGS_string (" optional"), inCompiler COMMA_SOURCE_FILE ("GALGAS-optional.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mValue ;\n  private: OptionalState mState ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor from unwrapped type\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Constructor from weak type\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::notEqual, in_WEAK_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_WEAK_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- nil initializer\n  public: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) ;\n\n  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }\n\n  public: bool isValuated (void) const ;\n  public: inline GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const {\n    return mValue ;\n  }\n\n//--------------------------------- GALGAS read only properties\n  public: inline GGS_bool readProperty_isNil (void) const {\n    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;\n  }\n\n  public: inline GGS_bool readProperty_isSome (void) const {\n    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;\n  }\n\n  \n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @optionalTypeGenerationTemplate  optionalTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionalTypeGenerationTemplate::class_func_optionalTypeSpecificImplementation (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                              const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                              const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                              const GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Optional @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-optional.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (inSource),\nmState (OptionalState::valuated) {\n}\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::notEqual, in_WEAK_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GGS_") ;
    result.appendString (in_WEAK_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n  if (inSource.isValid ()) {\n    const AbstractStrongPtrClass * p = inSource.ptr () ;\n    if (p == nullptr) {\n      mState = OptionalState::isNil ;\n    }else{\n      mValue = * ((GGS_") ;
    result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) p) ;\n      mState = OptionalState::valuated ;\n    }\n  }\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil (void) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mState = OptionalState::isNil ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  bool result = false ;\n  switch (mState) {\n  case OptionalState::invalid :\n    break ;\n  case OptionalState::isNil :\n    result = true ;\n    break ;\n  case OptionalState::valuated :\n    result = mValue.isValid () ;\n    break ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValuated (void) const {\n  return (mState == OptionalState::valuated) && mValue.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mState = OptionalState::invalid ;\n  mValue = GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" () ;\n}\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mState < inOperand.mState) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mState > inOperand.mState) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else if (mState == OptionalState::valuated) {\n      result = mValue.objectCompare (inOperand.mValue) ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<optional @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\": \") ;\n  switch (mState) {\n  case OptionalState::invalid :\n    ioString.appendCString (\"invalid\") ;\n    break ;\n  case OptionalState::isNil :\n    ioString.appendCString (\"nil\") ;\n    break ;\n  case OptionalState::valuated :\n    mValue.description (ioString, inIndentation) ;\n    break ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_insertSetterAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_::GGS__5B_insertSetterAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_::GGS__5B_insertSetterAST_5D_ (const GGS__5B_insertSetterAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ & GGS__5B_insertSetterAST_5D_::operator = (const GGS__5B_insertSetterAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS__5B_insertSetterAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_insertSetterAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::plusPlusAssignOperation (const GGS_insertSetterAST & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_insertSetterAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS__5B_insertSetterAST_5D_::add_operation (const GGS__5B_insertSetterAST_5D_ & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_insertSetterAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::description (String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@insertSetterAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::plusAssignOperation (const GGS__5B_insertSetterAST_5D_ inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_append (const GGS_insertSetterAST inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_insert (const GGS_insertSetterAST inValue,
                                                 const GGS_u_33__32_ inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_remove (GGS_insertSetterAST & outValue,
                                                 const GGS_u_33__32_ inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_removeFirst (GGS_insertSetterAST & outValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::setter_removeLast (GGS_insertSetterAST & outValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS__5B_insertSetterAST_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_insertSetterAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_insertSetterAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_insertSetterAST_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS__5B_insertSetterAST_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                         const GGS_u_33__32_ & inLength,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_insertSetterAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_insertSetterAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_insertSetterAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST GGS__5B_insertSetterAST_5D_::getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_insertSetterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST GGS__5B_insertSetterAST_5D_::getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_insertSetterAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST GGS__5B_insertSetterAST_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_insertSetterAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_insertSetterAST_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                       const GGS_insertSetterAST inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_insertSetterAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_insertSetterAST_5D_::DownEnumerator__5B_insertSetterAST_5D_ (const GGS__5B_insertSetterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST DownEnumerator__5B_insertSetterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST DownEnumerator__5B_insertSetterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_insertSetterAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_insertSetterAST_5D_::UpEnumerator__5B_insertSetterAST_5D_ (const GGS__5B_insertSetterAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST UpEnumerator__5B_insertSetterAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST UpEnumerator__5B_insertSetterAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[insertSetterAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_insertSetterAST_5D_ ("[insertSetterAST]",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_insertSetterAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_insertSetterAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST::GGS_insertSetterAST (void) :
mProperty_mInsertMethodName (),
mProperty_mErrorMessage (),
mProperty_mShadowErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST::GGS_insertSetterAST (const GGS_insertSetterAST & inSource) :
mProperty_mInsertMethodName (inSource.mProperty_mInsertMethodName),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage),
mProperty_mShadowErrorMessage (inSource.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST & GGS_insertSetterAST::operator = (const GGS_insertSetterAST & inSource) {
  mProperty_mInsertMethodName = inSource.mProperty_mInsertMethodName ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  mProperty_mShadowErrorMessage = inSource.mProperty_mShadowErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_insertSetterAST GGS_insertSetterAST::init_21__21__21_ (const GGS_lstring & in_mInsertMethodName,
                                                           const GGS_lstring & in_mErrorMessage,
                                                           const GGS_lstring & in_mShadowErrorMessage,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertSetterAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertMethodName = in_mInsertMethodName ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  result.mProperty_mShadowErrorMessage = in_mShadowErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterAST::GGS_insertSetterAST (const GGS_lstring & inOperand0,
                                          const GGS_lstring & inOperand1,
                                          const GGS_lstring & inOperand2) :
mProperty_mInsertMethodName (inOperand0),
mProperty_mErrorMessage (inOperand1),
mProperty_mShadowErrorMessage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertSetterAST::isValid (void) const {
  return mProperty_mInsertMethodName.isValid () && mProperty_mErrorMessage.isValid () && mProperty_mShadowErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterAST::drop (void) {
  mProperty_mInsertMethodName.drop () ;
  mProperty_mErrorMessage.drop () ;
  mProperty_mShadowErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertSetterAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertMethodName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mShadowErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @insertSetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertSetterAST ("insertSetterAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertSetterAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_mapAccessorAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_::GGS__5B_mapAccessorAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_::GGS__5B_mapAccessorAST_5D_ (const GGS__5B_mapAccessorAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ & GGS__5B_mapAccessorAST_5D_::operator = (const GGS__5B_mapAccessorAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS__5B_mapAccessorAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_mapAccessorAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::plusPlusAssignOperation (const GGS_mapAccessorAST & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_mapAccessorAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS__5B_mapAccessorAST_5D_::add_operation (const GGS__5B_mapAccessorAST_5D_ & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_mapAccessorAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::description (String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@mapAccessorAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::plusAssignOperation (const GGS__5B_mapAccessorAST_5D_ inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_append (const GGS_mapAccessorAST inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_insert (const GGS_mapAccessorAST inValue,
                                                const GGS_u_33__32_ inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_remove (GGS_mapAccessorAST & outValue,
                                                const GGS_u_33__32_ inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_removeFirst (GGS_mapAccessorAST & outValue,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::setter_removeLast (GGS_mapAccessorAST & outValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS__5B_mapAccessorAST_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_mapAccessorAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS__5B_mapAccessorAST_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                       const GGS_u_33__32_ & inLength,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_mapAccessorAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST GGS__5B_mapAccessorAST_5D_::getter_first (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST GGS__5B_mapAccessorAST_5D_::getter_last (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST GGS__5B_mapAccessorAST_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_mapAccessorAST_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                      const GGS_mapAccessorAST inValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_mapAccessorAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_mapAccessorAST_5D_::DownEnumerator__5B_mapAccessorAST_5D_ (const GGS__5B_mapAccessorAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST DownEnumerator__5B_mapAccessorAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST DownEnumerator__5B_mapAccessorAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_mapAccessorAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_mapAccessorAST_5D_::UpEnumerator__5B_mapAccessorAST_5D_ (const GGS__5B_mapAccessorAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST UpEnumerator__5B_mapAccessorAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST UpEnumerator__5B_mapAccessorAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[mapAccessorAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_mapAccessorAST_5D_ ("[mapAccessorAST]",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_mapAccessorAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_mapAccessorAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST::GGS_mapAccessorAST (void) :
mProperty_mName (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST::GGS_mapAccessorAST (const GGS_mapAccessorAST & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mErrorMessage (inSource.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST & GGS_mapAccessorAST::operator = (const GGS_mapAccessorAST & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mErrorMessage = inSource.mProperty_mErrorMessage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mapAccessorAST GGS_mapAccessorAST::init_21__21_ (const GGS_lstring & in_mName,
                                                     const GGS_lstring & in_mErrorMessage,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mapAccessorAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mErrorMessage = in_mErrorMessage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorAST::GGS_mapAccessorAST (const GGS_lstring & inOperand0,
                                        const GGS_lstring & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mErrorMessage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_mapAccessorAST::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mErrorMessage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorAST::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mErrorMessage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mapAccessorAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mapAccessorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapAccessorAST ("mapAccessorAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapAccessorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAccessorAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_location_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_::GGS__5B_location_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_::GGS__5B_location_5D_ (const GGS__5B_location_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ & GGS__5B_location_5D_::operator = (const GGS__5B_location_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ GGS__5B_location_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_location_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::plusPlusAssignOperation (const GGS_location & inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_location_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ GGS__5B_location_5D_::add_operation (const GGS__5B_location_5D_ & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_location_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@location], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::plusAssignOperation (const GGS__5B_location_5D_ inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_append (const GGS_location inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_removeAll (Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_insert (const GGS_location inValue,
                                          const GGS_u_33__32_ inInsertionIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_remove (GGS_location & outValue,
                                          const GGS_u_33__32_ inRemoveIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_removeFirst (GGS_location & outValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::setter_removeLast (GGS_location & outValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ GGS__5B_location_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_location_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_location_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_location_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ GGS__5B_location_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                           const GGS_u_33__32_ & inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_location_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_location_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_location_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS__5B_location_5D_::getter_first (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS__5B_location_5D_::getter_last (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS__5B_location_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_location_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                const GGS_location inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_location_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_location_5D_::DownEnumerator__5B_location_5D_ (const GGS__5B_location_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator__5B_location_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator__5B_location_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_location_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_location_5D_::UpEnumerator__5B_location_5D_ (const GGS__5B_location_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator__5B_location_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator__5B_location_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[location] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_location_5D_ ("[location]",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_location_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_location_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @insertMethodMap
//--------------------------------------------------------------------------------------------------

#include "GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::~ GGS_insertMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (const GGS_insertMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap & GGS_insertMethodMap::operator = (const GGS_insertMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_contains (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_u_33__32_ & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_insertMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_insertMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_insertMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_insertMethodMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::performInsert (const GGS_insertMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_insertMethodMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>
GGS_insertMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_insertMethodMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>>
GGS_insertMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_insertMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_ GGS_insertMethodMap::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_insertMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_insertMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::class_func_mapWithMapToOverride (const GGS_insertMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_insertMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_insertMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' insert mutating proc is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_insertMethodMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> & inArray,
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

void GGS_insertMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @insertMethodMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_insertMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_insertMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_insertMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertMethodMap::DownEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element DownEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertMethodMap::UpEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element UpEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @insertMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @searchMethodMap
//--------------------------------------------------------------------------------------------------

#include "GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::~ GGS_searchMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (const GGS_searchMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap & GGS_searchMethodMap::operator = (const GGS_searchMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_contains (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_u_33__32_ & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_searchMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_searchMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_searchMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_searchMethodMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_searchMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::performInsert (const GGS_searchMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_searchMethodMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>
GGS_searchMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_searchMethodMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>>
GGS_searchMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_searchMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_ GGS_searchMethodMap::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_searchMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_searchMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_searchMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::class_func_mapWithMapToOverride (const GGS_searchMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_searchMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_searchMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' search proc is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_searchMethodMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> & inArray,
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

void GGS_searchMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @searchMethodMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_searchMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_searchMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_searchMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_searchMethodMap::DownEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element DownEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_searchMethodMap::UpEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element UpEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @searchMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_optionalMethodSignatureElement_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_::GGS__5B_optionalMethodSignatureElement_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_::GGS__5B_optionalMethodSignatureElement_5D_ (const GGS__5B_optionalMethodSignatureElement_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_ & GGS__5B_optionalMethodSignatureElement_5D_::operator = (const GGS__5B_optionalMethodSignatureElement_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_ GGS__5B_optionalMethodSignatureElement_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_optionalMethodSignatureElement_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::plusPlusAssignOperation (const GGS_optionalMethodSignatureElement & inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS__5B_optionalMethodSignatureElement_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_ GGS__5B_optionalMethodSignatureElement_5D_::add_operation (const GGS__5B_optionalMethodSignatureElement_5D_ & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_optionalMethodSignatureElement_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@optionalMethodSignatureElement], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::plusAssignOperation (const GGS__5B_optionalMethodSignatureElement_5D_ inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_append (const GGS_optionalMethodSignatureElement inValue,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_insert (const GGS_optionalMethodSignatureElement inValue,
                                                                const GGS_u_33__32_ inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_remove (GGS_optionalMethodSignatureElement & outValue,
                                                                const GGS_u_33__32_ inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_removeFirst (GGS_optionalMethodSignatureElement & outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::setter_removeLast (GGS_optionalMethodSignatureElement & outValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_ GGS__5B_optionalMethodSignatureElement_5D_::getter_removingFirst (const GGS_u_33__32_ & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_optionalMethodSignatureElement_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex < int32_t (count ())) {
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }else if (startIndex == int32_t (count ())) {
      result = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_THERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_optionalMethodSignatureElement_5D_ GGS__5B_optionalMethodSignatureElement_5D_::getter_sublist (const GGS_u_33__32_ & inStartIndex,
                                                                                                       const GGS_u_33__32_ & inLength,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_optionalMethodSignatureElement_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement GGS__5B_optionalMethodSignatureElement_5D_::getter_first (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignatureElement result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement GGS__5B_optionalMethodSignatureElement_5D_::getter_last (Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignatureElement result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement GGS__5B_optionalMethodSignatureElement_5D_::readSubscript__3F_ (const GGS_u_33__32_ & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_optionalMethodSignatureElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage = "read subscript call with index " ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_optionalMethodSignatureElement_5D_::writeSubscript__3F_ (const GGS_u_33__32_ inIndex,
                                                                      const GGS_optionalMethodSignatureElement inValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "write subscript call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_optionalMethodSignatureElement_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_optionalMethodSignatureElement_5D_::DownEnumerator__5B_optionalMethodSignatureElement_5D_ (const GGS__5B_optionalMethodSignatureElement_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement DownEnumerator__5B_optionalMethodSignatureElement_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement DownEnumerator__5B_optionalMethodSignatureElement_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_optionalMethodSignatureElement_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_optionalMethodSignatureElement_5D_::UpEnumerator__5B_optionalMethodSignatureElement_5D_ (const GGS__5B_optionalMethodSignatureElement_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement UpEnumerator__5B_optionalMethodSignatureElement_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement UpEnumerator__5B_optionalMethodSignatureElement_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[optionalMethodSignatureElement] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_optionalMethodSignatureElement_5D_ ("[optionalMethodSignatureElement]",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_optionalMethodSignatureElement_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_optionalMethodSignatureElement_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (void) :
mProperty_mInputArgument (),
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (const GGS_optionalMethodSignatureElement & inSource) :
mProperty_mInputArgument (inSource.mProperty_mInputArgument),
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement & GGS_optionalMethodSignatureElement::operator = (const GGS_optionalMethodSignatureElement & inSource) {
  mProperty_mInputArgument = inSource.mProperty_mInputArgument ;
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalMethodSignatureElement GGS_optionalMethodSignatureElement::init_21__21__21__21_ (const GGS_bool & in_mInputArgument,
                                                                                             const GGS_lstring & in_mFormalSelector,
                                                                                             const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                             const GGS_string & in_mFormalArgumentName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalMethodSignatureElement result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputArgument = in_mInputArgument ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (const GGS_bool & inOperand0,
                                                                        const GGS_lstring & inOperand1,
                                                                        const GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const GGS_string & inOperand3) :
mProperty_mInputArgument (inOperand0),
mProperty_mFormalSelector (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalMethodSignatureElement::isValid (void) const {
  return mProperty_mInputArgument.isValid () && mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::drop (void) {
  mProperty_mInputArgument.drop () ;
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalMethodSignatureElement:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignatureElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignatureElement ("optionalMethodSignatureElement",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalMethodSignatureElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignatureElement ;
}

//--------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST::objectCompare (const GGS_mapDeclarationAST & inOperand) const {
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

GGS_mapDeclarationAST::GGS_mapDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mMapTypeName,
                                                                   const GGS__5B_propertyInCollectionAST_5D_ & in_mPropertyList,
                                                                   const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                                   const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                                   const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                                   const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                                   const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                                   const GGS__5B_location_5D_ & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GGS_bool & in_equatable,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubcriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GGS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lstring & in_mMapTypeName,
                                                                                     const GGS__5B_propertyInCollectionAST_5D_ & in_mPropertyList,
                                                                                     const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                                                     const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                                                     const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                                                     const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                                                     const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                                                     const GGS__5B_location_5D_ & in_mInsertOrReplaceDeclarationListAST,
                                                                                     const GGS_bool & in_equatable,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubcriptList = in_mSearchSubcriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST::GGS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_propertyInCollectionAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS_mapDeclarationAST::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_insertSetterAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapDeclarationAST::readProperty_mSearchSubcriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchSubcriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapDeclarationAST::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapDeclarationAST::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_location_5D_ GGS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_location_5D_ () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubcriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                                const GGS_lstring & in_mMapTypeName,
                                                const GGS__5B_propertyInCollectionAST_5D_ & in_mPropertyList,
                                                const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                const GGS__5B_location_5D_ & in_mInsertOrReplaceDeclarationListAST,
                                                const GGS_bool & in_equatable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubcriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubcriptList = in_mSearchSubcriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@mapDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubcriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubcriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubcriptList.printNonNullClassInstanceProperties ("mSearchSubcriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mInsertOrReplaceDeclarationListAST.printNonNullClassInstanceProperties ("mInsertOrReplaceDeclarationListAST") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapTypeForGeneration::objectCompare (const GGS_mapTypeForGeneration & inOperand) const {
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

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::
init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                 const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                 const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                 const GGS_lstring & in_mMapTypeName,
                                                                 const GGS__5B_typedProperty_5D_ & in_mTypedAttributeList,
                                                                 const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                                 const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                                 const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                                 const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                                 const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                                 const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                 const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubcriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                      const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                                      const GGS_lstring & in_mMapTypeName,
                                                                                      const GGS__5B_typedProperty_5D_ & in_mTypedAttributeList,
                                                                                      const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                                                      const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                                                      const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                                                      const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                                                      const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubcriptList = in_mSearchSubcriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_typedProperty_5D_ GGS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_typedProperty_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_insertSetterAST_5D_ GGS_mapTypeForGeneration::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_insertSetterAST_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapTypeForGeneration::readProperty_mSearchSubcriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchSubcriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapTypeForGeneration::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_mapAccessorAST_5D_ GGS_mapTypeForGeneration::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_mapAccessorAST_5D_ () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubcriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GGS_string & in_infoMessage,
                                                      const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GGS_lstring & in_mMapTypeName,
                                                      const GGS__5B_typedProperty_5D_ & in_mTypedAttributeList,
                                                      const GGS__5B_insertSetterAST_5D_ & in_mInsertSetterList,
                                                      const GGS__5B_mapAccessorAST_5D_ & in_mSearchMethodList,
                                                      const GGS__5B_mapAccessorAST_5D_ & in_mSearchSubcriptList,
                                                      const GGS__5B_mapAccessorAST_5D_ & in_mRemoveSetterList,
                                                      const GGS__5B_mapAccessorAST_5D_ & in_mReplaceSetterList,
                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubcriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubcriptList = in_mSearchSubcriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@mapTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubcriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubcriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubcriptList.printNonNullClassInstanceProperties ("mSearchSubcriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mHasInsertOrReplaceModifier.printNonNullClassInstanceProperties ("mHasInsertOrReplaceModifier") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//Filewrapper 'mapGenerationTemplate'
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const RegularFileWrapper * gWrapperAllFiles_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const DirectoryWrapper * gWrapperAllDirectories_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const DirectoryWrapper gWrapperDirectory_0_mapGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------

GGS_filewrapper GGS_mapGenerationTemplate::class_func_contents (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapper (gWrapperDirectory_0_mapGenerationTemplate) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @mapGenerationTemplate  mapTypeHeader1
//--------------------------------------------------------------------------------------------------

GGS_string GGS_mapGenerationTemplate::class_func_mapTypeHeader_31_ (const GGS_string & /* in_TYPE_5F_NAME */,
                                                                    const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                    const GGS__5B_typedProperty_5D_ & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                    const GGS__5B_mapAccessorAST_5D_ & /* in_SEARCH_5F_METHOD_5F_LIST */,
                                                                    const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                    const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                    const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                    const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 2)).add_operation (GGS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ntemplate <typename INFO> class GenericMapRoot ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) ;\n\n  public: ~ DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_u_33__32_ index_795_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_795 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_795.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_795.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_795.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n\n") ;
      enumerator_795.gotoNextObject () ;
      index_795_.increment () ;
    }
  }
  const GalgasBool test_0 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 23)).operator_not (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 23)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap)  ;\n\n  public: ~ UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n") ;
  GGS_u_33__32_ index_2046_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_2046 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2046.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2046.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2046.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_2046.gotoNextObject () ;
      index_2046_.increment () ;
    }
  }
  const GalgasBool test_1 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 51)).operator_not (SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 51)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS-map.h1.galgasTemplate", 52)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n\n//--- Private property\n  private: OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mSharedRoot ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Build\n  protected: void build (LOCATION_ARGS) ;\n\n//--- isValid\n  public: bool isValid (void) const override ;\n\n//--- Drop\n  public: void drop (void) override ;\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Compare\n  public: ComparisonResult objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--- performInsert\n  protected: void performInsert (const class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement,\n                                 const char * inInsertErrorMessage,\n                                 const char * inShadowErrorMessage,\n                                 Compiler * inCompiler\n                                 COMMA_LOCATION_ARGS) ;\n\n//--- infoForKey\n  protected: const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> infoForKey (const String & inKey) const ;\n\n//--- Count\n  public: int32_t count (void) const ;\n\n//--- sortedInfoArray\n  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> sortedInfoArray (void) const ;\n\n//--- findNearestKey\n  protected: void findNearestKey (const String & inKey,\n                                  GenericUniqueArray <String> & outNearestKeyArray) const ;\n\n") ;
  return GGS_string (result) ;
}
//--------------------------------------------------------------------------------------------------
//Filewrapper template @mapGenerationTemplate  mapTypeSpecificImplementation
//--------------------------------------------------------------------------------------------------

GGS_string GGS_mapGenerationTemplate::class_func_mapTypeSpecificImplementation (const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const GGS__5B_typedProperty_5D_ & in_PROPERTY_5F_LIST,
                                                                                const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                const GGS__5B_insertSetterAST_5D_ & in_INSERT_5F_SETTER_5F_LIST,
                                                                                const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                const GGS__5B_mapAccessorAST_5D_ & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                const GGS__5B_mapAccessorAST_5D_ & in_SEARCH_5F_SUBCRIPT_5F_LIST,
                                                                                const GGS__5B_mapAccessorAST_5D_ & in_REMOVE_5F_SETTER_5F_LIST,
                                                                                const GGS__5B_mapAccessorAST_5D_ & in_REPLACE_5F_SETTER_5F_LIST,
                                                                                const GGS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Map type @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#include \"GenericMapRoot.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmSharedRoot () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nmSharedRoot (inSource.mSharedRoot) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  mSharedRoot = inSource.mSharedRoot ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKeyAtLevel (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_u_33__32_ & inLevel\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_u_33__32_ result ;\n  if (isValid ()) {\n    result = GGS_u_33__32_ (uint32_t (mSharedRoot->count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_u_33__32_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_levels (UNUSED_LOCATION_ARGS) const {\n  GGS_u_33__32_ result ;\n  if (isValid ()) {\n    result = GGS_u_33__32_ (mSharedRoot->levels ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_locationForKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> info = infoForKey (inKey.stringValue ()) ;\n    if (info.isNil ()) {\n      String message = \"'locationForKey' map reader run-time error: the '\" ;\n      message.appendString (inKey.stringValue ()) ;\n      message.appendCString (\"' does not exist in map\") ;\n      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;\n    }else{\n      result = info->mProperty_lkey.mProperty_location ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_lstring_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keyList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS__5B_lstring_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;\n    mSharedRoot->populateKeyList (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mSharedRoot.isNotNil () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void)  {\n  mSharedRoot.setToNil () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::build (LOCATION_ARGS) {\n  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>::make (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::performInsert (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement,\n                                 const char * inInsertErrorMessage,\n                                 const char * inShadowErrorMessage,\n                                 Compiler * inCompiler\n                                 COMMA_LOCATION_ARGS) {\n  if (isValid () && inElement.mProperty_lkey.isValid ()) {\n    OptionalSharedRef <GenericMapNode <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> existingNode ;\n    const bool allowReplacing = false ;\n    mSharedRoot.insulate (THERE) ;\n    mSharedRoot->insertOrReplaceInfo (\n      inElement,\n      allowReplacing,\n      existingNode\n      COMMA_THERE\n    ) ;\n    const GGS_lstring lkey = inElement.mProperty_lkey ;\n    if (existingNode.isNotNil ()) {\n      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;\n      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;\n    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {\n      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;\n      if (existingInfo.isNotNil ()) {\n        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;\n        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;\n      }\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nconst SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::infoForKey (const String & inKey) const {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->infoForKey (inKey) ;\n  }else{\n    return SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::count (void) const  {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->count () ;\n  }else{\n    return 0 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::sortedInfoArray (void) const {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->sortedInfoArray () ;\n  }else{\n    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_stringset GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keySet (Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) const {\n  GGS_stringset result ;\n  if (isValid ()) {\n    result = GGS_stringset::init (inCompiler COMMA_THERE) ;\n    mSharedRoot->populateKeySet (result, inCompiler) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::findNearestKey (const String & inKey,\n                                  GenericUniqueArray <String> & outNearestKeyArray) const {\n  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (const class GGS_string & inKey,\n                      Compiler * /* inCompiler */\n                      COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> info = infoForKey (inKey.stringValue ()) ;\n    if (info.isNil ()) {\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }else{\n      GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element ;\n      element.mProperty_lkey = info->mProperty_lkey ;\n") ;
  GGS_u_33__32_ index_9007_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_9007 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9007.hasCurrentObject ()) {
      result.appendString ("      element.mProperty_") ;
      result.appendString (enumerator_9007.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" = info->mProperty_") ;
      result.appendString (enumerator_9007.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9007.gotoNextObject () ;
      index_9007_.increment () ;
    }
  }
  result.appendString ("      result = element ;\n    }\n  }\n  return result ;\n}\n\n") ;
  GGS_u_33__32_ index_9252_ (0) ;
  if (in_SEARCH_5F_SUBCRIPT_5F_LIST.isValid ()) {
    UpEnumerator__5B_mapAccessorAST_5D_ enumerator_9252 (in_SEARCH_5F_SUBCRIPT_5F_LIST) ;
    while (enumerator_9252.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readSubscript__3F_") ;
      result.appendString (enumerator_9252.current_entry (HERE).readProperty_mName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 239)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_lstring & inLKey,\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inLKey.isValid ()) {\n    const String key = inLKey.mProperty_string.stringValue () ;\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info = infoForKey (key) ;\n    if (info.isNotNil ()) {\n      result = info.value () ;\n    }else{\n      const char * kErrorMessage = ") ;
      result.appendString (enumerator_9252.current_entry (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.appendString (" ;\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
      enumerator_9252.gotoNextObject () ;
      index_9252_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_mapWithMapToOverride (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMapToOverride\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (inMapToOverride.isValid ()) {\n    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_overriddenMap (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result.mSharedRoot = mSharedRoot->overriddenRoot () ;\n    if (result.mSharedRoot.isNil ()) {\n      inCompiler->onTheFlySemanticError (\"getter 'overriddenMap': no overriden map\" COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  GGS_u_33__32_ index_11293_ (0) ;
  if (in_INSERT_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator__5B_insertSetterAST_5D_ enumerator_11293 (in_INSERT_5F_SETTER_5F_LIST) ;
    while (enumerator_11293.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_11293.current_entry (HERE).readProperty_mInsertMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 288)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_u_33__32_ index_11550_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_11550 (in_PROPERTY_5F_LIST) ;
        while (enumerator_11550.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_11550.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 290)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_11550_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 290)).stringValue ()) ;
          enumerator_11550.gotoNextObject () ;
          index_11550_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n  ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" element (inLKey") ;
      GGS_u_33__32_ index_11792_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_11792 (in_PROPERTY_5F_LIST) ;
        while (enumerator_11792.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_11792_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 295)).stringValue ()) ;
          enumerator_11792.gotoNextObject () ;
          index_11792_IDX.increment () ;
        }
      }
      result.appendString (") ;\n  const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_11293.current_entry (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 296)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_11293.current_entry (HERE).readProperty_mShadowErrorMessage ().readProperty_string ().getter_count (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 298)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  const char * kShadowErrorMessage = nullptr ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  const char * kShadowErrorMessage = ") ;
        result.appendString (enumerator_11293.current_entry (HERE).readProperty_mShadowErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 301)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;\n}\n\n") ;
      enumerator_11293.gotoNextObject () ;
      index_11293_.increment () ;
    }
  }
  GGS_u_33__32_ index_12292_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator__5B_mapAccessorAST_5D_ enumerator_12292 (in_SEARCH_5F_METHOD_5F_LIST) ;
    while (enumerator_12292.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_12292.current_entry (HERE).readProperty_mName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 311)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_u_33__32_ index_12543_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_12543 (in_PROPERTY_5F_LIST) ;
        while (enumerator_12543.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_12543.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 313)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_12543_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 313)).stringValue ()) ;
          enumerator_12543.gotoNextObject () ;
          index_12543_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const String key = inLKey.mProperty_string.stringValue () ;\n    info = infoForKey (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      const char * kSearchErrorMessage = ") ;
      result.appendString (enumerator_12292.current_entry (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_u_33__32_ index_13328_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_13328 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13328.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13328_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 330)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_13328.gotoNextObject () ;
          index_13328_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_u_33__32_ index_13435_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_13435 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13435.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13435_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 334)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_13435.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 334)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13435.gotoNextObject () ;
          index_13435_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_12292.gotoNextObject () ;
      index_12292_.increment () ;
    }
  }
  GGS_u_33__32_ index_13597_ (0) ;
  if (in_REMOVE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator__5B_mapAccessorAST_5D_ enumerator_13597 (in_REMOVE_5F_SETTER_5F_LIST) ;
    while (enumerator_13597.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_13597.current_entry (HERE).readProperty_mName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 343)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_u_33__32_ index_13853_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_13853 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13853.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_13853.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 345)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_13853_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 345)).stringValue ()) ;
          enumerator_13853.gotoNextObject () ;
          index_13853_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_13597.current_entry (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 351)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inLKey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (THERE) ;\n    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_u_33__32_ index_14698_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_14698 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14698.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_14698_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 363)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_14698.gotoNextObject () ;
          index_14698_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_u_33__32_ index_14805_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator__5B_typedProperty_5D_ enumerator_14805 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14805.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_14805_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 367)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_14805.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 367)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14805.gotoNextObject () ;
          index_14805_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_13597.gotoNextObject () ;
      index_13597_.increment () ;
    }
  }
  GGS_u_33__32_ index_14969_ (0) ;
  if (in_REPLACE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator__5B_mapAccessorAST_5D_ enumerator_14969 (in_REPLACE_5F_SETTER_5F_LIST) ;
    while (enumerator_14969.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_14969.current_entry (HERE).readProperty_mName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 378)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inElement,\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inElement.isValid ()) {\n    const char * kReplaceErrorMessage = ") ;
      result.appendString (enumerator_14969.current_entry (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (\n        inElement.mProperty_lkey,\n        nearestKeyArray,\n        kReplaceErrorMessage\n        COMMA_THERE\n      ) ;\n    }else{\n      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">::make (inElement COMMA_THERE) ;\n    }\n  }\n}\n") ;
      enumerator_14969.gotoNextObject () ;
      index_14969_.increment () ;
    }
  }
  const GalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("GGS_lstring inLKey") ;
    GGS_u_33__32_ index_16352_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_16352 (in_PROPERTY_5F_LIST) ;
      while (enumerator_16352.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_16352.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 407)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_16352_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 407)).stringValue ()) ;
        enumerator_16352.gotoNextObject () ;
        index_16352_IDX.increment () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" element (inLKey") ;
    GGS_u_33__32_ index_16569_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_16569 (in_PROPERTY_5F_LIST) ;
      while (enumerator_16569.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_16569_IDX.getter_string (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 411)).stringValue ()) ;
        enumerator_16569.gotoNextObject () ;
        index_16569_IDX.increment () ;
      }
    }
    result.appendString (") ;\n  OptionalSharedRef <GenericMapNode <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> unusedExistingNode ;\n  const bool allowReplacing = true ;\n  mSharedRoot.insulate (THERE) ;\n  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_u_33__32_ index_16912_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_16912 (in_PROPERTY_5F_LIST) ;
    while (enumerator_16912.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_16912.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 424)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_16912.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 424)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_string & inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_16912.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 427)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info = infoForKey (key) ;\n    if (info.isNil ()) {\n      String message = \"cannot read property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = info->mProperty_") ;
      result.appendString (enumerator_16912.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 437)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_16912.gotoNextObject () ;
      index_16912_IDX.increment () ;
    }
  }
  GGS_u_33__32_ index_17917_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_17917 (in_PROPERTY_5F_LIST) ;
    while (enumerator_17917.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_17917.current_entry (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 447)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 447)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17917.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 447)).stringValue ()) ;
      result.appendString (" inValue,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_string inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      String message = \"cannot write property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      node->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_17917.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 461)).stringValue ()) ;
      result.appendString (" = inValue ;\n    }\n  }\n}\n") ;
      enumerator_17917.gotoNextObject () ;
      index_17917_IDX.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic void GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> & inArray,\n                                                        String & ioString,\n                                                        const int32_t inIndentation) {\n  const int32_t n = inArray.count () ;\n  ioString.appendString (\" (\") ;\n  ioString.appendSigned (n) ;\n  ioString.appendString (\" object\") ;\n  if (n > 1) {\n    ioString.appendString (\"s\") ;\n  }\n  ioString.appendString (\"):\") ;\n  for (int32_t i = 0 ; i < n ; i++) {\n    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation) ;\n    ioString.appendString (\"|-at \") ;\n    ioString.appendSigned (i) ;\n    ioString.appendString (\": key '\") ;\n    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;\n    ioString.appendString (\"'\") ;\n") ;
  GGS_u_33__32_ index_19960_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_19960 (in_PROPERTY_5F_LIST) ;
    while (enumerator_19960.hasCurrentObject ()) {
      result.appendString ("    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation + 2) ;\n    ioString.appendString (\"") ;
      result.appendString (enumerator_19960.current_entry (HERE).readProperty_name ().readProperty_string ().stringValue ()) ;
      result.appendString (":\") ;\n    inArray (i COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_19960.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 494)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation + 1) ;\n") ;
      enumerator_19960.gotoNextObject () ;
      index_19960_.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t inIndentation) const {\n  ioString.appendCString (\"<map @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\") ;\n  if (isValid ()) {\n    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> array = sortedInfoArray () ;\n    GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (array, ioString, inIndentation) ;\n    OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> subRoot = mSharedRoot->overriddenRoot () ;\n    uint32_t idx = 0 ;\n    while (subRoot.isNotNil ()) {\n     idx += 1 ;\n     ioString.appendNewLine () ;\n     ioString.appendStringMultiple (\"| \", inIndentation + 1) ;\n     ioString.appendString (\" override #\") ;\n     ioString.appendUnsigned (idx) ;\n     const auto subRootArray = subRoot->sortedInfoArray () ;\n     GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (subRootArray, ioString, inIndentation) ;\n     subRoot = subRoot->overriddenRoot () ;\n    }\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> left = sortedInfoArray () ;\n      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> right = inOperand.sortedInfoArray () ;\n      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) :\nmInfoArray (inMap.sortedInfoArray ()),\nmIndex (0) {\n  mIndex = mInfoArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstring DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;\n}\n\n") ;
  GGS_u_33__32_ index_23531_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_23531 (in_PROPERTY_5F_LIST) ;
    while (enumerator_23531.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_23531.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 573)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_23531.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 573)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_23531.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 574)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_23531.gotoNextObject () ;
      index_23531_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) :\nmInfoArray (inMap.sortedInfoArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstring UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;\n}\n\n") ;
  GGS_u_33__32_ index_24852_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator__5B_typedProperty_5D_ enumerator_24852 (in_PROPERTY_5F_LIST) ;
    while (enumerator_24852.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24852.current_entry (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 604)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_24852.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 604)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_24852.current_entry (HERE).readProperty_name ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS-map.cpp.galgasTemplate", 605)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_24852.gotoNextObject () ;
      index_24852_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}
