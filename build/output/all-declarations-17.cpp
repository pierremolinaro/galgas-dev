#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
// @notExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_notExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notExpressionForGeneration * p = (const cPtr_notExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_notExpressionForGeneration::objectCompare (const GALGAS_notExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration::GALGAS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration GALGAS_notExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_notExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                  const GALGAS_location & in_mLocation,
                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

void cPtr_notExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString += "[@notExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @notExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notExpressionForGeneration GALGAS_notExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionForGeneration result ;
  const GALGAS_notExpressionForGeneration * p = (const GALGAS_notExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_notExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @tildeExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_tildeExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tildeExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tildeExpressionForGeneration * p = (const cPtr_tildeExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tildeExpressionForGeneration::objectCompare (const GALGAS_tildeExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration::GALGAS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration GALGAS_tildeExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                          const GALGAS_location & inAttribute_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tildeExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_tildeExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tildeExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

void cPtr_tildeExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString += "[@tildeExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tildeExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @tildeExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionForGeneration GALGAS_tildeExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionForGeneration result ;
  const GALGAS_tildeExpressionForGeneration * p = (const GALGAS_tildeExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tildeExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bangExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bangExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bangExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bangExpressionForGeneration * p = (const cPtr_bangExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bangExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverTypeName.objectCompare (p->mProperty_mReceiverTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bangExpressionForGeneration::objectCompare (const GALGAS_bangExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bangExpressionForGeneration::GALGAS_bangExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bangExpressionForGeneration::GALGAS_bangExpressionForGeneration (const cPtr_bangExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bangExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bangExpressionForGeneration GALGAS_bangExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                        const GALGAS_location & inAttribute_mLocation,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                        const GALGAS_string & inAttribute_mReceiverTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bangExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mReceiverTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bangExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression, inAttribute_mReceiverTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_bangExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_bangExpressionForGeneration::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionForGeneration) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bangExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionForGeneration::cPtr_bangExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GALGAS_location & in_mLocation,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                    const GALGAS_string & in_mReceiverTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression),
mProperty_mReceiverTypeName (in_mReceiverTypeName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bangExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration ;
}

void cPtr_bangExpressionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString += "[@bangExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bangExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bangExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, mProperty_mReceiverTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bangExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bangExpressionForGeneration ("bangExpressionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bangExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bangExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bangExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bangExpressionForGeneration GALGAS_bangExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bangExpressionForGeneration result ;
  const GALGAS_bangExpressionForGeneration * p = (const GALGAS_bangExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bangExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryWrappingMinusExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryWrappingMinusExpressionForGeneration * p = (const cPtr_unaryWrappingMinusExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryWrappingMinusExpressionForGeneration::objectCompare (const GALGAS_unaryWrappingMinusExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration::GALGAS_unaryWrappingMinusExpressionForGeneration (const cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                                    const GALGAS_location & inAttribute_mLocation,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryWrappingMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

void cPtr_unaryWrappingMinusExpressionForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString += "[@unaryWrappingMinusExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryWrappingMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unaryWrappingMinusExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ("unaryWrappingMinusExpressionForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionForGeneration GALGAS_unaryWrappingMinusExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionForGeneration result ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration * p = (const GALGAS_unaryWrappingMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unaryWrappingMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orShortExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orShortExpressionForGeneration * p = (const cPtr_orShortExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orShortExpressionForGeneration::objectCompare (const GALGAS_orShortExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration::GALGAS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                              const GALGAS_location & inAttribute_mLocation,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orShortExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_orShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_orShortExpressionForGeneration::cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                          const GALGAS_location & in_mLocation,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

void cPtr_orShortExpressionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString += "[@orShortExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @orShortExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionForGeneration ("orShortExpressionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionForGeneration GALGAS_orShortExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionForGeneration result ;
  const GALGAS_orShortExpressionForGeneration * p = (const GALGAS_orShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @openedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_openedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_openedSliceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_openedSliceExpressionForGeneration * p = (const cPtr_openedSliceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_openedSliceExpressionForGeneration::objectCompare (const GALGAS_openedSliceExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration::GALGAS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_openedSliceExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_openedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

void cPtr_openedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@openedSliceExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_openedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_openedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @openedSliceExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ("openedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionForGeneration GALGAS_openedSliceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionForGeneration result ;
  const GALGAS_openedSliceExpressionForGeneration * p = (const GALGAS_openedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @closedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_closedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_closedSliceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_closedSliceExpressionForGeneration * p = (const cPtr_closedSliceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_closedSliceExpressionForGeneration::objectCompare (const GALGAS_closedSliceExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration::GALGAS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                      const GALGAS_location & inAttribute_mLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_closedSliceExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_closedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

void cPtr_closedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@closedSliceExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_closedSliceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_closedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @closedSliceExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ("closedSliceExpressionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionForGeneration GALGAS_closedSliceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionForGeneration result ;
  const GALGAS_closedSliceExpressionForGeneration * p = (const GALGAS_closedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_closedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andShortExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andShortExpressionForGeneration * p = (const cPtr_andShortExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andShortExpressionForGeneration::objectCompare (const GALGAS_andShortExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration::GALGAS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_andShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

void cPtr_andShortExpressionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString += "[@andShortExpressionForGeneration:" ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andShortExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionForGeneration GALGAS_andShortExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionForGeneration result ;
  const GALGAS_andShortExpressionForGeneration * p = (const GALGAS_andShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mSelfObjectCppName (),
mProperty_selfType (),
mProperty_mSelfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::constructor_new (const GALGAS_semanticContext & in_mSemanticContext,
                                                                const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                const GALGAS_string & in_mSelfObjectCppName,
                                                                const GALGAS_selfAvailability & in_selfType,
                                                                const GALGAS_string & in_mSelfObjectCppPrefixForAccessingProperty,
                                                                const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  if (in_mSemanticContext.isValid () && in_mPredefinedTypes.isValid () && in_mSelfObjectCppName.isValid () && in_selfType.isValid () && in_mSelfObjectCppPrefixForAccessingProperty.isValid () && in_requiresSelfForAccessingProperty.isValid ()) {
    result = GALGAS_analysisContext (in_mSemanticContext, in_mPredefinedTypes, in_mSelfObjectCppName, in_selfType, in_mSelfObjectCppPrefixForAccessingProperty, in_requiresSelfForAccessingProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mSelfObjectCppName.isValid () && mProperty_selfType.isValid () && mProperty_mSelfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mSelfObjectCppName.drop () ;
  mProperty_selfType.drop () ;
  mProperty_mSelfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString += "<struct @analysisContext:" ;
  if (! isValid ()) {
    ioString += " not built" ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mSelfObjectCppName.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_selfType.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_mSelfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
    ioString += ", " ;
    mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString += ">" ;
}

//--------------------------------------------------------------------------------------------------
//
//     @analysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentInstructionAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString += "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mOptionalProperty, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPropertyAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPropertyAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetSelfPropertyName.printNonNullClassInstanceProperties ("mTargetSelfPropertyName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST::GALGAS_selfPropertyAssignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST::GALGAS_selfPropertyAssignmentInstructionAST (const cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPropertyAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mTargetSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mTargetSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfPropertyAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPropertyAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPropertyAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

void cPtr_selfPropertyAssignmentInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString += "[@selfPropertyAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTargetSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPropertyAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPropertyAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetSelfPropertyName, mProperty_mOptionalProperty, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfPropertyAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ("selfPropertyAssignmentInstructionAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPropertyAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPropertyAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPropertyAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPropertyAssignmentInstructionAST GALGAS_selfPropertyAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfPropertyAssignmentInstructionAST result ;
  const GALGAS_selfPropertyAssignmentInstructionAST * p = (const GALGAS_selfPropertyAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPropertyAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetCppName.printNonNullClassInstanceProperties ("mTargetCppName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignmentInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionForGeneration * p = (const cPtr_assignmentInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetCppName.objectCompare (p->mProperty_mTargetCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalProperty.objectCompare (p->mProperty_mOptionalProperty) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceLocation.objectCompare (p->mProperty_mSourceLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentInstructionForGeneration::objectCompare (const GALGAS_assignmentInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration::GALGAS_assignmentInstructionForGeneration (const cPtr_assignmentInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mTargetType,
                                                                                                      const GALGAS_string & inAttribute_mTargetCppName,
                                                                                                      const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                      const GALGAS_string & inAttribute_mOptionalProperty,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression,
                                                                                                      const GALGAS_location & inAttribute_mSourceLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mTargetCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mOptionalProperty.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionForGeneration (inAttribute_mTargetType, inAttribute_mTargetCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mOptionalProperty, inAttribute_mSourceExpression, inAttribute_mSourceLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_assignmentInstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mTargetCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentInstructionForGeneration::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_assignmentInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_assignmentInstructionForGeneration::readProperty_mSourceLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                                  const GALGAS_string & in_mTargetCppName,
                                                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                  const GALGAS_string & in_mOptionalProperty,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                  const GALGAS_location & in_mSourceLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetCppName (in_mTargetCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mOptionalProperty (in_mOptionalProperty),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceLocation (in_mSourceLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

void cPtr_assignmentInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@assignmentInstructionForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTargetCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionForGeneration (mProperty_mTargetType, mProperty_mTargetCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mOptionalProperty, mProperty_mSourceExpression, mProperty_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ("assignmentInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentInstructionForGeneration GALGAS_assignmentInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionForGeneration result ;
  const GALGAS_assignmentInstructionForGeneration * p = (const GALGAS_assignmentInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structuredCastInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structuredCastInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mCastBranchList.printNonNullClassInstanceProperties ("mCastBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structuredCastInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionForGeneration * p = (const cPtr_structuredCastInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastBranchList.objectCompare (p->mProperty_mCastBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structuredCastInstructionForGeneration::objectCompare (const GALGAS_structuredCastInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration::GALGAS_structuredCastInstructionForGeneration (const cPtr_structuredCastInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration GALGAS_structuredCastInstructionForGeneration::constructor_new (const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression,
                                                                                                              const GALGAS_castInstructionBranchListForGeneration & inAttribute_mCastBranchList,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mCastBranchList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionForGeneration (inAttribute_mExpression, inAttribute_mCastBranchList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mCastBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_castInstructionBranchListForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mCastBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_structuredCastInstructionForGeneration::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionForGeneration::cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                          const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mCastBranchList (in_mCastBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structuredCastInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

void cPtr_structuredCastInstructionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString += "[@structuredCastInstructionForGeneration:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mCastBranchList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structuredCastInstructionForGeneration (mProperty_mExpression, mProperty_mCastBranchList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structuredCastInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ("structuredCastInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionForGeneration GALGAS_structuredCastInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionForGeneration result ;
  const GALGAS_structuredCastInstructionForGeneration * p = (const GALGAS_structuredCastInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structuredCastInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @plusEqualElementsInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusEqualElementsInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST::GALGAS_plusEqualElementsInstructionAST (const cPtr_plusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualElementsInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_plusEqualElementsInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_plusEqualElementsInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualElementsInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_plusEqualElementsInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualElementsInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualElementsInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

void cPtr_plusEqualElementsInstructionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString += "[@plusEqualElementsInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusEqualElementsInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @plusEqualElementsInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ("plusEqualElementsInstructionAST",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualElementsInstructionAST GALGAS_plusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualElementsInstructionAST result ;
  const GALGAS_plusEqualElementsInstructionAST * p = (const GALGAS_plusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @plusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST::GALGAS_plusEqualExpressionInstructionAST (const cPtr_plusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_plusEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_plusEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_plusEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_plusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_plusEqualExpressionInstructionAST * p = (cPtr_plusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

void cPtr_plusEqualExpressionInstructionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "[@plusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @plusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ("plusEqualExpressionInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_plusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_plusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_plusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_plusEqualExpressionInstructionAST GALGAS_plusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_plusEqualExpressionInstructionAST result ;
  const GALGAS_plusEqualExpressionInstructionAST * p = (const GALGAS_plusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_plusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @minusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_minusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST::GALGAS_minusEqualExpressionInstructionAST (const cPtr_minusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_minusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_minusEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_minusEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_minusEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_minusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_minusEqualExpressionInstructionAST * p = (cPtr_minusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_minusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @minusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_minusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

void cPtr_minusEqualExpressionInstructionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@minusEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_minusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_minusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @minusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ("minusEqualExpressionInstructionAST",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_minusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_minusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_minusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_minusEqualExpressionInstructionAST GALGAS_minusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_minusEqualExpressionInstructionAST result ;
  const GALGAS_minusEqualExpressionInstructionAST * p = (const GALGAS_minusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_minusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("minusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mulEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mulEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST::GALGAS_mulEqualExpressionInstructionAST (const cPtr_mulEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mulEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mulEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mulEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_mulEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_mulEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_mulEqualExpressionInstructionAST * p = (cPtr_mulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mulEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mulEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

void cPtr_mulEqualExpressionInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString += "[@mulEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @mulEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ("mulEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mulEqualExpressionInstructionAST GALGAS_mulEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mulEqualExpressionInstructionAST result ;
  const GALGAS_mulEqualExpressionInstructionAST * p = (const GALGAS_mulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @divEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_divEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST::GALGAS_divEqualExpressionInstructionAST (const cPtr_divEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_divEqualExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_divEqualExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_divEqualExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divEqualExpressionInstructionAST * p = (cPtr_divEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @divEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

void cPtr_divEqualExpressionInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString += "[@divEqualExpressionInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_divEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @divEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ("divEqualExpressionInstructionAST",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_divEqualExpressionInstructionAST GALGAS_divEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divEqualExpressionInstructionAST result ;
  const GALGAS_divEqualExpressionInstructionAST * p = (const GALGAS_divEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_divEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @opEqualInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_opEqualInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVariableCppName.printNonNullClassInstanceProperties ("mTargetVariableCppName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mGeneratedMethod.printNonNullClassInstanceProperties ("mGeneratedMethod") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_opEqualInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_opEqualInstructionForGeneration * p = (const cPtr_opEqualInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVariableCppName.objectCompare (p->mProperty_mTargetVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (p->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedMethod.objectCompare (p->mProperty_mGeneratedMethod) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_opEqualInstructionForGeneration::objectCompare (const GALGAS_opEqualInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration::GALGAS_opEqualInstructionForGeneration (const cPtr_opEqualInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opEqualInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_unifiedTypeMapEntry & inAttribute_mTargetType,
                                                                                                const GALGAS_string & inAttribute_mTargetVariableCppName,
                                                                                                const GALGAS_string & inAttribute_mNameForCheckingFormalParameterUsing,
                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression,
                                                                                                const GALGAS_string & inAttribute_mGeneratedMethod
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mTargetVariableCppName.isValid () && inAttribute_mNameForCheckingFormalParameterUsing.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mGeneratedMethod.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_opEqualInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mTargetType, inAttribute_mTargetVariableCppName, inAttribute_mNameForCheckingFormalParameterUsing, inAttribute_mStructAttributeList, inAttribute_mSourceExpression, inAttribute_mGeneratedMethod COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_opEqualInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_opEqualInstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mTargetVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mTargetVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_opEqualInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_opEqualInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_opEqualInstructionForGeneration::readProperty_mGeneratedMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_opEqualInstructionForGeneration * p = (cPtr_opEqualInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opEqualInstructionForGeneration) ;
    return p->mProperty_mGeneratedMethod ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @opEqualInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_opEqualInstructionForGeneration::cPtr_opEqualInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                            const GALGAS_string & in_mTargetVariableCppName,
                                                                            const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                            const GALGAS_string & in_mGeneratedMethod
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetVariableCppName (in_mTargetVariableCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mGeneratedMethod (in_mGeneratedMethod) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_opEqualInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;
}

void cPtr_opEqualInstructionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString += "[@opEqualInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGeneratedMethod.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_opEqualInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_opEqualInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTargetType, mProperty_mTargetVariableCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression, mProperty_mGeneratedMethod COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @opEqualInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ("opEqualInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_opEqualInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_opEqualInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opEqualInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_opEqualInstructionForGeneration GALGAS_opEqualInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_opEqualInstructionForGeneration result ;
  const GALGAS_opEqualInstructionForGeneration * p = (const GALGAS_opEqualInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_opEqualInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opEqualInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mErrorExpression.printNonNullClassInstanceProperties ("mErrorExpression") ;
    mProperty_mBuiltVariableCppNameList.printNonNullClassInstanceProperties ("mBuiltVariableCppNameList") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_errorInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_errorInstructionForGeneration * p = (const cPtr_errorInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorExpression.objectCompare (p->mProperty_mErrorExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBuiltVariableCppNameList.objectCompare (p->mProperty_mBuiltVariableCppNameList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListForGeneration.objectCompare (p->mProperty_mFixitListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_errorInstructionForGeneration::objectCompare (const GALGAS_errorInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration::GALGAS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mErrorExpression,
                                                                                            const GALGAS_stringlist & inAttribute_mBuiltVariableCppNameList,
                                                                                            const GALGAS_fixitListForGeneration & inAttribute_mFixitListForGeneration
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mErrorExpression.isValid () && inAttribute_mBuiltVariableCppNameList.isValid () && inAttribute_mFixitListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mErrorExpression, inAttribute_mBuiltVariableCppNameList, inAttribute_mFixitListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_errorInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_errorInstructionForGeneration::readProperty_mErrorExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mErrorExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_errorInstructionForGeneration::readProperty_mBuiltVariableCppNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mBuiltVariableCppNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_errorInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_fixitListForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                        const GALGAS_stringlist & in_mBuiltVariableCppNameList,
                                                                        const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mErrorExpression (in_mErrorExpression),
mProperty_mBuiltVariableCppNameList (in_mBuiltVariableCppNameList),
mProperty_mFixitListForGeneration (in_mFixitListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_errorInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

void cPtr_errorInstructionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString += "[@errorInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mErrorExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBuiltVariableCppNameList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mErrorExpression, mProperty_mBuiltVariableCppNameList, mProperty_mFixitListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @errorInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_errorInstructionForGeneration GALGAS_errorInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionForGeneration result ;
  const GALGAS_errorInstructionForGeneration * p = (const GALGAS_errorInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_errorInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionImplicitVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionImplicitVarInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefix.printNonNullClassInstanceProperties ("mPrefix") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfAnonymousEnumeration.printNonNullClassInstanceProperties ("mEndOfAnonymousEnumeration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mPrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mPrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::readProperty_mEndOfAnonymousEnumeration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    return p->mProperty_mEndOfAnonymousEnumeration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionImplicitVarInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfAnonymousEnumeration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mEnumeratedExpression (in_mEnumeratedExpression),
mProperty_mEndOfAnonymousEnumeration (in_mEndOfAnonymousEnumeration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString += "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfAnonymousEnumeration.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mProperty_mPrefix, mProperty_mEnumeratedExpression, mProperty_mEndOfAnonymousEnumeration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionImplicitVarInExpAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionVarInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumerationOptionalTypeName.printNonNullClassInstanceProperties ("mEnumerationOptionalTypeName") ;
    mProperty_mEnumerationVariable.printNonNullClassInstanceProperties ("mEnumerationVariable") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumerationVariable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumerationVariable ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionVarInExpAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString += "[@enumeratedCollectionVarInExpAST:" ;
  mProperty_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mProperty_mEnumerationOptionalTypeName, mProperty_mEnumerationVariable, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumeratedCollectionVarInExpAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  const GALGAS_enumeratedCollectionVarInExpAST * p = (const GALGAS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumeratedObjectList.printNonNullClassInstanceProperties ("mEnumeratedObjectList") ;
    mProperty_mIndexVariableName.printNonNullClassInstanceProperties ("mIndexVariableName") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOf_5F_while_5F_expression.printNonNullClassInstanceProperties ("mEndOf_while_expression") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mEndOf_5F_before_5F_branch.printNonNullClassInstanceProperties ("mEndOf_before_branch") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mEndOf_5F_between_5F_branch.printNonNullClassInstanceProperties ("mEndOf_between_branch") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_do_5F_branch.printNonNullClassInstanceProperties ("mEndOf_do_branch") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
    mProperty_mEndOf_5F_after_5F_branch.printNonNullClassInstanceProperties ("mEndOf_after_branch") ;
    mProperty_mEndOf_5F_foreach_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_foreach_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST GALGAS_forInstructionAST::readProperty_mEnumeratedObjectList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionAST::readProperty_mIndexVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIndexVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_while_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_before_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_before_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_between_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_between_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_do_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_forInstructionAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_after_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_after_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionAST::readProperty_mEndOf_5F_foreach_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_foreach_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString += "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableName, mProperty_mWhileExpression, mProperty_mEndOf_5F_while_5F_expression, mProperty_mBeforeInstructionList, mProperty_mEndOf_5F_before_5F_branch, mProperty_mBetweenInstructionList, mProperty_mEndOf_5F_between_5F_branch, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_branch, mProperty_mAfterInstructionList, mProperty_mEndOf_5F_after_5F_branch, mProperty_mEndOf_5F_foreach_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mEnumeratedObjectList.printNonNullClassInstanceProperties ("mEnumeratedObjectList") ;
    mProperty_mIndexVariableCppName.printNonNullClassInstanceProperties ("mIndexVariableCppName") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionForGeneration * p = (const cPtr_forInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedObjectList.objectCompare (p->mProperty_mEnumeratedObjectList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexVariableCppName.objectCompare (p->mProperty_mIndexVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBeforeInstructionList.objectCompare (p->mProperty_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBetweenInstructionList.objectCompare (p->mProperty_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAfterInstructionList.objectCompare (p->mProperty_mAfterInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forInstructionForGeneration::objectCompare (const GALGAS_forInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration::GALGAS_forInstructionForGeneration (const cPtr_forInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_forInstructionEnumeratedObjectListForGeneration & inAttribute_mEnumeratedObjectList,
                                                                                        const GALGAS_string & inAttribute_mIndexVariableCppName,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mWhileExpression,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mBeforeInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mBetweenInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoInstructionList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mAfterInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEnumeratedObjectList.isValid () && inAttribute_mIndexVariableCppName.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mEnumeratedObjectList, inAttribute_mIndexVariableCppName, inAttribute_mWhileExpression, inAttribute_mBeforeInstructionList, inAttribute_mBetweenInstructionList, inAttribute_mDoInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_forInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListForGeneration GALGAS_forInstructionForGeneration::readProperty_mEnumeratedObjectList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_forInstructionEnumeratedObjectListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_forInstructionForGeneration::readProperty_mIndexVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mIndexVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_forInstructionForGeneration::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_forInstructionForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionForGeneration::cPtr_forInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                                                    const GALGAS_string & in_mIndexVariableCppName,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mEnumeratedObjectList (in_mEnumeratedObjectList),
mProperty_mIndexVariableCppName (in_mIndexVariableCppName),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mBeforeInstructionList (in_mBeforeInstructionList),
mProperty_mBetweenInstructionList (in_mBetweenInstructionList),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mAfterInstructionList (in_mAfterInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

void cPtr_forInstructionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString += "[@forInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIndexVariableCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableCppName, mProperty_mWhileExpression, mProperty_mBeforeInstructionList, mProperty_mBetweenInstructionList, mProperty_mDoInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionForGeneration ("forInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forInstructionForGeneration GALGAS_forInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionForGeneration result ;
  const GALGAS_forInstructionForGeneration * p = (const GALGAS_forInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString += "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInVar generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString += "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString += "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInFileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInFileInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mEndOfSourceExpression.printNonNullClassInstanceProperties ("mEndOfSourceExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mAbstractGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST::GALGAS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInFileInstructionAST::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInFileInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInFileInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInFileInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInFileInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInFileInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString += "[@grammarInFileInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInFileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInFileInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST result ;
  const GALGAS_grammarInFileInstructionAST * p = (const GALGAS_grammarInFileInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInFileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInStringInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInStringInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mEndOfSourceExpression.printNonNullClassInstanceProperties ("mEndOfSourceExpression") ;
    mProperty_mNameExpression.printNonNullClassInstanceProperties ("mNameExpression") ;
    mProperty_mEndOfNameExpression.printNonNullClassInstanceProperties ("mEndOfNameExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mAbstractGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST::GALGAS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_grammarInStringInstructionAST::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_grammarInStringInstructionAST::readProperty_mNameExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInStringInstructionAST::readProperty_mEndOfNameExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_grammarInStringInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_grammarInStringInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInStringInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString += "[@grammarInStringInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mNameExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInStringInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mNameExpression, mProperty_mEndOfNameExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInStringInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST result ;
  const GALGAS_grammarInStringInstructionAST * p = (const GALGAS_grammarInStringInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInStringInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceFileForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceFileExpression.printNonNullClassInstanceProperties ("mSourceFileExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionWithSourceFileForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceFileForGeneration * p = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceFileExpression.objectCompare (p->mProperty_mSourceFileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarHasTranslateFeature.objectCompare (p->mProperty_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignementList.objectCompare (p->mProperty_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mProperty_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionWithSourceFileForGeneration::objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration::GALGAS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                            const GALGAS_string & inAttribute_mGrammarName,
                                                                                                                            const GALGAS_string & inAttribute_mLabelName,
                                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceFileExpression,
                                                                                                                            const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                            const GALGAS_bool & inAttribute_mGrammarHasTranslateFeature,
                                                                                                                            const GALGAS_stringlist & inAttribute_mAssignementList,
                                                                                                                            const GALGAS_string & inAttribute_mSyntaxDirectedTranslationResultVarName
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceFileExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarHasTranslateFeature.isValid () && inAttribute_mAssignementList.isValid () && inAttribute_mSyntaxDirectedTranslationResultVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceFileForGeneration (inAttribute_mInstructionLocation, inAttribute_mGrammarName, inAttribute_mLabelName, inAttribute_mSourceFileExpression, inAttribute_mActualParameterList, inAttribute_mGrammarHasTranslateFeature, inAttribute_mAssignementList, inAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mSourceFileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSourceFileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceFileForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                        const GALGAS_string & in_mGrammarName,
                                                                                                        const GALGAS_string & in_mLabelName,
                                                                                                        const GALGAS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                        const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                                                        const GALGAS_stringlist & in_mAssignementList,
                                                                                                        const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceFileExpression (in_mSourceFileExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mProperty_mAssignementList (in_mAssignementList),
mProperty_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceFileForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

void cPtr_grammarInstructionWithSourceFileForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString += "[@grammarInstructionWithSourceFileForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceFileExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceFileExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceFileForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration * p = (const GALGAS_grammarInstructionWithSourceFileForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceFileForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceStringExpression.printNonNullClassInstanceProperties ("mSourceStringExpression") ;
    mProperty_mNameStringExpression.printNonNullClassInstanceProperties ("mNameStringExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_grammarInstructionWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceStringExpression.objectCompare (p->mProperty_mSourceStringExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNameStringExpression.objectCompare (p->mProperty_mNameStringExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarHasTranslateFeature.objectCompare (p->mProperty_mGrammarHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignementList.objectCompare (p->mProperty_mAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxDirectedTranslationResultVarName.objectCompare (p->mProperty_mSyntaxDirectedTranslationResultVarName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_grammarInstructionWithSourceExpressionForGeneration::objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration::GALGAS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                        const GALGAS_string & inAttribute_mGrammarName,
                                                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceStringExpression,
                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mNameStringExpression,
                                                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                                                        const GALGAS_bool & inAttribute_mGrammarHasTranslateFeature,
                                                                                                                                        const GALGAS_stringlist & inAttribute_mAssignementList,
                                                                                                                                        const GALGAS_string & inAttribute_mSyntaxDirectedTranslationResultVarName
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mSourceStringExpression.isValid () && inAttribute_mNameStringExpression.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarHasTranslateFeature.isValid () && inAttribute_mAssignementList.isValid () && inAttribute_mSyntaxDirectedTranslationResultVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration (inAttribute_mInstructionLocation, inAttribute_mGrammarName, inAttribute_mLabelName, inAttribute_mSourceStringExpression, inAttribute_mNameStringExpression, inAttribute_mActualParameterList, inAttribute_mGrammarHasTranslateFeature, inAttribute_mAssignementList, inAttribute_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSourceStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mNameStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mNameStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_string & in_mGrammarName,
                                                                                                                    const GALGAS_string & in_mLabelName,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                    const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                    const GALGAS_stringlist & in_mAssignementList,
                                                                                                                    const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLabelName (in_mLabelName),
mProperty_mSourceStringExpression (in_mSourceStringExpression),
mProperty_mNameStringExpression (in_mNameStringExpression),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarHasTranslateFeature (in_mGrammarHasTranslateFeature),
mProperty_mAssignementList (in_mAssignementList),
mProperty_mSyntaxDirectedTranslationResultVarName (in_mSyntaxDirectedTranslationResultVarName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

void cPtr_grammarInstructionWithSourceExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString += "[@grammarInstructionWithSourceExpressionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceStringExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mNameStringExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceStringExpression, mProperty_mNameStringExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration * p = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString += "[@incDecInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST::GALGAS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecNoOVFInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_incDecNoOVFInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString += "[@incDecNoOVFInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST result ;
  const GALGAS_incDecNoOVFInstructionAST * p = (const GALGAS_incDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsConstant.printNonNullClassInstanceProperties ("mIsConstant") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mIsConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString += "[@localVariableOrConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mIsConstant, mProperty_mOptionalTypeName, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantTypeName.printNonNullClassInstanceProperties ("mConstantTypeName") ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST::GALGAS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_undefinedLocalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                                      const GALGAS_lstring & in_mConstantName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantTypeName (in_mConstantTypeName),
mProperty_mConstantName (in_mConstantName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString += "[@undefinedLocalConstantDeclarationAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mProperty_mInstructionLocation, mProperty_mConstantTypeName, mProperty_mConstantName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  const GALGAS_undefinedLocalConstantDeclarationAST * p = (const GALGAS_undefinedLocalConstantDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localConstantDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST::GALGAS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString += "[@localConstantDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localConstantDeclarationWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST * p = (const GALGAS_localConstantDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mIsConstant.printNonNullClassInstanceProperties ("mIsConstant") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsConstant.objectCompare (p->mProperty_mIsConstant) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mTargetType,
                                                                                                                                                                        const GALGAS_bool & inAttribute_mIsConstant,
                                                                                                                                                                        const GALGAS_string & inAttribute_mCppVariableName,
                                                                                                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mSourceExpression
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mIsConstant.isValid () && inAttribute_mCppVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (inAttribute_mTargetType, inAttribute_mIsConstant, inAttribute_mCppVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mIsConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                                                                                    const GALGAS_string & in_mCppVariableName,
                                                                                                                                                    const GALGAS_semanticExpressionForGeneration & in_mSourceExpression
                                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mIsConstant (in_mIsConstant),
mProperty_mCppVariableName (in_mCppVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::description (String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString += "[@localVariableOrConstantDeclarationWithSourceExpressionForGeneration:" ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mProperty_mTargetType, mProperty_mIsConstant, mProperty_mCppVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLogMessage.printNonNullClassInstanceProperties ("mLogMessage") ;
    mProperty_mLogExpression.printNonNullClassInstanceProperties ("mLogExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_logInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logInstructionForGeneration * p = (const cPtr_logInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLogMessage.objectCompare (p->mProperty_mLogMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLogExpression.objectCompare (p->mProperty_mLogExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_logInstructionForGeneration::objectCompare (const GALGAS_logInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration::GALGAS_logInstructionForGeneration (const cPtr_logInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mLogMessage,
                                                                                        const GALGAS_semanticExpressionForGeneration & inAttribute_mLogExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  if (inAttribute_mLogMessage.isValid () && inAttribute_mLogExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logInstructionForGeneration (inAttribute_mLogMessage, inAttribute_mLogExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_logInstructionForGeneration::readProperty_mLogMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_logInstructionForGeneration::readProperty_mLogExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (const GALGAS_lstring & in_mLogMessage,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mLogExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mLogMessage (in_mLogMessage),
mProperty_mLogExpression (in_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

void cPtr_logInstructionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString += "[@logInstructionForGeneration:" ;
  mProperty_mLogMessage.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionForGeneration (mProperty_mLogMessage, mProperty_mLogExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @logInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logInstructionForGeneration ("logInstructionForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration result ;
  const GALGAS_logInstructionForGeneration * p = (const GALGAS_logInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loopInstructionWithVariantForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionWithVariantForGeneration * p = (const cPtr_loopInstructionWithVariantForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstInstructions.objectCompare (p->mProperty_mFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLoopExpression.objectCompare (p->mProperty_mLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondInstructions.objectCompare (p->mProperty_mSecondInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_loopInstructionWithVariantForGeneration::objectCompare (const GALGAS_loopInstructionWithVariantForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration::GALGAS_loopInstructionWithVariantForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration::GALGAS_loopInstructionWithVariantForGeneration (const cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration GALGAS_loopInstructionWithVariantForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mVariantExpression,
                                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mFirstInstructions,
                                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mLoopExpression,
                                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mSecondInstructions
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantForGeneration (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mFirstInstructions, inAttribute_mLoopExpression, inAttribute_mSecondInstructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                            const GALGAS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                            const GALGAS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                            const GALGAS_semanticInstructionListForGeneration & in_mSecondInstructions
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mFirstInstructions (in_mFirstInstructions),
mProperty_mLoopExpression (in_mLoopExpression),
mProperty_mSecondInstructions (in_mSecondInstructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

void cPtr_loopInstructionWithVariantForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString += "[@loopInstructionWithVariantForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ("loopInstructionWithVariantForGeneration",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration GALGAS_loopInstructionWithVariantForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration result ;
  const GALGAS_loopInstructionWithVariantForGeneration * p = (const GALGAS_loopInstructionWithVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loopInstructionWithoutVariantForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loopInstructionWithoutVariantForGeneration * p = (const cPtr_loopInstructionWithoutVariantForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFirstInstructions.objectCompare (p->mProperty_mFirstInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLoopExpression.objectCompare (p->mProperty_mLoopExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondInstructions.objectCompare (p->mProperty_mSecondInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_loopInstructionWithoutVariantForGeneration::objectCompare (const GALGAS_loopInstructionWithoutVariantForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration::GALGAS_loopInstructionWithoutVariantForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration::GALGAS_loopInstructionWithoutVariantForGeneration (const cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_mFirstInstructions,
                                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mLoopExpression,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inAttribute_mSecondInstructions
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFirstInstructions.isValid () && inAttribute_mLoopExpression.isValid () && inAttribute_mSecondInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantForGeneration (inAttribute_mInstructionLocation, inAttribute_mFirstInstructions, inAttribute_mLoopExpression, inAttribute_mSecondInstructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                  const GALGAS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mSecondInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mFirstInstructions (in_mFirstInstructions),
mProperty_mLoopExpression (in_mLoopExpression),
mProperty_mSecondInstructions (in_mSecondInstructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

void cPtr_loopInstructionWithoutVariantForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString += "[@loopInstructionWithoutVariantForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantForGeneration (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ("loopInstructionWithoutVariantForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithoutVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithoutVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithoutVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration GALGAS_loopInstructionWithoutVariantForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration result ;
  const GALGAS_loopInstructionWithoutVariantForGeneration * p = (const GALGAS_loopInstructionWithoutVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithoutVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @methodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_methodCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_methodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_methodCallInstructionAST::objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                  const GALGAS_lstring & inAttribute_mMethodName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_methodCallInstructionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_methodCallInstructionAST::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_methodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                              const GALGAS_lstring & in_mMethodName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString += "[@methodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_methodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  const GALGAS_methodCallInstructionAST * p = (const GALGAS_methodCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_methodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_methodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mMethodBaseType.printNonNullClassInstanceProperties ("mMethodBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_methodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionForGeneration * p = (const cPtr_methodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodBaseType.objectCompare (p->mProperty_mMethodBaseType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_methodCallInstructionForGeneration::objectCompare (const GALGAS_methodCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration::GALGAS_methodCallInstructionForGeneration (const cPtr_methodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                      const GALGAS_string & inAttribute_mMethodName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMapEntry & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverType, inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_methodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_methodCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_methodCallInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_methodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_methodCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_methodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_methodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_methodCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                  const GALGAS_string & in_mMethodName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mMethodName (in_mMethodName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mMethodBaseType (in_mMethodBaseType) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_methodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

void cPtr_methodCallInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@methodCallInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_methodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_methodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverType, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ("methodCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration result ;
  const GALGAS_methodCallInstructionForGeneration * p = (const GALGAS_methodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_methodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_lstring & inAttribute_mRoutineName,
                                                                              const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_procCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_lstring & in_mRoutineName,
                                                          const GALGAS_actualParameterListAST & in_mActualParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString += "[@procCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mProperty_mInstructionLocation, mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  const GALGAS_procCallInstructionAST * p = (const GALGAS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_procCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionForGeneration * p = (const cPtr_procCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_procCallInstructionForGeneration::objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration::GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                                  const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionForGeneration (inAttribute_mRoutineName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_procCallInstructionForGeneration::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_procCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString += "[@procCallInstructionForGeneration:" ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mProperty_mRoutineName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration result ;
  const GALGAS_procCallInstructionForGeneration * p = (const GALGAS_procCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @setterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setterCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverStructProperties.printNonNullClassInstanceProperties ("mReceiverStructProperties") ;
    mProperty_mTypeNameForCasting.printNonNullClassInstanceProperties ("mTypeNameForCasting") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionAST * p = (const cPtr_setterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
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
    result = mProperty_mReceiverStructProperties.objectCompare (p->mProperty_mReceiverStructProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeNameForCasting.objectCompare (p->mProperty_mTypeNameForCasting) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setterCallInstructionAST::objectCompare (const GALGAS_setterCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST::GALGAS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_bool & inAttribute_mPrefixedBySelf,
                                                                                  const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                  const GALGAS_lstringlist & inAttribute_mReceiverStructProperties,
                                                                                  const GALGAS_lstring & inAttribute_mTypeNameForCasting,
                                                                                  const GALGAS_lstring & inAttribute_mSetterName,
                                                                                  const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefixedBySelf.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverStructProperties.isValid () && inAttribute_mTypeNameForCasting.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefixedBySelf, inAttribute_mReceiverName, inAttribute_mReceiverStructProperties, inAttribute_mTypeNameForCasting, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_setterCallInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_setterCallInstructionAST::readProperty_mReceiverStructProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverStructProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mTypeNameForCasting (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mTypeNameForCasting ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionAST::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_setterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_bool & in_mPrefixedBySelf,
                                                              const GALGAS_lstring & in_mReceiverName,
                                                              const GALGAS_lstringlist & in_mReceiverStructProperties,
                                                              const GALGAS_lstring & in_mTypeNameForCasting,
                                                              const GALGAS_lstring & in_mSetterName,
                                                              const GALGAS_actualParameterListAST & in_mActualParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefixedBySelf (in_mPrefixedBySelf),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverStructProperties (in_mReceiverStructProperties),
mProperty_mTypeNameForCasting (in_mTypeNameForCasting),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

void cPtr_setterCallInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString += "[@setterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverStructProperties.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTypeNameForCasting.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mReceiverStructProperties, mProperty_mTypeNameForCasting, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionAST ("setterCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST result ;
  const GALGAS_setterCallInstructionAST * p = (const GALGAS_setterCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfSetterCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfSetterCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionAST * p = (const cPtr_selfSetterCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfSetterCallInstructionAST::objectCompare (const GALGAS_selfSetterCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST::GALGAS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mSetterName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSetterName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfSetterCallInstructionAST::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_selfSetterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mSetterName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSetterName (in_mSetterName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

void cPtr_selfSetterCallInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString += "[@selfSetterCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfSetterCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mSetterName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ("selfSetterCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST result ;
  const GALGAS_selfSetterCallInstructionAST * p = (const GALGAS_selfSetterCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfSetterCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @setterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setterCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverBaseName.printNonNullClassInstanceProperties ("mReceiverBaseName") ;
    mProperty_mReceiverStructAttributes.printNonNullClassInstanceProperties ("mReceiverStructAttributes") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mMethodBaseType.printNonNullClassInstanceProperties ("mMethodBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setterCallInstructionForGeneration * p = (const cPtr_setterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverCppName.objectCompare (p->mProperty_mReceiverCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverBaseName.objectCompare (p->mProperty_mReceiverBaseName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverStructAttributes.objectCompare (p->mProperty_mReceiverStructAttributes) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodBaseType.objectCompare (p->mProperty_mMethodBaseType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setterCallInstructionForGeneration::objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration::GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_string & inAttribute_mReceiverCppName,
                                                                                                      const GALGAS_string & inAttribute_mReceiverBaseName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mReceiverStructAttributes,
                                                                                                      const GALGAS_unifiedTypeMapEntry & inAttribute_mCastType,
                                                                                                      const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                      const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                      const GALGAS_methodKind & inAttribute_mKind,
                                                                                                      const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                      const GALGAS_bool & inAttribute_mHasCompilerArgument,
                                                                                                      const GALGAS_unifiedTypeMapEntry & inAttribute_mMethodBaseType
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverCppName.isValid () && inAttribute_mReceiverBaseName.isValid () && inAttribute_mReceiverStructAttributes.isValid () && inAttribute_mCastType.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid () && inAttribute_mMethodBaseType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setterCallInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverCppName, inAttribute_mReceiverBaseName, inAttribute_mReceiverStructAttributes, inAttribute_mCastType, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument, inAttribute_mMethodBaseType COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_setterCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverBaseName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverBaseName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverStructAttributes (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverStructAttributes ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_setterCallInstructionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_setterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_setterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_setterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_setterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_setterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_setterCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_setterCallInstructionForGeneration * p = (cPtr_setterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionForGeneration::cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_string & in_mReceiverCppName,
                                                                                  const GALGAS_string & in_mReceiverBaseName,
                                                                                  const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_mCastType,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GALGAS_lstring & in_mSetterName,
                                                                                  const GALGAS_methodKind & in_mKind,
                                                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GALGAS_bool & in_mHasCompilerArgument,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_mMethodBaseType
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverCppName (in_mReceiverCppName),
mProperty_mReceiverBaseName (in_mReceiverBaseName),
mProperty_mReceiverStructAttributes (in_mReceiverStructAttributes),
mProperty_mCastType (in_mCastType),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument),
mProperty_mMethodBaseType (in_mMethodBaseType) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

void cPtr_setterCallInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@setterCallInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverBaseName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverStructAttributes.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setterCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverBaseName, mProperty_mReceiverStructAttributes, mProperty_mCastType, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ("setterCallInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration result ;
  const GALGAS_setterCallInstructionForGeneration * p = (const GALGAS_setterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfSetterCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSelfCppName.printNonNullClassInstanceProperties ("mSelfCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfSetterCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfSetterCallInstructionForGeneration * p = (const cPtr_selfSetterCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfCppName.objectCompare (p->mProperty_mSelfCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSetterName.objectCompare (p->mProperty_mSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfSetterCallInstructionForGeneration::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration::GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::constructor_new (const GALGAS_string & inAttribute_mSelfCppName,
                                                                                                              const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                              const GALGAS_lstring & inAttribute_mSetterName,
                                                                                                              const GALGAS_methodKind & inAttribute_mKind,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  if (inAttribute_mSelfCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mSetterName.isValid () && inAttribute_mKind.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfSetterCallInstructionForGeneration (inAttribute_mSelfCppName, inAttribute_mReceiverType, inAttribute_mSetterName, inAttribute_mKind, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selfSetterCallInstructionForGeneration::readProperty_mSelfCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSelfCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_selfSetterCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selfSetterCallInstructionForGeneration::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodKind GALGAS_selfSetterCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_methodKind () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_selfSetterCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfSetterCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_selfSetterCallInstructionForGeneration * p = (cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionForGeneration::cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GALGAS_lstring & in_mSetterName,
                                                                                          const GALGAS_methodKind & in_mKind,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mSelfCppName (in_mSelfCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mSetterName (in_mSetterName),
mProperty_mKind (in_mKind),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfSetterCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

void cPtr_selfSetterCallInstructionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString += "[@selfSetterCallInstructionForGeneration:" ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfSetterCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionForGeneration (mProperty_mSelfCppName, mProperty_mReceiverType, mProperty_mSetterName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ("selfSetterCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  const GALGAS_selfSetterCallInstructionForGeneration * p = (const GALGAS_selfSetterCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfSetterCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumType.printNonNullClassInstanceProperties ("mEnumType") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_switchInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionForGeneration * p = (const cPtr_switchInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumType.objectCompare (p->mProperty_mEnumType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranches.objectCompare (p->mProperty_mBranches) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_switchInstructionForGeneration::objectCompare (const GALGAS_switchInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration::GALGAS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mEnumType,
                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mSwitchExpression,
                                                                                              const GALGAS_switchBranchesForGeneration & inAttribute_mBranches
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration result ;
  if (inAttribute_mEnumType.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mBranches.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionForGeneration (inAttribute_mEnumType, inAttribute_mSwitchExpression, inAttribute_mBranches COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_switchInstructionForGeneration::readProperty_mEnumType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_switchInstructionForGeneration::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchInstructionForGeneration::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchBranchesForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                          const GALGAS_switchBranchesForGeneration & in_mBranches
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mEnumType (in_mEnumType),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mBranches (in_mBranches) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

void cPtr_switchInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString += "[@switchInstructionForGeneration:" ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mBranches COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionForGeneration ("switchInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration result ;
  const GALGAS_switchInstructionForGeneration * p = (const GALGAS_switchInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeMethodCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeMethodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionAST * p = (const cPtr_typeMethodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeMethodCallInstructionAST::objectCompare (const GALGAS_typeMethodCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST::GALGAS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mMethodName,
                                                                                          const GALGAS_actualParameterListAST & inAttribute_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionAST::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_typeMethodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mMethodName,
                                                                      const GALGAS_actualParameterListAST & in_mActualParameterList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

void cPtr_typeMethodCallInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString += "[@typeMethodCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeMethodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ("typeMethodCallInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST result ;
  const GALGAS_typeMethodCallInstructionAST * p = (const GALGAS_typeMethodCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeMethodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typeMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeMethodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_typeMethodCallInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeMethodCallInstructionForGeneration * p = (const cPtr_typeMethodCallInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMethodName.objectCompare (p->mProperty_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasCompilerArgument.objectCompare (p->mProperty_mHasCompilerArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_typeMethodCallInstructionForGeneration::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration::GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                              const GALGAS_lstring & inAttribute_mMethodName,
                                                                                                              const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                              const GALGAS_bool & inAttribute_mHasCompilerArgument
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mHasCompilerArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeMethodCallInstructionForGeneration (inAttribute_mTypeName, inAttribute_mMethodName, inAttribute_mActualParameterList, inAttribute_mHasCompilerArgument COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_typeMethodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_typeMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeMethodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionForGeneration::cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                                                          const GALGAS_lstring & in_mMethodName,
                                                                                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                          const GALGAS_bool & in_mHasCompilerArgument
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mMethodName (in_mMethodName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typeMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

void cPtr_typeMethodCallInstructionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString += "[@typeMethodCallInstructionForGeneration:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typeMethodCallInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionForGeneration (mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ("typeMethodCallInstructionForGeneration",
                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  const GALGAS_typeMethodCallInstructionForGeneration * p = (const GALGAS_typeMethodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeMethodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationWithAssignmentAST * p = (const cPtr_localVariableDeclarationWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
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

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST::GALGAS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                    const GALGAS_lstring & inAttribute_mVariableName,
                                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mSourceExpression
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVariableName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_localVariableDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationWithAssignmentAST::cPtr_localVariableDeclarationWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_lstring & in_mVariableName,
                                                                                                const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariableName (in_mVariableName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

void cPtr_localVariableDeclarationWithAssignmentAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString += "[@localVariableDeclarationWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ("localVariableDeclarationWithAssignmentAST",
                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  const GALGAS_localVariableDeclarationWithAssignmentAST * p = (const GALGAS_localVariableDeclarationWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationNoAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationNoAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationNoAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationNoAssignmentAST * p = (const cPtr_localVariableDeclarationNoAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationNoAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationNoAssignmentAST::objectCompare (const GALGAS_localVariableDeclarationNoAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST::GALGAS_localVariableDeclarationNoAssignmentAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST::GALGAS_localVariableDeclarationNoAssignmentAST (const cPtr_localVariableDeclarationNoAssignmentAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                                const GALGAS_lstring & inAttribute_mVariableName
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationNoAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationNoAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mVariableName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationNoAssignmentAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationNoAssignmentAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localVariableDeclarationNoAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationNoAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationNoAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationNoAssignmentAST::cPtr_localVariableDeclarationNoAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_lstring & in_mTypeName,
                                                                                            const GALGAS_lstring & in_mVariableName
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mVariableName (in_mVariableName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationNoAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ;
}

void cPtr_localVariableDeclarationNoAssignmentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString += "[@localVariableDeclarationNoAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationNoAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationNoAssignmentAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationNoAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ("localVariableDeclarationNoAssignmentAST",
                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationNoAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationNoAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationNoAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST GALGAS_localVariableDeclarationNoAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationNoAssignmentAST result ;
  const GALGAS_localVariableDeclarationNoAssignmentAST * p = (const GALGAS_localVariableDeclarationNoAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationNoAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationNoAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mWarningExpression.printNonNullClassInstanceProperties ("mWarningExpression") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_warningInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionForGeneration * p = (const cPtr_warningInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWarningExpression.objectCompare (p->mProperty_mWarningExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListForGeneration.objectCompare (p->mProperty_mFixitListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_warningInstructionForGeneration::objectCompare (const GALGAS_warningInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration::GALGAS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                const GALGAS_semanticExpressionForGeneration & inAttribute_mWarningExpression,
                                                                                                const GALGAS_fixitListForGeneration & inAttribute_mFixitListForGeneration
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mWarningExpression.isValid () && inAttribute_mFixitListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mWarningExpression, inAttribute_mFixitListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_warningInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_warningInstructionForGeneration::readProperty_mWarningExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mWarningExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_warningInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_fixitListForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mWarningExpression,
                                                                            const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mWarningExpression (in_mWarningExpression),
mProperty_mFixitListForGeneration (in_mFixitListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

void cPtr_warningInstructionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString += "[@warningInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mWarningExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mWarningExpression, mProperty_mFixitListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionForGeneration ("warningInstructionForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration result ;
  const GALGAS_warningInstructionForGeneration * p = (const GALGAS_warningInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_warningInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @readAccessWithInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_readAccessWithInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefix.printNonNullClassInstanceProperties ("mPrefix") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mKeyExpression.printNonNullClassInstanceProperties ("mKeyExpression") ;
    mProperty_mEndOfKeyExpression.printNonNullClassInstanceProperties ("mEndOfKeyExpression") ;
    mProperty_mSearchMethodNameForErrorSignaling.printNonNullClassInstanceProperties ("mSearchMethodNameForErrorSignaling") ;
    mProperty_mDoBranchInstructions.printNonNullClassInstanceProperties ("mDoBranchInstructions") ;
    mProperty_mEndOf_5F_do_5F_instructions.printNonNullClassInstanceProperties ("mEndOf_do_instructions") ;
    mProperty_mElseBranchInstructions.printNonNullClassInstanceProperties ("mElseBranchInstructions") ;
    mProperty_mEndOf_5F_else_5F_instructions.printNonNullClassInstanceProperties ("mEndOf_else_instructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readAccessWithInstructionAST * p = (const cPtr_readAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readAccessWithInstructionAST::objectCompare (const GALGAS_readAccessWithInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST::GALGAS_readAccessWithInstructionAST (const cPtr_readAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readAccessWithInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_lstring & inAttribute_mPrefix,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mReceiverExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                          const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                          const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mDoBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseBranchInstructions,
                                                                                          const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_mElseBranchInstructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_mElseBranchInstructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readAccessWithInstructionAST::readProperty_mPrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mPrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readAccessWithInstructionAST::readProperty_mKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOfKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOfKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readAccessWithInstructionAST::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::readProperty_mDoBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOf_5F_do_5F_instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readAccessWithInstructionAST::readProperty_mElseBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mElseBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readAccessWithInstructionAST::readProperty_mEndOf_5F_else_5F_instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readAccessWithInstructionAST * p = (cPtr_readAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @readAccessWithInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_readAccessWithInstructionAST::cPtr_readAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_lstring & in_mPrefix,
                                                                      const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                                                      const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                      const GALGAS_location & in_mEndOfKeyExpression,
                                                                      const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                      const GALGAS_semanticInstructionListAST & in_mDoBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseBranchInstructions,
                                                                      const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

void cPtr_readAccessWithInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString += "[@readAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_readAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_mElseBranchInstructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @readAccessWithInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST ("readAccessWithInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST result ;
  const GALGAS_readAccessWithInstructionAST * p = (const GALGAS_readAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @readWriteAccessWithInstructionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_readWriteAccessWithInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefix.printNonNullClassInstanceProperties ("mPrefix") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverIsPrefixedBySelf.printNonNullClassInstanceProperties ("mReceiverIsPrefixedBySelf") ;
    mProperty_mFieldList.printNonNullClassInstanceProperties ("mFieldList") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mKeyExpression.printNonNullClassInstanceProperties ("mKeyExpression") ;
    mProperty_mEndOfKeyExpression.printNonNullClassInstanceProperties ("mEndOfKeyExpression") ;
    mProperty_mSearchMethodNameForErrorSignaling.printNonNullClassInstanceProperties ("mSearchMethodNameForErrorSignaling") ;
    mProperty_m_5F_do_5F_Instructions.printNonNullClassInstanceProperties ("m_do_Instructions") ;
    mProperty_mEndOf_5F_do_5F_instructions.printNonNullClassInstanceProperties ("mEndOf_do_instructions") ;
    mProperty_m_5F_else_5F_Instructions.printNonNullClassInstanceProperties ("m_else_Instructions") ;
    mProperty_mEndOf_5F_else_5F_instructions.printNonNullClassInstanceProperties ("mEndOf_else_instructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readWriteAccessWithInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteAccessWithInstructionAST * p = (const cPtr_readWriteAccessWithInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefix.objectCompare (p->mProperty_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverIsPrefixedBySelf.objectCompare (p->mProperty_mReceiverIsPrefixedBySelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldList.objectCompare (p->mProperty_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfKeyExpression.objectCompare (p->mProperty_mEndOfKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_do_5F_Instructions.objectCompare (p->mProperty_m_5F_do_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_do_5F_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_Instructions.objectCompare (p->mProperty_m_5F_else_5F_Instructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_else_5F_instructions.objectCompare (p->mProperty_mEndOf_5F_else_5F_instructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readWriteAccessWithInstructionAST::objectCompare (const GALGAS_readWriteAccessWithInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST::GALGAS_readWriteAccessWithInstructionAST (const cPtr_readWriteAccessWithInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteAccessWithInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                    const GALGAS_lstring & inAttribute_mReceiverName,
                                                                                                    const GALGAS_bool & inAttribute_mReceiverIsPrefixedBySelf,
                                                                                                    const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                                    const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                                    const GALGAS_semanticExpressionAST & inAttribute_mKeyExpression,
                                                                                                    const GALGAS_location & inAttribute_mEndOfKeyExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_do_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instructions,
                                                                                                    const GALGAS_semanticInstructionListAST & inAttribute_m_5F_else_5F_Instructions,
                                                                                                    const GALGAS_location & inAttribute_mEndOf_5F_else_5F_instructions
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mReceiverName.isValid () && inAttribute_mReceiverIsPrefixedBySelf.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mEndOfKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_m_5F_do_5F_Instructions.isValid () && inAttribute_mEndOf_5F_do_5F_instructions.isValid () && inAttribute_m_5F_else_5F_Instructions.isValid () && inAttribute_mEndOf_5F_else_5F_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteAccessWithInstructionAST (inAttribute_mInstructionLocation, inAttribute_mPrefix, inAttribute_mReceiverName, inAttribute_mReceiverIsPrefixedBySelf, inAttribute_mFieldList, inAttribute_mEndOfReceiverExpression, inAttribute_mKeyExpression, inAttribute_mEndOfKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_m_5F_do_5F_Instructions, inAttribute_mEndOf_5F_do_5F_instructions, inAttribute_m_5F_else_5F_Instructions, inAttribute_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mPrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mPrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_readWriteAccessWithInstructionAST::readProperty_mReceiverIsPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mReceiverIsPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_readWriteAccessWithInstructionAST::readProperty_mFieldList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mFieldList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_readWriteAccessWithInstructionAST::readProperty_mKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOfKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOfKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_readWriteAccessWithInstructionAST::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::readProperty_m_5F_do_5F_Instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_m_5F_do_5F_Instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOf_5F_do_5F_instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_readWriteAccessWithInstructionAST::readProperty_m_5F_else_5F_Instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_m_5F_else_5F_Instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteAccessWithInstructionAST::readProperty_mEndOf_5F_else_5F_instructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteAccessWithInstructionAST * p = (cPtr_readWriteAccessWithInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteAccessWithInstructionAST) ;
    return p->mProperty_mEndOf_5F_else_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @readWriteAccessWithInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_readWriteAccessWithInstructionAST::cPtr_readWriteAccessWithInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstring & in_mPrefix,
                                                                                const GALGAS_lstring & in_mReceiverName,
                                                                                const GALGAS_bool & in_mReceiverIsPrefixedBySelf,
                                                                                const GALGAS_lstringlist & in_mFieldList,
                                                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                const GALGAS_semanticExpressionAST & in_mKeyExpression,
                                                                                const GALGAS_location & in_mEndOfKeyExpression,
                                                                                const GALGAS_lstring & in_mSearchMethodNameForErrorSignaling,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_do_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_do_5F_instructions,
                                                                                const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_Instructions,
                                                                                const GALGAS_location & in_mEndOf_5F_else_5F_instructions
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mPrefix (in_mPrefix),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mReceiverIsPrefixedBySelf (in_mReceiverIsPrefixedBySelf),
mProperty_mFieldList (in_mFieldList),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mEndOfKeyExpression (in_mEndOfKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_m_5F_do_5F_Instructions (in_m_5F_do_5F_Instructions),
mProperty_mEndOf_5F_do_5F_instructions (in_mEndOf_5F_do_5F_instructions),
mProperty_m_5F_else_5F_Instructions (in_m_5F_else_5F_Instructions),
mProperty_mEndOf_5F_else_5F_instructions (in_mEndOf_5F_else_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readWriteAccessWithInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

void cPtr_readWriteAccessWithInstructionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "[@readWriteAccessWithInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mPrefix.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverIsPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOfKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_m_5F_do_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_do_5F_instructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_m_5F_else_5F_Instructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mEndOf_5F_else_5F_instructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readWriteAccessWithInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_readWriteAccessWithInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefix, mProperty_mReceiverName, mProperty_mReceiverIsPrefixedBySelf, mProperty_mFieldList, mProperty_mEndOfReceiverExpression, mProperty_mKeyExpression, mProperty_mEndOfKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_m_5F_do_5F_Instructions, mProperty_mEndOf_5F_do_5F_instructions, mProperty_m_5F_else_5F_Instructions, mProperty_mEndOf_5F_else_5F_instructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @readWriteAccessWithInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ("readWriteAccessWithInstructionAST",
                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST result ;
  const GALGAS_readWriteAccessWithInstructionAST * p = (const GALGAS_readWriteAccessWithInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @readOnlyWithInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_readOnlyWithInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mObjectArrayCppName.printNonNullClassInstanceProperties ("mObjectArrayCppName") ;
    mProperty_mKeyExpression.printNonNullClassInstanceProperties ("mKeyExpression") ;
    mProperty_mSearchMethodNameForErrorSignaling.printNonNullClassInstanceProperties ("mSearchMethodNameForErrorSignaling") ;
    mProperty_mDoBranchInstructions.printNonNullClassInstanceProperties ("mDoBranchInstructions") ;
    mProperty_mElseBranchInstructions.printNonNullClassInstanceProperties ("mElseBranchInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readOnlyWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readOnlyWithInstructionForGeneration * p = (const cPtr_readOnlyWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectArrayCppName.objectCompare (p->mProperty_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readOnlyWithInstructionForGeneration::objectCompare (const GALGAS_readOnlyWithInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration::GALGAS_readOnlyWithInstructionForGeneration (const cPtr_readOnlyWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readOnlyWithInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration GALGAS_readOnlyWithInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                                          const GALGAS_string & inAttribute_mObjectArrayCppName,
                                                                                                          const GALGAS_semanticExpressionForGeneration & inAttribute_mKeyExpression,
                                                                                                          const GALGAS_string & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoBranchInstructions,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseBranchInstructions
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mObjectArrayCppName.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mElseBranchInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readOnlyWithInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverExpression, inAttribute_mObjectArrayCppName, inAttribute_mKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mElseBranchInstructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readOnlyWithInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::readProperty_mObjectArrayCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mObjectArrayCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readOnlyWithInstructionForGeneration::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mDoBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readOnlyWithInstructionForGeneration::readProperty_mElseBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readOnlyWithInstructionForGeneration * p = (cPtr_readOnlyWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readOnlyWithInstructionForGeneration) ;
    return p->mProperty_mElseBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @readOnlyWithInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_readOnlyWithInstructionForGeneration::cPtr_readOnlyWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                      const GALGAS_string & in_mObjectArrayCppName,
                                                                                      const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                      const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mObjectArrayCppName (in_mObjectArrayCppName),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readOnlyWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

void cPtr_readOnlyWithInstructionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString += "[@readOnlyWithInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readOnlyWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_readOnlyWithInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mObjectArrayCppName, mProperty_mKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @readOnlyWithInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ("readOnlyWithInstructionForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readOnlyWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readOnlyWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readOnlyWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration GALGAS_readOnlyWithInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration result ;
  const GALGAS_readOnlyWithInstructionForGeneration * p = (const GALGAS_readOnlyWithInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readOnlyWithInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readOnlyWithInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @readWriteWithInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_readWriteWithInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverVariableCppName.printNonNullClassInstanceProperties ("mReceiverVariableCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mObjectArrayCppName.printNonNullClassInstanceProperties ("mObjectArrayCppName") ;
    mProperty_mKeyExpression.printNonNullClassInstanceProperties ("mKeyExpression") ;
    mProperty_mSearchMethodNameForErrorSignaling.printNonNullClassInstanceProperties ("mSearchMethodNameForErrorSignaling") ;
    mProperty_mDoBranchInstructions.printNonNullClassInstanceProperties ("mDoBranchInstructions") ;
    mProperty_mElseBranchInstructions.printNonNullClassInstanceProperties ("mElseBranchInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_readWriteWithInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_readWriteWithInstructionForGeneration * p = (const cPtr_readWriteWithInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverVariableCppName.objectCompare (p->mProperty_mReceiverVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectArrayCppName.objectCompare (p->mProperty_mObjectArrayCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyExpression.objectCompare (p->mProperty_mKeyExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodNameForErrorSignaling.objectCompare (p->mProperty_mSearchMethodNameForErrorSignaling) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoBranchInstructions.objectCompare (p->mProperty_mDoBranchInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchInstructions.objectCompare (p->mProperty_mElseBranchInstructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_readWriteWithInstructionForGeneration::objectCompare (const GALGAS_readWriteWithInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration::GALGAS_readWriteWithInstructionForGeneration (const cPtr_readWriteWithInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_readWriteWithInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_string & inAttribute_mReceiverVariableCppName,
                                                                                                            const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                            const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                            const GALGAS_string & inAttribute_mObjectArrayCppName,
                                                                                                            const GALGAS_semanticExpressionForGeneration & inAttribute_mKeyExpression,
                                                                                                            const GALGAS_string & inAttribute_mSearchMethodNameForErrorSignaling,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mDoBranchInstructions,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseBranchInstructions
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mReceiverVariableCppName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mObjectArrayCppName.isValid () && inAttribute_mKeyExpression.isValid () && inAttribute_mSearchMethodNameForErrorSignaling.isValid () && inAttribute_mDoBranchInstructions.isValid () && inAttribute_mElseBranchInstructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_readWriteWithInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mReceiverVariableCppName, inAttribute_mReceiverType, inAttribute_mStructAttributeList, inAttribute_mObjectArrayCppName, inAttribute_mKeyExpression, inAttribute_mSearchMethodNameForErrorSignaling, inAttribute_mDoBranchInstructions, inAttribute_mElseBranchInstructions COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_readWriteWithInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mReceiverVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mReceiverVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_readWriteWithInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_readWriteWithInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mObjectArrayCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mObjectArrayCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mKeyExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mKeyExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_readWriteWithInstructionForGeneration::readProperty_mSearchMethodNameForErrorSignaling (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mSearchMethodNameForErrorSignaling ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mDoBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mDoBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_readWriteWithInstructionForGeneration::readProperty_mElseBranchInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_readWriteWithInstructionForGeneration * p = (cPtr_readWriteWithInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_readWriteWithInstructionForGeneration) ;
    return p->mProperty_mElseBranchInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @readWriteWithInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_readWriteWithInstructionForGeneration::cPtr_readWriteWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_string & in_mReceiverVariableCppName,
                                                                                        const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                        const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                        const GALGAS_string & in_mObjectArrayCppName,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                                                        const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation),
mProperty_mReceiverVariableCppName (in_mReceiverVariableCppName),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mStructAttributeList (in_mStructAttributeList),
mProperty_mObjectArrayCppName (in_mObjectArrayCppName),
mProperty_mKeyExpression (in_mKeyExpression),
mProperty_mSearchMethodNameForErrorSignaling (in_mSearchMethodNameForErrorSignaling),
mProperty_mDoBranchInstructions (in_mDoBranchInstructions),
mProperty_mElseBranchInstructions (in_mElseBranchInstructions) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_readWriteWithInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

void cPtr_readWriteWithInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString += "[@readWriteWithInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverVariableCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mObjectArrayCppName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mKeyExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mSearchMethodNameForErrorSignaling.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mDoBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElseBranchInstructions.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_readWriteWithInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_readWriteWithInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverVariableCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mObjectArrayCppName, mProperty_mKeyExpression, mProperty_mSearchMethodNameForErrorSignaling, mProperty_mDoBranchInstructions, mProperty_mElseBranchInstructions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @readWriteWithInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ("readWriteWithInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteWithInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteWithInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteWithInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration result ;
  const GALGAS_readWriteWithInstructionForGeneration * p = (const GALGAS_readWriteWithInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readWriteWithInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteWithInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalCallInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalCallInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_nonterminalCallInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonterminalCallInstruction * p = (const cPtr_nonterminalCallInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalName.objectCompare (p->mProperty_mNonterminalName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_nonterminalCallInstruction::objectCompare (const GALGAS_nonterminalCallInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction::GALGAS_nonterminalCallInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction::GALGAS_nonterminalCallInstruction (const cPtr_nonterminalCallInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalCallInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction GALGAS_nonterminalCallInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                      const GALGAS_lstring & inAttribute_mNonterminalName,
                                                                                      const GALGAS_lstring & inAttribute_mLabelName,
                                                                                      const GALGAS_actualParameterListAST & inAttribute_mActualParameterList,
                                                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mNonterminalName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonterminalCallInstruction (inAttribute_mInstructionLocation, inAttribute_mNonterminalName, inAttribute_mLabelName, inAttribute_mActualParameterList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_nonterminalCallInstruction::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_nonterminalCallInstruction::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_nonterminalCallInstruction::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListAST () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_nonterminalCallInstruction::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalCallInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mNonterminalName,
                                                                  const GALGAS_lstring & in_mLabelName,
                                                                  const GALGAS_actualParameterListAST & in_mActualParameterList,
                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mNonterminalName (in_mNonterminalName),
mProperty_mLabelName (in_mLabelName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult (in_mGrammarInstructionSyntaxDirectedTranslationResult) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nonterminalCallInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

void cPtr_nonterminalCallInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString += "[@nonterminalCallInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nonterminalCallInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalCallInstruction (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @nonterminalCallInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalCallInstruction ("nonterminalCallInstruction",
                                                   & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalCallInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalCallInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalCallInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction GALGAS_nonterminalCallInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction result ;
  const GALGAS_nonterminalCallInstruction * p = (const GALGAS_nonterminalCallInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalCallInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mActualInputParameterList.printNonNullClassInstanceProperties ("mActualInputParameterList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_terminalCheckInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalCheckInstruction * p = (const cPtr_terminalCheckInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualInputParameterList.objectCompare (p->mProperty_mActualInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingKeyList.objectCompare (p->mProperty_mIndexingKeyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_terminalCheckInstruction::objectCompare (const GALGAS_terminalCheckInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction::GALGAS_terminalCheckInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction::GALGAS_terminalCheckInstruction (const cPtr_terminalCheckInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction GALGAS_terminalCheckInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_lstring & inAttribute_mTerminalName,
                                                                                  const GALGAS_actualInputParameterListAST & inAttribute_mActualInputParameterList,
                                                                                  const GALGAS__32_lstringlist & inAttribute_mIndexingKeyList,
                                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTerminalName.isValid () && inAttribute_mActualInputParameterList.isValid () && inAttribute_mIndexingKeyList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalCheckInstruction (inAttribute_mInstructionLocation, inAttribute_mTerminalName, inAttribute_mActualInputParameterList, inAttribute_mIndexingKeyList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalCheckInstruction::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_terminalCheckInstruction * p = (cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_terminalCheckInstruction::readProperty_mActualInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualInputParameterListAST () ;
  }else{
    cPtr_terminalCheckInstruction * p = (cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    return p->mProperty_mActualInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS_terminalCheckInstruction::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__32_lstringlist () ;
  }else{
    cPtr_terminalCheckInstruction * p = (cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstruction::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstruction * p = (cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstruction::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstruction * p = (cPtr_terminalCheckInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstruction) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstruction::cPtr_terminalCheckInstruction (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_lstring & in_mTerminalName,
                                                              const GALGAS_actualInputParameterListAST & in_mActualInputParameterList,
                                                              const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                              COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTerminalName (in_mTerminalName),
mProperty_mActualInputParameterList (in_mActualInputParameterList),
mProperty_mIndexingKeyList (in_mIndexingKeyList),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken (in_mGrammarInstructionSyntaxDirectedTranslationToken) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_terminalCheckInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstruction ;
}

void cPtr_terminalCheckInstruction::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString += "[@terminalCheckInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mActualInputParameterList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_terminalCheckInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstruction (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mActualInputParameterList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstruction ("terminalCheckInstruction",
                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction GALGAS_terminalCheckInstruction::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction result ;
  const GALGAS_terminalCheckInstruction * p = (const GALGAS_terminalCheckInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mLexiqueIdentifier.printNonNullClassInstanceProperties ("mLexiqueIdentifier") ;
    mProperty_mTerminalCheckAssignementList.printNonNullClassInstanceProperties ("mTerminalCheckAssignementList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_terminalCheckInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalCheckInstructionForGeneration * p = (const cPtr_terminalCheckInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueIdentifier.objectCompare (p->mProperty_mLexiqueIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalCheckAssignementList.objectCompare (p->mProperty_mTerminalCheckAssignementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingKeyList.objectCompare (p->mProperty_mIndexingKeyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_terminalCheckInstructionForGeneration::objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration::GALGAS_terminalCheckInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration::GALGAS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration GALGAS_terminalCheckInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_lstring & inAttribute_mTerminalName,
                                                                                                            const GALGAS_string & inAttribute_mLexiqueIdentifier,
                                                                                                            const GALGAS_terminalCheckAssignementList & inAttribute_mTerminalCheckAssignementList,
                                                                                                            const GALGAS__32_lstringlist & inAttribute_mIndexingKeyList,
                                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTerminalName.isValid () && inAttribute_mLexiqueIdentifier.isValid () && inAttribute_mTerminalCheckAssignementList.isValid () && inAttribute_mIndexingKeyList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalCheckInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mTerminalName, inAttribute_mLexiqueIdentifier, inAttribute_mTerminalCheckAssignementList, inAttribute_mIndexingKeyList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, inAttribute_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalCheckInstructionForGeneration::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalCheckInstructionForGeneration::readProperty_mLexiqueIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mLexiqueIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckInstructionForGeneration::readProperty_mTerminalCheckAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_terminalCheckAssignementList () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalCheckAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS_terminalCheckInstructionForGeneration::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__32_lstringlist () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_lstring & in_mTerminalName,
                                                                                        const GALGAS_string & in_mLexiqueIdentifier,
                                                                                        const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                                                        const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mTerminalName (in_mTerminalName),
mProperty_mLexiqueIdentifier (in_mLexiqueIdentifier),
mProperty_mTerminalCheckAssignementList (in_mTerminalCheckAssignementList),
mProperty_mIndexingKeyList (in_mIndexingKeyList),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken (in_mGrammarInstructionSyntaxDirectedTranslationToken) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_terminalCheckInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

void cPtr_terminalCheckInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString += "[@terminalCheckInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mLexiqueIdentifier.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTerminalCheckAssignementList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_terminalCheckInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mLexiqueIdentifier, mProperty_mTerminalCheckAssignementList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ("terminalCheckInstructionForGeneration",
                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration GALGAS_terminalCheckInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration result ;
  const GALGAS_terminalCheckInstructionForGeneration * p = (const GALGAS_terminalCheckInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseLoopInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseLoopInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseLoopInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstructionForGeneration * p = (const cPtr_parseLoopInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseLoopInstructionForGeneration::objectCompare (const GALGAS_parseLoopInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration::GALGAS_parseLoopInstructionForGeneration (const cPtr_parseLoopInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration GALGAS_parseLoopInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mVariantExpression,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mWhileExpression,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseLoopInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mWhileExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseLoopInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseLoopInstructionForGeneration * p = (cPtr_parseLoopInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstructionForGeneration::cPtr_parseLoopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

void cPtr_parseLoopInstructionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "[@parseLoopInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseLoopInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mWhileExpression, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ("parseLoopInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration GALGAS_parseLoopInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration result ;
  const GALGAS_parseLoopInstructionForGeneration * p = (const GALGAS_parseLoopInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseLoopInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseWhenInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseWhenInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mWhenExpression.printNonNullClassInstanceProperties ("mWhenExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseWhenInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstructionForGeneration * p = (const cPtr_parseWhenInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenExpression.objectCompare (p->mProperty_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseWhenInstructionForGeneration::objectCompare (const GALGAS_parseWhenInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration::GALGAS_parseWhenInstructionForGeneration (const cPtr_parseWhenInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration GALGAS_parseWhenInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                    const GALGAS_semanticExpressionForGeneration & inAttribute_mWhenExpression,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList,
                                                                                                    const GALGAS_semanticInstructionListForGeneration & inAttribute_mElseInstructionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mWhenExpression.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseWhenInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mWhenExpression, inAttribute_mInstructionList, inAttribute_mElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_parseWhenInstructionForGeneration::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_parseWhenInstructionForGeneration * p = (cPtr_parseWhenInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstructionForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstructionForGeneration::cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mWhenExpression (in_mWhenExpression),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

void cPtr_parseWhenInstructionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString += "[@parseWhenInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseWhenInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mInstructionList, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ("parseWhenInstructionForGeneration",
                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration GALGAS_parseWhenInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration result ;
  const GALGAS_parseWhenInstructionForGeneration * p = (const GALGAS_parseWhenInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseWhenInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syntaxSendInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstructionForGeneration * p = (const cPtr_syntaxSendInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syntaxSendInstructionForGeneration::objectCompare (const GALGAS_syntaxSendInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration::GALGAS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_syntaxSendInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

void cPtr_syntaxSendInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString += "[@syntaxSendInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ("syntaxSendInstructionForGeneration",
                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration result ;
  const GALGAS_syntaxSendInstructionForGeneration * p = (const GALGAS_syntaxSendInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxSendInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalSymbolName.printNonNullClassInstanceProperties ("mTerminalSymbolName") ;
    mProperty_mTerminalSymbolIndex.printNonNullClassInstanceProperties ("mTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_terminalInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalInstructionForGrammarAnalysis * p = (const cPtr_terminalInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalSymbolName.objectCompare (p->mProperty_mTerminalSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalSymbolIndex.objectCompare (p->mProperty_mTerminalSymbolIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_terminalInstructionForGrammarAnalysis::objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis::GALGAS_terminalInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis::GALGAS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                            const GALGAS_lstring & inAttribute_mTerminalSymbolName,
                                                                                                            const GALGAS_uint & inAttribute_mTerminalSymbolIndex
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mTerminalSymbolName.isValid () && inAttribute_mTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mTerminalSymbolName, inAttribute_mTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                        const GALGAS_lstring & in_mTerminalSymbolName,
                                                                                        const GALGAS_uint & in_mTerminalSymbolIndex
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mProperty_mTerminalSymbolName (in_mTerminalSymbolName),
mProperty_mTerminalSymbolIndex (in_mTerminalSymbolIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_terminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

void cPtr_terminalInstructionForGrammarAnalysis::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString += "[@terminalInstructionForGrammarAnalysis:" ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTerminalSymbolName.description (ioString, inIndentation+1) ;
  ioString += ", " ;
  mProperty_mTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString += "]" ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_terminalInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mTerminalSymbolName, mProperty_mTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @terminalInstructionForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ("terminalInstructionForGrammarAnalysis",
                                                              & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis result ;
  const GALGAS_terminalInstructionForGrammarAnalysis * p = (const GALGAS_terminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

