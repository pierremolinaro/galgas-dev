#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
// @overridingAbstractExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionSetterName (),
mProperty_mOverridingExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingAbstractExtensionSetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionSetterName.printNonNullClassInstanceProperties ("mOverridingExtensionSetterName") ;
    mProperty_mOverridingExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionSetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingAbstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingAbstractExtensionSetterAST * p = (const cPtr_overridingAbstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionSetterName.objectCompare (p->mProperty_mOverridingExtensionSetterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionSetterFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingAbstractExtensionSetterAST::objectCompare (const GALGAS_overridingAbstractExtensionSetterAST & inOperand) const {
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

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::init_28_isPredefined_2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                  const GALGAS_lstring & in_mTypeName,
                                                                                                                                  const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                                                                                  const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingAbstractExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingAbstractExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mTypeName = in_mTypeName ;
  object->mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  object->mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
  const GALGAS_overridingAbstractExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST::GALGAS_overridingAbstractExtensionSetterAST (const cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                                         const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                                         const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionSetterAST (inAttribute_isPredefined, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingAbstractExtensionSetterAST::readProperty_mOverridingExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingAbstractExtensionSetterAST::readProperty_mOverridingExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mProperty_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingAbstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

void cPtr_overridingAbstractExtensionSetterAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingAbstractExtensionSetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingAbstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionSetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingAbstractExtensionSetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ("overridingAbstractExtensionSetterAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingAbstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingAbstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingAbstractExtensionSetterAST GALGAS_overridingAbstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractExtensionSetterAST result ;
  const GALGAS_overridingAbstractExtensionSetterAST * p = (const GALGAS_overridingAbstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingAbstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mOverridingExtensionGetterFormalInputParameterList (),
mProperty_mOverridingExtensionGetterReturnedTypeName (),
mProperty_mOverridingExtensionGetterReturnedVariableName (),
mProperty_mOverridingExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionGetterName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterName") ;
    mProperty_mOverridingExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterFormalInputParameterList") ;
    mProperty_mOverridingExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterReturnedTypeName") ;
    mProperty_mOverridingExtensionGetterReturnedVariableName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterReturnedVariableName") ;
    mProperty_mOverridingExtensionGetterInstructionList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterInstructionList") ;
    mProperty_mEndOfReaderLocation.printNonNullClassInstanceProperties ("mEndOfReaderLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingExtensionGetterAST * p = (const cPtr_overridingExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (p->mProperty_requiresSelfForAccessingProperty) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterName.objectCompare (p->mProperty_mOverridingExtensionGetterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mOverridingExtensionGetterFormalInputParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mOverridingExtensionGetterReturnedTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterReturnedVariableName.objectCompare (p->mProperty_mOverridingExtensionGetterReturnedVariableName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterInstructionList.objectCompare (p->mProperty_mOverridingExtensionGetterInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfReaderLocation.objectCompare (p->mProperty_mEndOfReaderLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingExtensionGetterAST::objectCompare (const GALGAS_overridingExtensionGetterAST & inOperand) const {
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

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::init_28_isPredefined_2C_requiresSelfForAccessingProperty_2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                                                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                                                                                                                                                      const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                                                                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                                                                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                                                                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                                                                                                                      const GALGAS_location & in_mEndOfReaderLocation,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  object->mProperty_mTypeName = in_mTypeName ;
  object->mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  object->mProperty_mOverridingExtensionGetterFormalInputParameterList = in_mOverridingExtensionGetterFormalInputParameterList ;
  object->mProperty_mOverridingExtensionGetterReturnedTypeName = in_mOverridingExtensionGetterReturnedTypeName ;
  object->mProperty_mOverridingExtensionGetterReturnedVariableName = in_mOverridingExtensionGetterReturnedVariableName ;
  object->mProperty_mOverridingExtensionGetterInstructionList = in_mOverridingExtensionGetterInstructionList ;
  object->mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
  const GALGAS_overridingExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST::GALGAS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                         const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                                         const GALGAS_lstring & inAttribute_mTypeName,
                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionGetterName,
                                                                                         const GALGAS_formalInputParameterListAST & inAttribute_mOverridingExtensionGetterFormalInputParameterList,
                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedTypeName,
                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionGetterReturnedVariableName,
                                                                                         const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionGetterInstructionList,
                                                                                         const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mOverridingExtensionGetterFormalInputParameterList.isValid () && inAttribute_mOverridingExtensionGetterReturnedTypeName.isValid () && inAttribute_mOverridingExtensionGetterReturnedVariableName.isValid () && inAttribute_mOverridingExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionGetterAST (inAttribute_isPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mOverridingExtensionGetterFormalInputParameterList, inAttribute_mOverridingExtensionGetterReturnedTypeName, inAttribute_mOverridingExtensionGetterReturnedVariableName, inAttribute_mOverridingExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overridingExtensionGetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mProperty_mOverridingExtensionGetterFormalInputParameterList (in_mOverridingExtensionGetterFormalInputParameterList),
mProperty_mOverridingExtensionGetterReturnedTypeName (in_mOverridingExtensionGetterReturnedTypeName),
mProperty_mOverridingExtensionGetterReturnedVariableName (in_mOverridingExtensionGetterReturnedVariableName),
mProperty_mOverridingExtensionGetterInstructionList (in_mOverridingExtensionGetterInstructionList),
mProperty_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

void cPtr_overridingExtensionGetterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionGetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mOverridingExtensionGetterFormalInputParameterList, mProperty_mOverridingExtensionGetterReturnedTypeName, mProperty_mOverridingExtensionGetterReturnedVariableName, mProperty_mOverridingExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionGetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ("overridingExtensionGetterAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionGetterAST GALGAS_overridingExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionGetterAST result ;
  const GALGAS_overridingExtensionGetterAST * p = (const GALGAS_overridingExtensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overrideExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mOverridingExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overrideExtensionGetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mBaseTypeName.printNonNullClassInstanceProperties ("mBaseTypeName") ;
    mProperty_mOverridingExtensionGetterName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mResultVarCppName.printNonNullClassInstanceProperties ("mResultVarCppName") ;
    mProperty_mOverridingExtensionGetterFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overrideExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overrideExtensionGetterForGeneration * p = (const cPtr_overrideExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBaseTypeName.objectCompare (p->mProperty_mBaseTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterName.objectCompare (p->mProperty_mOverridingExtensionGetterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultVarCppName.objectCompare (p->mProperty_mResultVarCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionGetterFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionGetterFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overrideExtensionGetterForGeneration::objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const {
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

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                                                                                      const GALGAS_string & in_mBaseTypeName,
                                                                                                                                                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                                                                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                                                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                                                                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_overrideExtensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overrideExtensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mReceiverType = in_mReceiverType ;
  object->mProperty_mBaseTypeName = in_mBaseTypeName ;
  object->mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  object->mProperty_mResultType = in_mResultType ;
  object->mProperty_mResultVarCppName = in_mResultVarCppName ;
  object->mProperty_mOverridingExtensionGetterFormalParameterList = in_mOverridingExtensionGetterFormalParameterList ;
  object->mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  object->mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
  const GALGAS_overrideExtensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration::GALGAS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideExtensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                         const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                         const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                         const GALGAS_string & inAttribute_mOverridingExtensionGetterName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                                         const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & inAttribute_mOverridingExtensionGetterFormalParameterList,
                                                                                                         const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                         const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mOverridingExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mOverridingExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overrideExtensionGetterForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mOverridingExtensionGetterName, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mOverridingExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_overrideExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_overrideExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overrideExtensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overrideExtensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overrideExtensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overrideExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mBaseTypeName,
                                                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mOverridingExtensionGetterName (in_mOverridingExtensionGetterName),
mProperty_mResultType (in_mResultType),
mProperty_mResultVarCppName (in_mResultVarCppName),
mProperty_mOverridingExtensionGetterFormalParameterList (in_mOverridingExtensionGetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overrideExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

void cPtr_overrideExtensionGetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overrideExtensionGetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overrideExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overrideExtensionGetterForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mOverridingExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overrideExtensionGetterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ("overrideExtensionGetterForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration result ;
  const GALGAS_overrideExtensionGetterForGeneration * p = (const GALGAS_overrideExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overrideExtensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_overrideExtensionGetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_overrideExtensionGetterForGeneration_2D_weak::GALGAS_overrideExtensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak & GALGAS_overrideExtensionGetterForGeneration_2D_weak::operator = (const GALGAS_overrideExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak::GALGAS_overrideExtensionGetterForGeneration_2D_weak (const GALGAS_overrideExtensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak GALGAS_overrideExtensionGetterForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration GALGAS_overrideExtensionGetterForGeneration_2D_weak::bang_overrideExtensionGetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overrideExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overrideExtensionGetterForGeneration) ;
      result = GALGAS_overrideExtensionGetterForGeneration ((cPtr_overrideExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overrideExtensionGetterForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ("overrideExtensionGetterForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideExtensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideExtensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideExtensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideExtensionGetterForGeneration_2D_weak GALGAS_overrideExtensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideExtensionGetterForGeneration_2D_weak result ;
  const GALGAS_overrideExtensionGetterForGeneration_2D_weak * p = (const GALGAS_overrideExtensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideExtensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList (),
mProperty_mOverridingExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionMethodName.printNonNullClassInstanceProperties ("mOverridingExtensionMethodName") ;
    mProperty_mOverridingExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionMethodFormalParameterList") ;
    mProperty_mOverridingExtensionMethodInstructionList.printNonNullClassInstanceProperties ("mOverridingExtensionMethodInstructionList") ;
    mProperty_mEndOfMethodLocation.printNonNullClassInstanceProperties ("mEndOfMethodLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingExtensionMethodAST * p = (const cPtr_overridingExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (p->mProperty_requiresSelfForAccessingProperty) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionMethodName.objectCompare (p->mProperty_mOverridingExtensionMethodName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionMethodFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionMethodFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionMethodInstructionList.objectCompare (p->mProperty_mOverridingExtensionMethodInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfMethodLocation.objectCompare (p->mProperty_mEndOfMethodLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingExtensionMethodAST::objectCompare (const GALGAS_overridingExtensionMethodAST & inOperand) const {
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

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::init_28_isPredefined_2C_requiresSelfForAccessingProperty_2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                                              const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                              const GALGAS_lstring & in_mTypeName,
                                                                                                                                                              const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                                                                                                              const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                                                                                              const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                                                                                                              const GALGAS_location & in_mEndOfMethodLocation,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  object->mProperty_mTypeName = in_mTypeName ;
  object->mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  object->mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
  object->mProperty_mOverridingExtensionMethodInstructionList = in_mOverridingExtensionMethodInstructionList ;
  object->mProperty_mEndOfMethodLocation = in_mEndOfMethodLocation ;
  const GALGAS_overridingExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST::GALGAS_overridingExtensionMethodAST (const cPtr_overridingExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                         const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                                         const GALGAS_lstring & inAttribute_mTypeName,
                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionMethodName,
                                                                                         const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionMethodFormalParameterList,
                                                                                         const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionMethodInstructionList,
                                                                                         const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionMethodName.isValid () && inAttribute_mOverridingExtensionMethodFormalParameterList.isValid () && inAttribute_mOverridingExtensionMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodAST (inAttribute_isPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mOverridingExtensionMethodName, inAttribute_mOverridingExtensionMethodFormalParameterList, inAttribute_mOverridingExtensionMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overridingExtensionMethodAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionMethodAST::readProperty_mEndOfMethodLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mEndOfMethodLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionMethodName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                      const GALGAS_location & in_mEndOfMethodLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionMethodName (in_mOverridingExtensionMethodName),
mProperty_mOverridingExtensionMethodFormalParameterList (in_mOverridingExtensionMethodFormalParameterList),
mProperty_mOverridingExtensionMethodInstructionList (in_mOverridingExtensionMethodInstructionList),
mProperty_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

void cPtr_overridingExtensionMethodAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, mProperty_mOverridingExtensionMethodInstructionList, mProperty_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionMethodAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ("overridingExtensionMethodAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodAST GALGAS_overridingExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodAST result ;
  const GALGAS_overridingExtensionMethodAST * p = (const GALGAS_overridingExtensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionMethodForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mBaseTypeName.printNonNullClassInstanceProperties ("mBaseTypeName") ;
    mProperty_mExtensionMethodName.printNonNullClassInstanceProperties ("mExtensionMethodName") ;
    mProperty_mExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mExtensionMethodFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingExtensionMethodForGeneration * p = (const cPtr_overridingExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBaseTypeName.objectCompare (p->mProperty_mBaseTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExtensionMethodName.objectCompare (p->mProperty_mExtensionMethodName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExtensionMethodFormalParameterList.objectCompare (p->mProperty_mExtensionMethodFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingExtensionMethodForGeneration::objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const {
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

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                                  const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                                  const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                                                                                  const GALGAS_string & in_mBaseTypeName,
                                                                                                                                                                                  const GALGAS_string & in_mExtensionMethodName,
                                                                                                                                                                                  const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                                                                                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionMethodForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionMethodForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mReceiverType = in_mReceiverType ;
  object->mProperty_mBaseTypeName = in_mBaseTypeName ;
  object->mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  object->mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  object->mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  object->mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
  const GALGAS_overridingExtensionMethodForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration::GALGAS_overridingExtensionMethodForGeneration (const cPtr_overridingExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                             const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                             const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                             const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                             const GALGAS_string & inAttribute_mExtensionMethodName,
                                                                                                             const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionMethodFormalParameterList,
                                                                                                             const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                             const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionMethodName.isValid () && inAttribute_mExtensionMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionMethodName, inAttribute_mExtensionMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_overridingExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionMethodForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionMethodForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionMethodName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mExtensionMethodName (in_mExtensionMethodName),
mProperty_mExtensionMethodFormalParameterList (in_mExtensionMethodFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

void cPtr_overridingExtensionMethodForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionMethodForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionMethodForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ("overridingExtensionMethodForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration result ;
  const GALGAS_overridingExtensionMethodForGeneration * p = (const GALGAS_overridingExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_overridingExtensionMethodForGeneration_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionMethodForGeneration_2D_weak::GALGAS_overridingExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak & GALGAS_overridingExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_overridingExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak::GALGAS_overridingExtensionMethodForGeneration_2D_weak (const GALGAS_overridingExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak GALGAS_overridingExtensionMethodForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration GALGAS_overridingExtensionMethodForGeneration_2D_weak::bang_overridingExtensionMethodForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodForGeneration) ;
      result = GALGAS_overridingExtensionMethodForGeneration ((cPtr_overridingExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionMethodForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ("overridingExtensionMethodForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionMethodForGeneration_2D_weak GALGAS_overridingExtensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionMethodForGeneration_2D_weak result ;
  const GALGAS_overridingExtensionMethodForGeneration_2D_weak * p = (const GALGAS_overridingExtensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionSetterName (),
mProperty_mOverridingExtensionSetterFormalParameterList (),
mProperty_mOverridingExtensionSetterInstructionList (),
mProperty_mEndOfSetterDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionSetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionSetterName.printNonNullClassInstanceProperties ("mOverridingExtensionSetterName") ;
    mProperty_mOverridingExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionSetterFormalParameterList") ;
    mProperty_mOverridingExtensionSetterInstructionList.printNonNullClassInstanceProperties ("mOverridingExtensionSetterInstructionList") ;
    mProperty_mEndOfSetterDeclarationLocation.printNonNullClassInstanceProperties ("mEndOfSetterDeclarationLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingExtensionSetterAST * p = (const cPtr_overridingExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_requiresSelfForAccessingProperty.objectCompare (p->mProperty_requiresSelfForAccessingProperty) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionSetterName.objectCompare (p->mProperty_mOverridingExtensionSetterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionSetterFormalParameterList.objectCompare (p->mProperty_mOverridingExtensionSetterFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridingExtensionSetterInstructionList.objectCompare (p->mProperty_mOverridingExtensionSetterInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfSetterDeclarationLocation.objectCompare (p->mProperty_mEndOfSetterDeclarationLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingExtensionSetterAST::objectCompare (const GALGAS_overridingExtensionSetterAST & inOperand) const {
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

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::init_28_isPredefined_2C_requiresSelfForAccessingProperty_2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                                              const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                              const GALGAS_lstring & in_mTypeName,
                                                                                                                                                              const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                                                                                                              const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                                                                                              const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                                                                                                              const GALGAS_location & in_mEndOfSetterDeclarationLocation,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  object->mProperty_mTypeName = in_mTypeName ;
  object->mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  object->mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
  object->mProperty_mOverridingExtensionSetterInstructionList = in_mOverridingExtensionSetterInstructionList ;
  object->mProperty_mEndOfSetterDeclarationLocation = in_mEndOfSetterDeclarationLocation ;
  const GALGAS_overridingExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST::GALGAS_overridingExtensionSetterAST (const cPtr_overridingExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                         const GALGAS_bool & inAttribute_requiresSelfForAccessingProperty,
                                                                                         const GALGAS_lstring & inAttribute_mTypeName,
                                                                                         const GALGAS_lstring & inAttribute_mOverridingExtensionSetterName,
                                                                                         const GALGAS_formalParameterListAST & inAttribute_mOverridingExtensionSetterFormalParameterList,
                                                                                         const GALGAS_semanticInstructionListAST & inAttribute_mOverridingExtensionSetterInstructionList,
                                                                                         const GALGAS_location & inAttribute_mEndOfSetterDeclarationLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_requiresSelfForAccessingProperty.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingExtensionSetterName.isValid () && inAttribute_mOverridingExtensionSetterFormalParameterList.isValid () && inAttribute_mOverridingExtensionSetterInstructionList.isValid () && inAttribute_mEndOfSetterDeclarationLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterAST (inAttribute_isPredefined, inAttribute_requiresSelfForAccessingProperty, inAttribute_mTypeName, inAttribute_mOverridingExtensionSetterName, inAttribute_mOverridingExtensionSetterFormalParameterList, inAttribute_mOverridingExtensionSetterInstructionList, inAttribute_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overridingExtensionSetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_overridingExtensionSetterAST::readProperty_mEndOfSetterDeclarationLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mEndOfSetterDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GALGAS_lstring & in_mTypeName,
                                                                      const GALGAS_lstring & in_mOverridingExtensionSetterName,
                                                                      const GALGAS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                      const GALGAS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                      const GALGAS_location & in_mEndOfSetterDeclarationLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (in_requiresSelfForAccessingProperty),
mProperty_mTypeName (in_mTypeName),
mProperty_mOverridingExtensionSetterName (in_mOverridingExtensionSetterName),
mProperty_mOverridingExtensionSetterFormalParameterList (in_mOverridingExtensionSetterFormalParameterList),
mProperty_mOverridingExtensionSetterInstructionList (in_mOverridingExtensionSetterInstructionList),
mProperty_mEndOfSetterDeclarationLocation (in_mEndOfSetterDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

void cPtr_overridingExtensionSetterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionSetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList, mProperty_mOverridingExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionSetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ("overridingExtensionSetterAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterAST GALGAS_overridingExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterAST result ;
  const GALGAS_overridingExtensionSetterAST * p = (const GALGAS_overridingExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mExtensionSetterName (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionSetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mBaseTypeName.printNonNullClassInstanceProperties ("mBaseTypeName") ;
    mProperty_mExtensionSetterName.printNonNullClassInstanceProperties ("mExtensionSetterName") ;
    mProperty_mExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mExtensionSetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_overridingExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_overridingExtensionSetterForGeneration * p = (const cPtr_overridingExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mBaseTypeName.objectCompare (p->mProperty_mBaseTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExtensionSetterName.objectCompare (p->mProperty_mExtensionSetterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExtensionSetterFormalParameterList.objectCompare (p->mProperty_mExtensionSetterFormalParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_overridingExtensionSetterForGeneration::objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const {
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

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                                  const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                                  const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                                                                                  const GALGAS_string & in_mBaseTypeName,
                                                                                                                                                                                  const GALGAS_string & in_mExtensionSetterName,
                                                                                                                                                                                  const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                                                                                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mReceiverType = in_mReceiverType ;
  object->mProperty_mBaseTypeName = in_mBaseTypeName ;
  object->mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  object->mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  object->mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  object->mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
  const GALGAS_overridingExtensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration::GALGAS_overridingExtensionSetterForGeneration (const cPtr_overridingExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                             const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                             const GALGAS_unifiedTypeMapEntry & inAttribute_mReceiverType,
                                                                                                             const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                             const GALGAS_string & inAttribute_mExtensionSetterName,
                                                                                                             const GALGAS_formalParameterListForGeneration & inAttribute_mExtensionSetterFormalParameterList,
                                                                                                             const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                             const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mExtensionSetterName.isValid () && inAttribute_mExtensionSetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mExtensionSetterName, inAttribute_mExtensionSetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_overridingExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_overridingExtensionSetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_overridingExtensionSetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                          const GALGAS_string & in_mExtensionSetterName,
                                                                                          const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mBaseTypeName (in_mBaseTypeName),
mProperty_mExtensionSetterName (in_mExtensionSetterName),
mProperty_mExtensionSetterFormalParameterList (in_mExtensionSetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_overridingExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

void cPtr_overridingExtensionSetterForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionSetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionSetterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ("overridingExtensionSetterForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration result ;
  const GALGAS_overridingExtensionSetterForGeneration * p = (const GALGAS_overridingExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overridingExtensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_overridingExtensionSetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_overridingExtensionSetterForGeneration_2D_weak::GALGAS_overridingExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak & GALGAS_overridingExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_overridingExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak::GALGAS_overridingExtensionSetterForGeneration_2D_weak (const GALGAS_overridingExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak GALGAS_overridingExtensionSetterForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration GALGAS_overridingExtensionSetterForGeneration_2D_weak::bang_overridingExtensionSetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_overridingExtensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterForGeneration) ;
      result = GALGAS_overridingExtensionSetterForGeneration ((cPtr_overridingExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overridingExtensionSetterForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ("overridingExtensionSetterForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overridingExtensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overridingExtensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingExtensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overridingExtensionSetterForGeneration_2D_weak GALGAS_overridingExtensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingExtensionSetterForGeneration_2D_weak result ;
  const GALGAS_overridingExtensionSetterForGeneration_2D_weak * p = (const GALGAS_overridingExtensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overridingExtensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum cPtr_predefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result_result ; // Returned variable
  result_result = GALGAS_typeKindEnum::class_func_otherType (SOURCE_FILE ("predefinedTypeAST.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualParameterListAST analyzeRoutineArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineArguments (const GALGAS_actualParameterListAST inObject,
                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                              const GALGAS_lstring constinArgument_inRoutineName,
                                              const GALGAS_string constinArgument_inInvokedEntityName,
                                              const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                              GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_actualParameterListAST temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas", 38)).objectCompare (temp_1.getter_count (SOURCE_FILE ("actual-parameters.galgas", 38)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_actualParameterListAST temp_2 = inObject ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (constinArgument_inRoutineSignature.getter_count (SOURCE_FILE ("actual-parameters.galgas", 40)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 40)).add_operation (temp_2.getter_count (SOURCE_FILE ("actual-parameters.galgas", 42)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 41)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 42)), fixItArray3  COMMA_SOURCE_FILE ("actual-parameters.galgas", 39)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 45)) ;
    GALGAS_stringset var_exclusiveVariableSet_2683 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("actual-parameters.galgas", 46)) ;
    const GALGAS_actualParameterListAST temp_4 = inObject ;
    cEnumerator_formalParameterSignature enumerator_2737 (constinArgument_inRoutineSignature, EnumerationOrder::up) ;
    cEnumerator_actualParameterListAST enumerator_2758 (temp_4, EnumerationOrder::up) ;
    while (enumerator_2737.hasCurrentObject () && enumerator_2758.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((cPtr_actualParameterAST *) enumerator_2758.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_2737.current (HERE).readProperty_mFormalSelector (), enumerator_2737.current (HERE).readProperty_mFormalArgumentType (), enumerator_2737.current (HERE).readProperty_mFormalArgumentPassingMode (), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_2683, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 48)) ;
      enumerator_2737.gotoNextObject () ;
      enumerator_2758.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @outputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputActualParameterExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
    mProperty_mEndOfExpressionLocation.printNonNullClassInstanceProperties ("mEndOfExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutputActualParameterExpression.objectCompare (p->mProperty_mOutputActualParameterExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (p->mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputActualParameterAST::objectCompare (const GALGAS_outputActualParameterAST & inOperand) const {
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

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::init_28__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                          const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                                                          const GALGAS_location & in_mEndOfExpressionLocation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  object->mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
  const GALGAS_outputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                 const GALGAS_semanticExpressionAST & inAttribute_mOutputActualParameterExpression,
                                                                                 const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputActualParameterExpression.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputActualParameterExpression, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_outputActualParameterAST::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outputActualParameterAST::readProperty_mEndOfExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                              const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mOutputActualParameterExpression (in_mOutputActualParameterExpression),
mProperty_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputActualParameterExpression, mProperty_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  const GALGAS_outputActualParameterAST * p = (const GALGAS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputInputActualParameterName (),
mProperty_mStructAttributeList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputInputActualParameterName.printNonNullClassInstanceProperties ("mOutputInputActualParameterName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputInputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutputInputActualParameterName.objectCompare (p->mProperty_mOutputInputActualParameterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStructAttributeList.objectCompare (p->mProperty_mStructAttributeList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputInputActualParameterAST::objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const {
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

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::init_28__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                    const GALGAS_lstring & in_mOutputInputActualParameterName,
                                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mOutputInputActualParameterName = in_mOutputInputActualParameterName ;
  object->mProperty_mStructAttributeList = in_mStructAttributeList ;
  const GALGAS_outputInputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                           const GALGAS_lstring & inAttribute_mOutputInputActualParameterName,
                                                                                           const GALGAS_lstringlist & inAttribute_mStructAttributeList
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputInputActualParameterName.isValid () && inAttribute_mStructAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputInputActualParameterName, inAttribute_mStructAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputActualParameterAST::readProperty_mOutputInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mOutputInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_outputInputActualParameterAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                        const GALGAS_lstring & in_mOutputInputActualParameterName,
                                                                        const GALGAS_lstringlist & in_mStructAttributeList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mOutputInputActualParameterName (in_mOutputInputActualParameterName),
mProperty_mStructAttributeList (in_mStructAttributeList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputInputActualParameterName, mProperty_mStructAttributeList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputInputActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  const GALGAS_outputInputActualParameterAST * p = (const GALGAS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputSingleJokerParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSingleJokerParameterAST::cPtr_outputInputSingleJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputSingleJokerParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputInputSingleJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputInputSingleJokerParameterAST::objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const {
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

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::init_28__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_outputInputSingleJokerParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputSingleJokerParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  const GALGAS_outputInputSingleJokerParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSingleJokerParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputSingleJokerParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputSingleJokerParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputSingleJokerParameterAST * p = (cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputSingleJokerParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSingleJokerParameterAST::cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputSingleJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

void cPtr_outputInputSingleJokerParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputSingleJokerParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputSingleJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputSingleJokerParameterAST (mProperty_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputInputSingleJokerParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ("outputInputSingleJokerParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  const GALGAS_outputInputSingleJokerParameterAST * p = (const GALGAS_outputInputSingleJokerParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputInputSelfParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputInputSelfParameterAST * p = (const cPtr_outputInputSelfParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputSelfParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputInputSelfParameterAST::objectCompare (const GALGAS_outputInputSelfParameterAST & inOperand) const {
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

GALGAS_outputInputSelfParameterAST::GALGAS_outputInputSelfParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_outputInputSelfParameterAST GALGAS_outputInputSelfParameterAST::init_28__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_outputInputSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  const GALGAS_outputInputSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST::GALGAS_outputInputSelfParameterAST (const cPtr_outputInputSelfParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST GALGAS_outputInputSelfParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSelfParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputSelfParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outputInputSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outputInputSelfParameterAST * p = (cPtr_outputInputSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

void cPtr_outputInputSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputSelfParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputSelfParameterAST (mProperty_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputInputSelfParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST ("outputInputSelfParameterAST",
                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST GALGAS_outputInputSelfParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSelfParameterAST result ;
  const GALGAS_outputInputSelfParameterAST * p = (const GALGAS_outputInputSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualExistingVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualExistingVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualExistingVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualExistingVariableParameterAST::objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const {
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

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::init_28__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                                        const GALGAS_lstring & in_mInputActualParameterName,
                                                                                                                        const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_inputActualExistingVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualExistingVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualExistingVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                               const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                               const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualExistingVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualParameterName, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputActualExistingVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualExistingVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_lstring & in_mInputActualParameterName,
                                                                                            const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputActualParameterName (in_mInputActualParameterName),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualExistingVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualExistingVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mProperty_mActualSelector, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualExistingVariableParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                                               & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  const GALGAS_inputActualExistingVariableParameterAST * p = (const GALGAS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfPropertyParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualSelfPropertyName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfPropertyParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualSelfPropertyName.printNonNullClassInstanceProperties ("mInputActualSelfPropertyName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualSelfPropertyParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualSelfPropertyParameterAST * p = (const cPtr_inputActualSelfPropertyParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputActualSelfPropertyName.objectCompare (p->mProperty_mInputActualSelfPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualSelfPropertyParameterAST::objectCompare (const GALGAS_inputActualSelfPropertyParameterAST & inOperand) const {
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

GALGAS_inputActualSelfPropertyParameterAST::GALGAS_inputActualSelfPropertyParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::init_28__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                                const GALGAS_lstring & in_mInputActualSelfPropertyName,
                                                                                                                const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfPropertyParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfPropertyParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mInputActualSelfPropertyName = in_mInputActualSelfPropertyName ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualSelfPropertyParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST::GALGAS_inputActualSelfPropertyParameterAST (const cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfPropertyParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                       const GALGAS_lstring & inAttribute_mInputActualSelfPropertyName,
                                                                                                       const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualSelfPropertyName.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualSelfPropertyParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualSelfPropertyName, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfPropertyParameterAST::readProperty_mInputActualSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mInputActualSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputActualSelfPropertyParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfPropertyParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                    const GALGAS_lstring & in_mInputActualSelfPropertyName,
                                                                                    const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputActualSelfPropertyName (in_mInputActualSelfPropertyName),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualSelfPropertyParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

void cPtr_inputActualSelfPropertyParameterAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfPropertyParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualSelfPropertyParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfPropertyParameterAST (mProperty_mActualSelector, mProperty_mInputActualSelfPropertyName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfPropertyParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ("inputActualSelfPropertyParameterAST",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfPropertyParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfPropertyParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfPropertyParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  const GALGAS_inputActualSelfPropertyParameterAST * p = (const GALGAS_inputActualSelfPropertyParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualSelfPropertyParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mSelfLocation (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mSelfLocation.printNonNullClassInstanceProperties ("mSelfLocation") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualSelfParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualSelfParameterAST * p = (const cPtr_inputActualSelfParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelfLocation.objectCompare (p->mProperty_mSelfLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualSelfParameterAST::objectCompare (const GALGAS_inputActualSelfParameterAST & inOperand) const {
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

GALGAS_inputActualSelfParameterAST::GALGAS_inputActualSelfParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualSelfParameterAST GALGAS_inputActualSelfParameterAST::init_28__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                const GALGAS_location & in_mSelfLocation,
                                                                                                const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mSelfLocation = in_mSelfLocation ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST::GALGAS_inputActualSelfParameterAST (const cPtr_inputActualSelfParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST GALGAS_inputActualSelfParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                       const GALGAS_location & inAttribute_mSelfLocation,
                                                                                       const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mSelfLocation.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualSelfParameterAST (inAttribute_mActualSelector, inAttribute_mSelfLocation, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_inputActualSelfParameterAST::readProperty_mSelfLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputActualSelfParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                    const GALGAS_location & in_mSelfLocation,
                                                                    const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mSelfLocation (in_mSelfLocation),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

void cPtr_inputActualSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualSelfParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfParameterAST (mProperty_mActualSelector, mProperty_mSelfLocation, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST ("inputActualSelfParameterAST",
                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST GALGAS_inputActualSelfParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfParameterAST result ;
  const GALGAS_inputActualSelfParameterAST * p = (const GALGAS_inputActualSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualNewVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputOptionalActualTypeName.objectCompare (p->mProperty_mInputOptionalActualTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualNewVariableParameterAST::objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const {
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

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::init_28__2C__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                                                  const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  object->mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualNewVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                     const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                     const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                     const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputActualNewVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mProperty_mInputActualParameterName (in_mInputActualParameterName),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewVariableParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  const GALGAS_inputActualNewVariableParameterAST * p = (const GALGAS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewConstantParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mMarkedAsUnused (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewConstantParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mMarkedAsUnused.printNonNullClassInstanceProperties ("mMarkedAsUnused") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualNewConstantParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputOptionalActualTypeName.objectCompare (p->mProperty_mInputOptionalActualTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputActualParameterName.objectCompare (p->mProperty_mInputActualParameterName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMarkedAsUnused.objectCompare (p->mProperty_mMarkedAsUnused) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualNewConstantParameterAST::objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const {
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

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::init_28__2C__2C__2C__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                                      const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                                                      const GALGAS_lstring & in_mInputActualParameterName,
                                                                                                                      const GALGAS_bool & in_mMarkedAsUnused,
                                                                                                                      const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewConstantParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewConstantParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  object->mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  object->mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualNewConstantParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                     const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                     const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                     const GALGAS_bool & inAttribute_mMarkedAsUnused,
                                                                                                     const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mMarkedAsUnused.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewConstantParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName, inAttribute_mMarkedAsUnused, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::readProperty_mMarkedAsUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputActualNewConstantParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewConstantParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_bool & in_mMarkedAsUnused,
                                                                                  const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mProperty_mInputActualParameterName (in_mInputActualParameterName),
mProperty_mMarkedAsUnused (in_mMarkedAsUnused),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewConstantParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mMarkedAsUnused, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewConstantParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  const GALGAS_inputActualNewConstantParameterAST * p = (const GALGAS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputSingleJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputSingleJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputSingleJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualSelector.objectCompare (p->mProperty_mActualSelector) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
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

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::init_28__2C__29_ (const GALGAS_lstring & in_mActualSelector,
                                                                                                          const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cPtr_inputSingleJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputSingleJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualSelector = in_mActualSelector ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputSingleJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::class_func_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                     const GALGAS_lstringlist & inAttribute_mPoisonedVarNameList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (inAttribute_mActualSelector, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputSingleJokerActualParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputSingleJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (in_mActualSelector),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputSingleJokerActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mProperty_mActualSelector, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputSingleJokerActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  const GALGAS_inputSingleJokerActualParameterAST * p = (const GALGAS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_isFilePrivate.printNonNullClassInstanceProperties ("isFilePrivate") ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mFormalArgumentListAST.printNonNullClassInstanceProperties ("mFormalArgumentListAST") ;
    mProperty_usefullProcedure.printNonNullClassInstanceProperties ("usefullProcedure") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_externProcedureDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_externProcedureDeclarationAST * p = (const cPtr_externProcedureDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isFilePrivate.objectCompare (p->mProperty_isFilePrivate) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentListAST.objectCompare (p->mProperty_mFormalArgumentListAST) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_usefullProcedure.objectCompare (p->mProperty_usefullProcedure) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_externProcedureDeclarationAST::objectCompare (const GALGAS_externProcedureDeclarationAST & inOperand) const {
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

GALGAS_externProcedureDeclarationAST::GALGAS_externProcedureDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::init_28_isPredefined_2C_isFilePrivate_2C__2C__2C_usefullProcedure_29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                                     const GALGAS_bool & in_isFilePrivate,
                                                                                                                                                     const GALGAS_lstring & in_mRoutineName,
                                                                                                                                                     const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                                                                     const GALGAS_bool & in_usefullProcedure,
                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_externProcedureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_isFilePrivate = in_isFilePrivate ;
  object->mProperty_mRoutineName = in_mRoutineName ;
  object->mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  object->mProperty_usefullProcedure = in_usefullProcedure ;
  const GALGAS_externProcedureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST::GALGAS_externProcedureDeclarationAST (const cPtr_externProcedureDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externProcedureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                           const GALGAS_bool & inAttribute_isFilePrivate,
                                                                                           const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                           const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentListAST,
                                                                                           const GALGAS_bool & inAttribute_usefullProcedure
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_isFilePrivate.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentListAST.isValid () && inAttribute_usefullProcedure.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externProcedureDeclarationAST (inAttribute_isPredefined, inAttribute_isFilePrivate, inAttribute_mRoutineName, inAttribute_mFormalArgumentListAST, inAttribute_usefullProcedure COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externProcedureDeclarationAST::readProperty_isFilePrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_isFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externProcedureDeclarationAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externProcedureDeclarationAST::readProperty_mFormalArgumentListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mFormalArgumentListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externProcedureDeclarationAST::readProperty_usefullProcedure (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_usefullProcedure ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_bool & in_isFilePrivate,
                                                                        const GALGAS_lstring & in_mRoutineName,
                                                                        const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                        const GALGAS_bool & in_usefullProcedure
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_isFilePrivate (in_isFilePrivate),
mProperty_mRoutineName (in_mRoutineName),
mProperty_mFormalArgumentListAST (in_mFormalArgumentListAST),
mProperty_usefullProcedure (in_usefullProcedure) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externProcedureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

void cPtr_externProcedureDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@externProcedureDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externProcedureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externProcedureDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externProcedureDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ("externProcedureDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST result ;
  const GALGAS_externProcedureDeclarationAST * p = (const GALGAS_externProcedureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_routinePrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_routinePrototypeDeclarationForGeneration * p = (const cPtr_routinePrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_routineMangledName.objectCompare (p->mProperty_routineMangledName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_routinePrototypeDeclarationForGeneration::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C_routineMangledName_2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                                        const GALGAS_string & in_routineMangledName,
                                                                                                                                                                                        const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_routinePrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_routineMangledName = in_routineMangledName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  const GALGAS_routinePrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                                 const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                 const GALGAS_string & inAttribute_routineMangledName,
                                                                                                                 const GALGAS_formalParameterListForGeneration & inAttribute_mFormalArgumentList
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_routineMangledName.isValid () && inAttribute_mFormalArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routinePrototypeDeclarationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_routineMangledName, inAttribute_mFormalArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routinePrototypeDeclarationForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                              const GALGAS_string & in_mImplementationCppFileName,
                                                                                              const GALGAS_string & in_routineMangledName,
                                                                                              const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_routineMangledName (in_routineMangledName),
mProperty_mFormalArgumentList (in_mFormalArgumentList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@routinePrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routinePrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @routinePrototypeDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  const GALGAS_routinePrototypeDeclarationForGeneration * p = (const GALGAS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::bang_routinePrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GALGAS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routinePrototypeDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ("routinePrototypeDeclarationForGeneration-weak",
                                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
    mProperty_mEndOfRoutineInstructionList.printNonNullClassInstanceProperties ("mEndOfRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_procDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_procDeclarationAST * p = (const cPtr_procDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isFilePrivate.objectCompare (p->mProperty_isFilePrivate) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineName.objectCompare (p->mProperty_mRoutineName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentListAST.objectCompare (p->mProperty_mFormalArgumentListAST) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_usefullProcedure.objectCompare (p->mProperty_usefullProcedure) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineInstructionList.objectCompare (p->mProperty_mRoutineInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfRoutineInstructionList.objectCompare (p->mProperty_mEndOfRoutineInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_procDeclarationAST::objectCompare (const GALGAS_procDeclarationAST & inOperand) const {
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

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (void) :
GALGAS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_procDeclarationAST GALGAS_procDeclarationAST::init_28_isPredefined_2C_isFilePrivate_2C__2C__2C_usefullProcedure_2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                       const GALGAS_bool & in_isFilePrivate,
                                                                                                                                       const GALGAS_lstring & in_mRoutineName,
                                                                                                                                       const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                                                       const GALGAS_bool & in_usefullProcedure,
                                                                                                                                       const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                                                                                       const GALGAS_location & in_mEndOfRoutineInstructionList,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_isFilePrivate = in_isFilePrivate ;
  object->mProperty_mRoutineName = in_mRoutineName ;
  object->mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  object->mProperty_usefullProcedure = in_usefullProcedure ;
  object->mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  object->mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
  const GALGAS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GALGAS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                     const GALGAS_bool & inAttribute_isFilePrivate,
                                                                     const GALGAS_lstring & inAttribute_mRoutineName,
                                                                     const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentListAST,
                                                                     const GALGAS_bool & inAttribute_usefullProcedure,
                                                                     const GALGAS_semanticInstructionListAST & inAttribute_mRoutineInstructionList,
                                                                     const GALGAS_location & inAttribute_mEndOfRoutineInstructionList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_isFilePrivate.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentListAST.isValid () && inAttribute_usefullProcedure.isValid () && inAttribute_mRoutineInstructionList.isValid () && inAttribute_mEndOfRoutineInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procDeclarationAST (inAttribute_isPredefined, inAttribute_isFilePrivate, inAttribute_mRoutineName, inAttribute_mFormalArgumentListAST, inAttribute_usefullProcedure, inAttribute_mRoutineInstructionList, inAttribute_mEndOfRoutineInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_bool & in_isFilePrivate,
                                                  const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                  const GALGAS_bool & in_usefullProcedure,
                                                  const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GALGAS_location & in_mEndOfRoutineInstructionList
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure COMMA_THERE),
mProperty_mRoutineInstructionList (in_mRoutineInstructionList),
mProperty_mEndOfRoutineInstructionList (in_mEndOfRoutineInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@procDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  const GALGAS_procDeclarationAST * p = (const GALGAS_procDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routineImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateStatic.printNonNullClassInstanceProperties ("mGenerateStatic") ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_routineImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_routineImplementationForGeneration * p = (const cPtr_routineImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_routineMangledName.objectCompare (p->mProperty_routineMangledName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateStatic.objectCompare (p->mProperty_mGenerateStatic) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRoutineInstructionList.objectCompare (p->mProperty_mRoutineInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_routineImplementationForGeneration::objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const {
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

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (void) :
GALGAS_routinePrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C_routineMangledName_2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                                    const GALGAS_string & in_routineMangledName,
                                                                                                                                                                                    const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                                                                    const GALGAS_bool & in_mGenerateStatic,
                                                                                                                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_routineImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routineImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_routineMangledName = in_routineMangledName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  object->mProperty_mGenerateStatic = in_mGenerateStatic ;
  object->mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  const GALGAS_routineImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GALGAS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                     const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                     const GALGAS_string & inAttribute_routineMangledName,
                                                                                                     const GALGAS_formalParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                     const GALGAS_bool & inAttribute_mGenerateStatic,
                                                                                                     const GALGAS_semanticInstructionListForGeneration & inAttribute_mRoutineInstructionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_routineMangledName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mGenerateStatic.isValid () && inAttribute_mRoutineInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routineImplementationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_routineMangledName, inAttribute_mFormalArgumentList, inAttribute_mGenerateStatic, inAttribute_mRoutineInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                  const GALGAS_string & in_mImplementationCppFileName,
                                                                                  const GALGAS_string & in_routineMangledName,
                                                                                  const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GALGAS_bool & in_mGenerateStatic,
                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_mImplementationCppFileName, in_routineMangledName, in_mFormalArgumentList COMMA_THERE),
mProperty_mGenerateStatic (in_mGenerateStatic),
mProperty_mRoutineInstructionList (in_mRoutineInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@routineImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routineImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @routineImplementationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  const GALGAS_routineImplementationForGeneration * p = (const GALGAS_routineImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineImplementationForGeneration_2D_weak::objectCompare (const GALGAS_routineImplementationForGeneration_2D_weak & inOperand) const {
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

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (void) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak & GALGAS_routineImplementationForGeneration_2D_weak::operator = (const GALGAS_routineImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (const GALGAS_routineImplementationForGeneration & inSource) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration_2D_weak::bang_routineImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GALGAS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineImplementationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ("routineImplementationForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  const GALGAS_routineImplementationForGeneration_2D_weak * p = (const GALGAS_routineImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputParameterVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterVariable) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
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

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputParameterVariable GALGAS_inputParameterVariable::init_28__29_ (const GALGAS_lstring & in_mActualParameterName,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualParameterName = in_mActualParameterName ;
  const GALGAS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::class_func_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                              & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  const GALGAS_inputParameterVariable * p = (const GALGAS_inputParameterVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputParameterDeclaredVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputParameterDeclaredVariable::objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const {
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

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::init_28__2C__29_ (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                  const GALGAS_lstring & in_mActualParameterName,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  object->mProperty_mActualParameterName = in_mActualParameterName ;
  const GALGAS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::class_func_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                             const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredVariable:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  const GALGAS_inputParameterDeclaredVariable * p = (const GALGAS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredConstant::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputParameterDeclaredConstant::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualParameterTypeName.objectCompare (p->mProperty_mActualParameterTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActualParameterName.objectCompare (p->mProperty_mActualParameterName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputParameterDeclaredConstant::objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const {
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

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::init_28__2C__29_ (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                  const GALGAS_lstring & in_mActualParameterName,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  object->mProperty_mActualParameterName = in_mActualParameterName ;
  const GALGAS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::class_func_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                             const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (in_mActualParameterTypeName),
mProperty_mActualParameterName (in_mActualParameterName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredConstant:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredConstant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  const GALGAS_inputParameterDeclaredConstant * p = (const GALGAS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_usefullFunc.printNonNullClassInstanceProperties ("usefullFunc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_externFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_externFunctionDeclarationAST * p = (const cPtr_externFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_usefullFunc.objectCompare (p->mProperty_usefullFunc) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_externFunctionDeclarationAST::objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const {
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

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::init_28_isPredefined_2C__2C__2C__2C_usefullFunc_29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                 const GALGAS_lstring & in_mFunctionName,
                                                                                                                                 const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                                                                 const GALGAS_lstring & in_mResultTypeName,
                                                                                                                                 const GALGAS_bool & in_usefullFunc,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  object->mProperty_mResultTypeName = in_mResultTypeName ;
  object->mProperty_usefullFunc = in_usefullFunc ;
  const GALGAS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                         const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                         const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                                         const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                                         const GALGAS_bool & inAttribute_usefullFunc
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_usefullFunc.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externFunctionDeclarationAST (inAttribute_isPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName, inAttribute_usefullFunc COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_lstring & in_mFunctionName,
                                                                      const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GALGAS_lstring & in_mResultTypeName,
                                                                      const GALGAS_bool & in_usefullFunc
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFormalArgumentList (in_mFormalArgumentList),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_usefullFunc (in_usefullFunc) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@externFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  const GALGAS_externFunctionDeclarationAST * p = (const GALGAS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_functionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_usefullFunc.objectCompare (p->mProperty_usefullFunc) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultVariableName.objectCompare (p->mProperty_mResultVariableName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfFunctionInstructionList.objectCompare (p->mProperty_mEndOfFunctionInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::init_28_isPredefined_2C__2C__2C__2C_usefullFunc_2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                     const GALGAS_lstring & in_mFunctionName,
                                                                                                                                     const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                                                                     const GALGAS_lstring & in_mResultTypeName,
                                                                                                                                     const GALGAS_bool & in_usefullFunc,
                                                                                                                                     const GALGAS_lstring & in_mResultVariableName,
                                                                                                                                     const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                                                                     const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                                                                                     const GALGAS_bool & in_mIsInternal,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  object->mProperty_mResultTypeName = in_mResultTypeName ;
  object->mProperty_usefullFunc = in_usefullFunc ;
  object->mProperty_mResultVariableName = in_mResultVariableName ;
  object->mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  object->mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  object->mProperty_mIsInternal = in_mIsInternal ;
  const GALGAS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                             const GALGAS_lstring & inAttribute_mFunctionName,
                                                                             const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                             const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                             const GALGAS_bool & inAttribute_usefullFunc,
                                                                             const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                             const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                             const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                             const GALGAS_bool & inAttribute_mIsInternal
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_usefullFunc.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (inAttribute_isPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName, inAttribute_usefullFunc, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GALGAS_lstring & in_mResultTypeName,
                                                          const GALGAS_bool & in_usefullFunc,
                                                          const GALGAS_lstring & in_mResultVariableName,
                                                          const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                          const GALGAS_bool & in_mIsInternal
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc COMMA_THERE),
mProperty_mResultVariableName (in_mResultVariableName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList),
mProperty_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mProperty_mIsInternal (in_mIsInternal) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  const GALGAS_functionDeclarationAST * p = (const GALGAS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_onceFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultTypeName.objectCompare (p->mProperty_mResultTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultVariableName.objectCompare (p->mProperty_mResultVariableName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfFunctionInstructionList.objectCompare (p->mProperty_mEndOfFunctionInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsUsefull.objectCompare (p->mProperty_mIsUsefull) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_onceFunctionDeclarationAST::objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const {
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

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::init_28_isPredefined_2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                              const GALGAS_lstring & in_mFunctionName,
                                                                                                                              const GALGAS_lstring & in_mResultTypeName,
                                                                                                                              const GALGAS_lstring & in_mResultVariableName,
                                                                                                                              const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                                                              const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                                                                              const GALGAS_bool & in_mIsInternal,
                                                                                                                              const GALGAS_bool & in_mIsUsefull,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mResultTypeName = in_mResultTypeName ;
  object->mProperty_mResultVariableName = in_mResultVariableName ;
  object->mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  object->mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  object->mProperty_mIsInternal = in_mIsInternal ;
  object->mProperty_mIsUsefull = in_mIsUsefull ;
  const GALGAS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                     const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                     const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                                     const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                                     const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                                     const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                                     const GALGAS_bool & inAttribute_mIsInternal,
                                                                                     const GALGAS_bool & inAttribute_mIsUsefull
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mIsUsefull.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationAST (inAttribute_isPredefined, inAttribute_mFunctionName, inAttribute_mResultTypeName, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal, inAttribute_mIsUsefull COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mFunctionName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_lstring & in_mResultVariableName,
                                                                  const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                  const GALGAS_bool & in_mIsInternal,
                                                                  const GALGAS_bool & in_mIsUsefull
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mResultTypeName (in_mResultTypeName),
mProperty_mResultVariableName (in_mResultVariableName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList),
mProperty_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mProperty_mIsInternal (in_mIsInternal),
mProperty_mIsUsefull (in_mIsUsefull) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  const GALGAS_onceFunctionDeclarationAST * p = (const GALGAS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mSourceFileAbsolutePath.printNonNullClassInstanceProperties ("mSourceFileAbsolutePath") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
    mProperty_mFilewrapperTextFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperTextFileExtensionList") ;
    mProperty_mFilewrapperBinaryFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperBinaryFileExtensionList") ;
    mProperty_mFilewrapperTemplateList.printNonNullClassInstanceProperties ("mFilewrapperTemplateList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_filewrapperDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsInternal.objectCompare (p->mProperty_mIsInternal) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSourceFileAbsolutePath.objectCompare (p->mProperty_mSourceFileAbsolutePath) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperPath.objectCompare (p->mProperty_mFilewrapperPath) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperTextFileExtensionList.objectCompare (p->mProperty_mFilewrapperTextFileExtensionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperBinaryFileExtensionList.objectCompare (p->mProperty_mFilewrapperBinaryFileExtensionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperTemplateList.objectCompare (p->mProperty_mFilewrapperTemplateList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_filewrapperDeclarationAST::objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const {
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

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::init_28_isPredefined_2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                            const GALGAS_bool & in_mIsInternal,
                                                                                                                            const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                                                                            const GALGAS_lstring & in_mFilewrapperName,
                                                                                                                            const GALGAS_lstring & in_mFilewrapperPath,
                                                                                                                            const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                                                                            const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                                                                            const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mIsInternal = in_mIsInternal ;
  object->mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  object->mProperty_mFilewrapperName = in_mFilewrapperName ;
  object->mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  object->mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  object->mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  object->mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
  const GALGAS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                   const GALGAS_bool & inAttribute_mIsInternal,
                                                                                   const GALGAS_string & inAttribute_mSourceFileAbsolutePath,
                                                                                   const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                   const GALGAS_lstring & inAttribute_mFilewrapperPath,
                                                                                   const GALGAS_lstringlist & inAttribute_mFilewrapperTextFileExtensionList,
                                                                                   const GALGAS_lstringlist & inAttribute_mFilewrapperBinaryFileExtensionList,
                                                                                   const GALGAS_filewrapperTemplateListAST & inAttribute_mFilewrapperTemplateList
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mSourceFileAbsolutePath.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid () && inAttribute_mFilewrapperTextFileExtensionList.isValid () && inAttribute_mFilewrapperBinaryFileExtensionList.isValid () && inAttribute_mFilewrapperTemplateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationAST (inAttribute_isPredefined, inAttribute_mIsInternal, inAttribute_mSourceFileAbsolutePath, inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath, inAttribute_mFilewrapperTextFileExtensionList, inAttribute_mFilewrapperBinaryFileExtensionList, inAttribute_mFilewrapperTemplateList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                const GALGAS_bool & in_mIsInternal,
                                                                const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                const GALGAS_lstring & in_mFilewrapperName,
                                                                const GALGAS_lstring & in_mFilewrapperPath,
                                                                const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mIsInternal (in_mIsInternal),
mProperty_mSourceFileAbsolutePath (in_mSourceFileAbsolutePath),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperPath (in_mFilewrapperPath),
mProperty_mFilewrapperTextFileExtensionList (in_mFilewrapperTextFileExtensionList),
mProperty_mFilewrapperBinaryFileExtensionList (in_mFilewrapperBinaryFileExtensionList),
mProperty_mFilewrapperTemplateList (in_mFilewrapperTemplateList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  const GALGAS_filewrapperDeclarationAST * p = (const GALGAS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_SyntaxComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationList.printNonNullClassInstanceProperties ("mNonterminalDeclarationList") ;
    mProperty_mRuleList.printNonNullClassInstanceProperties ("mRuleList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_galgas_33_SyntaxComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonterminalDeclarationList.objectCompare (p->mProperty_mNonterminalDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRuleList.objectCompare (p->mProperty_mRuleList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_galgas_33_SyntaxComponentAST::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::init_28_isPredefined_2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                          const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                                          const GALGAS_lstring & in_mLexiqueName,
                                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                                                                          const GALGAS_bool & in_mHasTranslateFeature,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  object->mProperty_mLexiqueName = in_mLexiqueName ;
  object->mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  object->mProperty_mRuleList = in_mRuleList ;
  object->mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  const GALGAS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                         const GALGAS_lstring & inAttribute_mSyntaxComponentName,
                                                                                         const GALGAS_lstring & inAttribute_mLexiqueName,
                                                                                         const GALGAS_nonterminalDeclarationListAST & inAttribute_mNonterminalDeclarationList,
                                                                                         const GALGAS_syntaxRuleListAST & inAttribute_mRuleList,
                                                                                         const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonterminalDeclarationList.isValid () && inAttribute_mRuleList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_SyntaxComponentAST (inAttribute_isPredefined, inAttribute_mSyntaxComponentName, inAttribute_mLexiqueName, inAttribute_mNonterminalDeclarationList, inAttribute_mRuleList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_lstring & in_mSyntaxComponentName,
                                                                      const GALGAS_lstring & in_mLexiqueName,
                                                                      const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                      const GALGAS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mProperty_mRuleList (in_mRuleList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3SyntaxComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  const GALGAS_galgas_33_SyntaxComponentAST * p = (const GALGAS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
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
mProperty_mHasTranslateFeature () {
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
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_galgas_33_GrammarComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (p->mProperty_mHasIndexing) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGrammarComponentName.objectCompare (p->mProperty_mGrammarComponentName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGrammarClass.objectCompare (p->mProperty_mGrammarClass) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSyntaxComponents.objectCompare (p->mProperty_mSyntaxComponents) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStartSymbolName.objectCompare (p->mProperty_mStartSymbolName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStartSymbolLabelList.objectCompare (p->mProperty_mStartSymbolLabelList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUnusedNonterminalList.objectCompare (p->mProperty_mUnusedNonterminalList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_galgas_33_GrammarComponentAST::objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const {
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

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::init_28_isPredefined_2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                                                        const GALGAS_lbool & in_mHasIndexing,
                                                                                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                                                                                        const GALGAS_lstring & in_mGrammarClass,
                                                                                                                                        const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                                                                        const GALGAS_lstring & in_mStartSymbolName,
                                                                                                                                        const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                                                                        const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                                                                                        const GALGAS_bool & in_mHasTranslateFeature,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mHasIndexing = in_mHasIndexing ;
  object->mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  object->mProperty_mGrammarClass = in_mGrammarClass ;
  object->mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  object->mProperty_mStartSymbolName = in_mStartSymbolName ;
  object->mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  object->mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  object->mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  const GALGAS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                           const GALGAS_lbool & inAttribute_mHasIndexing,
                                                                                           const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                           const GALGAS_lstring & inAttribute_mGrammarClass,
                                                                                           const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                                           const GALGAS_lstring & inAttribute_mStartSymbolName,
                                                                                           const GALGAS_nonTerminalLabelListAST & inAttribute_mStartSymbolLabelList,
                                                                                           const GALGAS_lstringlist & inAttribute_mUnusedNonterminalList,
                                                                                           const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mGrammarClass.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mStartSymbolLabelList.isValid () && inAttribute_mUnusedNonterminalList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_GrammarComponentAST (inAttribute_isPredefined, inAttribute_mHasIndexing, inAttribute_mGrammarComponentName, inAttribute_mGrammarClass, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mStartSymbolLabelList, inAttribute_mUnusedNonterminalList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_lbool & in_mHasIndexing,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mGrammarClass,
                                                                        const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                        const GALGAS_lstring & in_mStartSymbolName,
                                                                        const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GALGAS_bool & in_mHasTranslateFeature
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mGrammarComponentName (in_mGrammarComponentName),
mProperty_mGrammarClass (in_mGrammarClass),
mProperty_mSyntaxComponents (in_mSyntaxComponents),
mProperty_mStartSymbolName (in_mStartSymbolName),
mProperty_mStartSymbolLabelList (in_mStartSymbolLabelList),
mProperty_mUnusedNonterminalList (in_mUnusedNonterminalList),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
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
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @galgas3GrammarComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  const GALGAS_galgas_33_GrammarComponentAST * p = (const GALGAS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@functionSignature signature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_signature (const GALGAS_functionSignature & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_functionSignature temp_0 = inObject ;
  cEnumerator_functionSignature enumerator_1764 (temp_0, EnumerationOrder::up) ;
  while (enumerator_1764.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_1764.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 40)) ;
    if (enumerator_1764.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 42)) ;
    }
    enumerator_1764.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas", 44)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (void) :
mProperty_mInternalRoutineMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::~ GALGAS_routineMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::init_28__29_ (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setInitializedProperties (Compiler * /* inCompiler */) {
  mProperty_mInternalRoutineMap = GALGAS_internalRoutineMap::class_func_emptyMap (SOURCE_FILE ("routineMap.galgas", 64)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_internalRoutineMap & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::class_func_new (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineMap::objectCompare (const GALGAS_routineMap & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInternalRoutineMap.objectCompare (inOperand.mProperty_mInternalRoutineMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMap::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const GALGAS_routineMap inObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                GALGAS_actualParameterListAST inArgument_inActualParameterList,
                                GALGAS_formalParameterSignature & outArgument_outRoutineSignature,
                                GALGAS_bool & outArgument_outIsFilePrivate,
                                GALGAS_lstring & outArgument_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outIsFilePrivate.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineMap temp_1 = inObject ;
    GALGAS_routineArgumentMap var_routineArgumentMap_4102 ;
    const bool optionalResult4072 = temp_1.readProperty_mInternalRoutineMap ().optional_searchKey (constinArgument_inRoutineName.readProperty_string (), var_routineArgumentMap_4102) ;
    if (!optionalResult4072) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outIsFilePrivate = GALGAS_bool (false) ;
      outArgument_outRoutineSignature = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("routineMap.galgas", 99)) ;
      cEnumerator_routineArgumentMap enumerator_4208 (var_routineArgumentMap_4102, EnumerationOrder::up) ;
      while (enumerator_4208.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4208.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4208.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4208.gotoNextObject () ;
      }
      GALGAS_acceptableParameterList var_acceptableParameterList_4377 = GALGAS_acceptableParameterList::class_func_emptyList (SOURCE_FILE ("routineMap.galgas", 104)) ;
      cEnumerator_routineArgumentMap enumerator_4425 (var_routineArgumentMap_4102, EnumerationOrder::up) ;
      while (enumerator_4425.hasCurrentObject ()) {
        GALGAS_bool var_accept_4459 = GALGAS_bool (ComparisonKind::equal, inArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas", 106)).objectCompare (enumerator_4425.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas", 106)))) ;
        cEnumerator_formalParameterSignature enumerator_4572 (enumerator_4425.current (HERE).readProperty_mRoutineSignature (), EnumerationOrder::up) ;
        cEnumerator_actualParameterListAST enumerator_4592 (inArgument_inActualParameterList, EnumerationOrder::up) ;
        bool bool_2 = var_accept_4459.isValidAndTrue () ;
        if (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject () && bool_2) {
          while (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject () && bool_2) {
            var_accept_4459 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4592.current_mActualParameter (HERE).ptr (), enumerator_4572.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4572.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 108)) ;
            enumerator_4572.gotoNextObject () ;
            enumerator_4592.gotoNextObject () ;
            if (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject ()) {
              bool_2 = var_accept_4459.isValidAndTrue () ;
            }
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_accept_4459.boolEnum () ;
          if (kBoolTrue == test_3) {
            var_acceptableParameterList_4377.addAssign_operation (enumerator_4425.current (HERE).readProperty_mRoutineSignature (), enumerator_4425.current (HERE).readProperty_mIsFilePrivate ()  COMMA_SOURCE_FILE ("routineMap.galgas", 114)) ;
          }
        }
        enumerator_4425.gotoNextObject () ;
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_acceptableParameterList_4377.getter_count (SOURCE_FILE ("routineMap.galgas", 117)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_acceptableParameterList_4377.method_first (outArgument_outRoutineSignature, outArgument_outIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 118)) ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 119)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::equal, var_acceptableParameterList_4377.getter_count (SOURCE_FILE ("routineMap.galgas", 120)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas", 121)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_string var_s_5427 = GALGAS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          cEnumerator_acceptableParameterList enumerator_5524 (var_acceptableParameterList_4377, EnumerationOrder::up) ;
          while (enumerator_5524.hasCurrentObject ()) {
            var_s_5427.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5524.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 127)) ;
            enumerator_5524.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5427, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas", 129)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas", 134)) ;
    outArgument_outRoutineSignature.drop () ; // Release error dropped variable
    outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
    outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@routineMap locationForKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location extensionGetter_locationForKey (const GALGAS_routineMap & inObject,
                                                const GALGAS_string & constinArgument_inKey,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_routineMap temp_0 = inObject ;
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 143)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_castInExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_castInExpressionForGeneration * p = (const cPtr_castInExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCastType.objectCompare (p->mProperty_mCastType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_castInExpressionForGeneration::objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const {
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

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::init_28__2C__2C__2C__2C__29_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                            const GALGAS_location & in_mLocation,
                                                                                                            const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                            const GALGAS_string & in_mTypeName,
                                                                                                            const GALGAS_unifiedTypeMapEntry & in_mCastType,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mResultType = in_mResultType ;
  object->mProperty_mLocation = in_mLocation ;
  object->mProperty_mReceiverExpression = in_mReceiverExpression ;
  object->mProperty_mTypeName = in_mTypeName ;
  object->mProperty_mCastType = in_mCastType ;
  const GALGAS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mResultType,
                                                                                           const GALGAS_location & inAttribute_mLocation,
                                                                                           const GALGAS_semanticExpressionForGeneration & inAttribute_mReceiverExpression,
                                                                                           const GALGAS_string & inAttribute_mTypeName,
                                                                                           const GALGAS_unifiedTypeMapEntry & inAttribute_mCastType
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  if (inAttribute_mResultType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mReceiverExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mCastType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_castInExpressionForGeneration (inAttribute_mResultType, inAttribute_mLocation, inAttribute_mReceiverExpression, inAttribute_mTypeName, inAttribute_mCastType COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_string & in_mTypeName,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mCastType (in_mCastType) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @castInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  const GALGAS_castInExpressionForGeneration * p = (const GALGAS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutputActualParameterExpression.objectCompare (p->mProperty_mOutputActualParameterExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputActualParameterForGeneration::objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::init_28__2C__29_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                          const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  object->mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  const GALGAS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mFormalArgumentType,
                                                                                                     const GALGAS_semanticExpressionForGeneration & inAttribute_mOutputActualParameterExpression
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputActualParameterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputActualParameterExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputActualParameterExpression (in_mOutputActualParameterExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  const GALGAS_outputActualParameterForGeneration * p = (const GALGAS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentType.objectCompare (p->mProperty_mFormalArgumentType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInputActualCppName.objectCompare (p->mProperty_mInputActualCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPoisonedVarNameList.objectCompare (p->mProperty_mPoisonedVarNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputActualParameterForGeneration::objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const {
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

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::init_28__2C__2C__29_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                            const GALGAS_string & in_mInputActualCppName,
                                                                                                            const GALGAS__32_stringlist & in_mPoisonedVarNameList,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_inputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  object->mProperty_mInputActualCppName = in_mInputActualCppName ;
  object->mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
  const GALGAS_inputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mFormalArgumentType,
                                                                                                   const GALGAS_string & inAttribute_mInputActualCppName,
                                                                                                   const GALGAS__32_stringlist & inAttribute_mPoisonedVarNameList
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid () && inAttribute_mPoisonedVarNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName, inAttribute_mPoisonedVarNameList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inputActualParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_inputActualParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__32_stringlist () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                const GALGAS_string & in_mInputActualCppName,
                                                                                const GALGAS__32_stringlist & in_mPoisonedVarNameList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mInputActualCppName (in_mInputActualCppName),
mProperty_mPoisonedVarNameList (in_mPoisonedVarNameList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  const GALGAS_inputActualParameterForGeneration * p = (const GALGAS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mObjcCocoaHeader (),
mProperty_mObjcCocoaImplementation (),
mProperty_mSwiftCocoaImplementation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mSuperLexiqueName.printNonNullClassInstanceProperties ("mSuperLexiqueName") ;
    mProperty_mHeaderContents.printNonNullClassInstanceProperties ("mHeaderContents") ;
    mProperty_mCppContents.printNonNullClassInstanceProperties ("mCppContents") ;
    mProperty_mObjcCocoaHeader.printNonNullClassInstanceProperties ("mObjcCocoaHeader") ;
    mProperty_mObjcCocoaImplementation.printNonNullClassInstanceProperties ("mObjcCocoaImplementation") ;
    mProperty_mSwiftCocoaImplementation.printNonNullClassInstanceProperties ("mSwiftCocoaImplementation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_lexiqueDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSuperLexiqueName.objectCompare (p->mProperty_mSuperLexiqueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHeaderContents.objectCompare (p->mProperty_mHeaderContents) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCppContents.objectCompare (p->mProperty_mCppContents) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mObjcCocoaHeader.objectCompare (p->mProperty_mObjcCocoaHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mObjcCocoaImplementation.objectCompare (p->mProperty_mObjcCocoaImplementation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSwiftCocoaImplementation.objectCompare (p->mProperty_mSwiftCocoaImplementation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_lexiqueDeclarationForGeneration::objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                        const GALGAS_string & in_mLexiqueName,
                                                                                                                                                                        const GALGAS_string & in_mSuperLexiqueName,
                                                                                                                                                                        const GALGAS_string & in_mHeaderContents,
                                                                                                                                                                        const GALGAS_string & in_mCppContents,
                                                                                                                                                                        const GALGAS_string & in_mObjcCocoaHeader,
                                                                                                                                                                        const GALGAS_string & in_mObjcCocoaImplementation,
                                                                                                                                                                        const GALGAS_string & in_mSwiftCocoaImplementation,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_lexiqueDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mLexiqueName = in_mLexiqueName ;
  object->mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  object->mProperty_mHeaderContents = in_mHeaderContents ;
  object->mProperty_mCppContents = in_mCppContents ;
  object->mProperty_mObjcCocoaHeader = in_mObjcCocoaHeader ;
  object->mProperty_mObjcCocoaImplementation = in_mObjcCocoaImplementation ;
  object->mProperty_mSwiftCocoaImplementation = in_mSwiftCocoaImplementation ;
  const GALGAS_lexiqueDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                               const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                               const GALGAS_string & inAttribute_mLexiqueName,
                                                                                               const GALGAS_string & inAttribute_mSuperLexiqueName,
                                                                                               const GALGAS_string & inAttribute_mHeaderContents,
                                                                                               const GALGAS_string & inAttribute_mCppContents,
                                                                                               const GALGAS_string & inAttribute_mObjcCocoaHeader,
                                                                                               const GALGAS_string & inAttribute_mObjcCocoaImplementation,
                                                                                               const GALGAS_string & inAttribute_mSwiftCocoaImplementation
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mSuperLexiqueName.isValid () && inAttribute_mHeaderContents.isValid () && inAttribute_mCppContents.isValid () && inAttribute_mObjcCocoaHeader.isValid () && inAttribute_mObjcCocoaImplementation.isValid () && inAttribute_mSwiftCocoaImplementation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mLexiqueName, inAttribute_mSuperLexiqueName, inAttribute_mHeaderContents, inAttribute_mCppContents, inAttribute_mObjcCocoaHeader, inAttribute_mObjcCocoaImplementation, inAttribute_mSwiftCocoaImplementation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mSuperLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSuperLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mHeaderContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mHeaderContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mCppContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCppContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaHeader (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaHeader ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mSwiftCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSwiftCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                            const GALGAS_string & in_mLexiqueName,
                                                                            const GALGAS_string & in_mSuperLexiqueName,
                                                                            const GALGAS_string & in_mHeaderContents,
                                                                            const GALGAS_string & in_mCppContents,
                                                                            const GALGAS_string & in_mObjcCocoaHeader,
                                                                            const GALGAS_string & in_mObjcCocoaImplementation,
                                                                            const GALGAS_string & in_mSwiftCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mSuperLexiqueName (in_mSuperLexiqueName),
mProperty_mHeaderContents (in_mHeaderContents),
mProperty_mCppContents (in_mCppContents),
mProperty_mObjcCocoaHeader (in_mObjcCocoaHeader),
mProperty_mObjcCocoaImplementation (in_mObjcCocoaImplementation),
mProperty_mSwiftCocoaImplementation (in_mSwiftCocoaImplementation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwiftCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mLexiqueName, mProperty_mSuperLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mObjcCocoaHeader, mProperty_mObjcCocoaImplementation, mProperty_mSwiftCocoaImplementation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexiqueDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  const GALGAS_lexiqueDeclarationForGeneration * p = (const GALGAS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexiqueDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_lexiqueDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak & GALGAS_lexiqueDeclarationForGeneration_2D_weak::operator = (const GALGAS_lexiqueDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (const GALGAS_lexiqueDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration_2D_weak::bang_lexiqueDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GALGAS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ("lexiqueDeclarationForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  const GALGAS_lexiqueDeclarationForGeneration_2D_weak * p = (const GALGAS_lexiqueDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonTerminalMapForGrammarAnalysis.printNonNullClassInstanceProperties ("mNonTerminalMapForGrammarAnalysis") ;
    mProperty_mNonTerminalToAddList.printNonNullClassInstanceProperties ("mNonTerminalToAddList") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
    mProperty_mCppFileContents.printNonNullClassInstanceProperties ("mCppFileContents") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_grammarForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGrammarName.objectCompare (p->mProperty_mGrammarName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonTerminalMapForGrammarAnalysis.objectCompare (p->mProperty_mNonTerminalMapForGrammarAnalysis) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonTerminalToAddList.objectCompare (p->mProperty_mNonTerminalToAddList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSyntaxComponents.objectCompare (p->mProperty_mSyntaxComponents) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStartSymbolName.objectCompare (p->mProperty_mStartSymbolName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCppFileContents.objectCompare (p->mProperty_mCppFileContents) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_grammarForGeneration::objectCompare (const GALGAS_grammarForGeneration & inOperand) const {
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

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_grammarForGeneration GALGAS_grammarForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                      const GALGAS_string & in_mGrammarName,
                                                                                                                                                      const GALGAS_string & in_mLexiqueName,
                                                                                                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                                                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                                                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                                                                                      const GALGAS_string & in_mStartSymbolName,
                                                                                                                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                                                                                                                      const GALGAS_string & in_mCppFileContents,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_grammarForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mGrammarName = in_mGrammarName ;
  object->mProperty_mLexiqueName = in_mLexiqueName ;
  object->mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  object->mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  object->mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  object->mProperty_mStartSymbolName = in_mStartSymbolName ;
  object->mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  object->mProperty_mCppFileContents = in_mCppFileContents ;
  const GALGAS_grammarForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                         const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                         const GALGAS_string & inAttribute_mGrammarName,
                                                                         const GALGAS_string & inAttribute_mLexiqueName,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inAttribute_mNonTerminalMapForGrammarAnalysis,
                                                                         const GALGAS_nonTerminalToAddList & inAttribute_mNonTerminalToAddList,
                                                                         const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                         const GALGAS_string & inAttribute_mStartSymbolName,
                                                                         const GALGAS_bool & inAttribute_mHasTranslateFeature,
                                                                         const GALGAS_string & inAttribute_mCppFileContents
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonTerminalMapForGrammarAnalysis.isValid () && inAttribute_mNonTerminalToAddList.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mHasTranslateFeature.isValid () && inAttribute_mCppFileContents.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mGrammarName, inAttribute_mLexiqueName, inAttribute_mNonTerminalMapForGrammarAnalysis, inAttribute_mNonTerminalToAddList, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mHasTranslateFeature, inAttribute_mCppFileContents COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalToAddList () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GALGAS_bool & in_generateHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_string & in_mGrammarName,
                                                      const GALGAS_string & in_mLexiqueName,
                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                      const GALGAS_string & in_mStartSymbolName,
                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                      const GALGAS_string & in_mCppFileContents
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mGrammarName (in_mGrammarName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonTerminalMapForGrammarAnalysis (in_mNonTerminalMapForGrammarAnalysis),
mProperty_mNonTerminalToAddList (in_mNonTerminalToAddList),
mProperty_mSyntaxComponents (in_mSyntaxComponents),
mProperty_mStartSymbolName (in_mStartSymbolName),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature),
mProperty_mCppFileContents (in_mCppFileContents) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  const GALGAS_grammarForGeneration * p = (const GALGAS_grammarForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarForGeneration_2D_weak::objectCompare (const GALGAS_grammarForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak & GALGAS_grammarForGeneration_2D_weak::operator = (const GALGAS_grammarForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (const GALGAS_grammarForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration_2D_weak::bang_grammarForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarForGeneration) ;
      result = GALGAS_grammarForGeneration ((cPtr_grammarForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ("grammarForGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  const GALGAS_grammarForGeneration_2D_weak * p = (const GALGAS_grammarForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_functionPrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_functionPrototypeDeclarationForGeneration::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                            const GALGAS_string & in_mFunctionName,
                                                                                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                                                            const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_functionPrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  object->mProperty_mReturnType = in_mReturnType ;
  const GALGAS_functionPrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                                   const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                   const GALGAS_string & inAttribute_mFunctionName,
                                                                                                                   const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                                   const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mFormalArgumentList (in_mFormalArgumentList),
mProperty_mReturnType (in_mReturnType) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionPrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionPrototypeDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  const GALGAS_functionPrototypeDeclarationForGeneration * p = (const GALGAS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::bang_functionPrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GALGAS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionPrototypeDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ("functionPrototypeDeclarationForGeneration-weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_functionImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentList.objectCompare (p->mProperty_mFormalArgumentList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultVariableCppName.objectCompare (p->mProperty_mResultVariableCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_functionImplementationForGeneration::objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                        const GALGAS_string & in_mFunctionName,
                                                                                                                                                                        const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                                                        const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                                                                                        const GALGAS_string & in_mResultVariableCppName,
                                                                                                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_functionImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  object->mProperty_mReturnType = in_mReturnType ;
  object->mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  object->mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  const GALGAS_functionImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GALGAS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                       const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                       const GALGAS_string & inAttribute_mFunctionName,
                                                                                                       const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                       const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType,
                                                                                                       const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                       const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                    const GALGAS_string & in_mResultVariableCppName,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_mImplementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE),
mProperty_mResultVariableCppName (in_mResultVariableCppName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionImplementationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  const GALGAS_functionImplementationForGeneration * p = (const GALGAS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionImplementationForGeneration_2D_weak::objectCompare (const GALGAS_functionImplementationForGeneration_2D_weak & inOperand) const {
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

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (void) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak & GALGAS_functionImplementationForGeneration_2D_weak::operator = (const GALGAS_functionImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (const GALGAS_functionImplementationForGeneration & inSource) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration_2D_weak::bang_functionImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GALGAS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionImplementationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ("functionImplementationForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  const GALGAS_functionImplementationForGeneration_2D_weak * p = (const GALGAS_functionImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_onceFunctionDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionName.objectCompare (p->mProperty_mFunctionName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReturnType.objectCompare (p->mProperty_mReturnType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mResultVariableCppName.objectCompare (p->mProperty_mResultVariableCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionInstructionList.objectCompare (p->mProperty_mFunctionInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_onceFunctionDeclarationForGeneration::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mFunctionName = in_mFunctionName ;
  object->mProperty_mReturnType = in_mReturnType ;
  object->mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  object->mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  const GALGAS_onceFunctionDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                         const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                         const GALGAS_string & inAttribute_mFunctionName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & inAttribute_mReturnType,
                                                                                                         const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                         const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFunctionName (in_mFunctionName),
mProperty_mReturnType (in_mReturnType),
mProperty_mResultVariableCppName (in_mResultVariableCppName),
mProperty_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  const GALGAS_onceFunctionDeclarationForGeneration * p = (const GALGAS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_onceFunctionDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak & GALGAS_onceFunctionDeclarationForGeneration_2D_weak::operator = (const GALGAS_onceFunctionDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const GALGAS_onceFunctionDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration_2D_weak::bang_onceFunctionDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GALGAS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ("onceFunctionDeclarationForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  const GALGAS_onceFunctionDeclarationForGeneration_2D_weak * p = (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperAbsolutePath.printNonNullClassInstanceProperties ("mFilewrapperAbsolutePath") ;
    mProperty_mFilewrapperFileMap.printNonNullClassInstanceProperties ("mFilewrapperFileMap") ;
    mProperty_mFilewrapperDirectoryMap.printNonNullClassInstanceProperties ("mFilewrapperDirectoryMap") ;
    mProperty_mFilewrapperTemplateListForGeneration.printNonNullClassInstanceProperties ("mFilewrapperTemplateListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_filewrapperDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperName.objectCompare (p->mProperty_mFilewrapperName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperAbsolutePath.objectCompare (p->mProperty_mFilewrapperAbsolutePath) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperFileMap.objectCompare (p->mProperty_mFilewrapperFileMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperDirectoryMap.objectCompare (p->mProperty_mFilewrapperDirectoryMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFilewrapperTemplateListForGeneration.objectCompare (p->mProperty_mFilewrapperTemplateListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_filewrapperDeclarationForGeneration::objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__2C__2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                                        const GALGAS_string & in_mFilewrapperName,
                                                                                                                                                                        const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                                                                                                        const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                                                                                        const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                                                                                        const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mFilewrapperName = in_mFilewrapperName ;
  object->mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  object->mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  object->mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  object->mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
  const GALGAS_filewrapperDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                                       const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                       const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                       const GALGAS_string & inAttribute_mFilewrapperAbsolutePath,
                                                                                                       const GALGAS_wrapperFileMap & inAttribute_mFilewrapperFileMap,
                                                                                                       const GALGAS_wrapperDirectoryMap & inAttribute_mFilewrapperDirectoryMap,
                                                                                                       const GALGAS_filewrapperTemplateListForGeneration & inAttribute_mFilewrapperTemplateListForGeneration
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperAbsolutePath.isValid () && inAttribute_mFilewrapperFileMap.isValid () && inAttribute_mFilewrapperDirectoryMap.isValid () && inAttribute_mFilewrapperTemplateListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mFilewrapperName, inAttribute_mFilewrapperAbsolutePath, inAttribute_mFilewrapperFileMap, inAttribute_mFilewrapperDirectoryMap, inAttribute_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFilewrapperName,
                                                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mFilewrapperName (in_mFilewrapperName),
mProperty_mFilewrapperAbsolutePath (in_mFilewrapperAbsolutePath),
mProperty_mFilewrapperFileMap (in_mFilewrapperFileMap),
mProperty_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mProperty_mFilewrapperTemplateListForGeneration (in_mFilewrapperTemplateListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  const GALGAS_filewrapperDeclarationForGeneration * p = (const GALGAS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_filewrapperDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_filewrapperDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak & GALGAS_filewrapperDeclarationForGeneration_2D_weak::operator = (const GALGAS_filewrapperDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (const GALGAS_filewrapperDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration_2D_weak::bang_filewrapperDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GALGAS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ("filewrapperDeclarationForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  const GALGAS_filewrapperDeclarationForGeneration_2D_weak * p = (const GALGAS_filewrapperDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_programComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInclusionSet.printNonNullClassInstanceProperties ("mInclusionSet") ;
    mProperty_mImplementationString.printNonNullClassInstanceProperties ("mImplementationString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_programComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_programComponentForGeneration * p = (const cPtr_programComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_generateHeader.objectCompare (p->mProperty_generateHeader) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInclusionSet.objectCompare (p->mProperty_mInclusionSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplementationString.objectCompare (p->mProperty_mImplementationString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_programComponentForGeneration::objectCompare (const GALGAS_programComponentForGeneration & inOperand) const {
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

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::init_28_generateHeader_2C_mImplementationCppFileName_2C__2C__29_ (const GALGAS_bool & in_generateHeader,
                                                                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                                                                const GALGAS_stringset & in_mInclusionSet,
                                                                                                                                                const GALGAS_string & in_mImplementationString,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_programComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_programComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_generateHeader = in_generateHeader ;
  object->mProperty_mImplementationCppFileName = in_mImplementationCppFileName ;
  object->mProperty_mInclusionSet = in_mInclusionSet ;
  object->mProperty_mImplementationString = in_mImplementationString ;
  const GALGAS_programComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::class_func_new (const GALGAS_bool & inAttribute_generateHeader,
                                                                                           const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                           const GALGAS_stringset & inAttribute_mInclusionSet,
                                                                                           const GALGAS_string & inAttribute_mImplementationString
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  if (inAttribute_generateHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mInclusionSet.isValid () && inAttribute_mImplementationString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_programComponentForGeneration (inAttribute_generateHeader, inAttribute_mImplementationCppFileName, inAttribute_mInclusionSet, inAttribute_mImplementationString COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                        const GALGAS_stringset & in_mInclusionSet,
                                                                        const GALGAS_string & in_mImplementationString
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mInclusionSet (in_mInclusionSet),
mProperty_mImplementationString (in_mImplementationString) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@programComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_programComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_generateHeader, mProperty_mImplementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @programComponentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  const GALGAS_programComponentForGeneration * p = (const GALGAS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_programComponentForGeneration_2D_weak::objectCompare (const GALGAS_programComponentForGeneration_2D_weak & inOperand) const {
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

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak & GALGAS_programComponentForGeneration_2D_weak::operator = (const GALGAS_programComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (const GALGAS_programComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration_2D_weak::bang_programComponentForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GALGAS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @programComponentForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ("programComponentForGeneration-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  const GALGAS_programComponentForGeneration_2D_weak * p = (const GALGAS_programComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeGrammarInstructionSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primitiveTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
    mProperty_mCppDeclarationString.printNonNullClassInstanceProperties ("mCppDeclarationString") ;
    mProperty_isPackage.printNonNullClassInstanceProperties ("isPackage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_primitiveTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_primitiveTypeForGeneration * p = (const cPtr_primitiveTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCppDeclarationString.objectCompare (p->mProperty_mCppDeclarationString) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPackage.objectCompare (p->mProperty_isPackage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_primitiveTypeForGeneration::objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const {
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

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::init_28__2C__2C__2C_isPackage_29_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                                           const GALGAS_string & in_mPredefinedTypeName,
                                                                                                           const GALGAS_string & in_mCppDeclarationString,
                                                                                                           const GALGAS_bool & in_isPackage,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_primitiveTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_primitiveTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  object->mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  object->mProperty_isPackage = in_isPackage ;
  const GALGAS_primitiveTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mSelfTypeEntry,
                                                                                     const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                     const GALGAS_string & inAttribute_mCppDeclarationString,
                                                                                     const GALGAS_bool & inAttribute_isPackage
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mCppDeclarationString.isValid () && inAttribute_isPackage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primitiveTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mPredefinedTypeName, inAttribute_mCppDeclarationString, inAttribute_isPackage COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveTypeForGeneration::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveTypeForGeneration::readProperty_mCppDeclarationString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mCppDeclarationString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primitiveTypeForGeneration::readProperty_isPackage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_isPackage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_string & in_mCppDeclarationString,
                                                                  const GALGAS_bool & in_isPackage
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mPredefinedTypeName (in_mPredefinedTypeName),
mProperty_mCppDeclarationString (in_mCppDeclarationString),
mProperty_isPackage (in_isPackage) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@primitiveTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppDeclarationString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isPackage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primitiveTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mPredefinedTypeName, mProperty_mCppDeclarationString, mProperty_isPackage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @primitiveTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  const GALGAS_primitiveTypeForGeneration * p = (const GALGAS_primitiveTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primitiveTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_primitiveTypeForGeneration_2D_weak::objectCompare (const GALGAS_primitiveTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak & GALGAS_primitiveTypeForGeneration_2D_weak::operator = (const GALGAS_primitiveTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (const GALGAS_primitiveTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration_2D_weak::bang_primitiveTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primitiveTypeForGeneration) ;
      result = GALGAS_primitiveTypeForGeneration ((cPtr_primitiveTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primitiveTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ("primitiveTypeForGeneration-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  const GALGAS_primitiveTypeForGeneration_2D_weak * p = (const GALGAS_primitiveTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primitiveTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarManager::~ GALGAS_localVarManager (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::init_28__29_ (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mCurrentManager = GALGAS_currentVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 400)) ;
  mProperty_mOverridenManagers = GALGAS_openedOverrideList::class_func_emptyList (SOURCE_FILE ("variable-manager.galgas", 401)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarManager::GALGAS_localVarManager (const GALGAS_currentVarManager & inOperand0,
                                                const GALGAS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::class_func_new (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVarManager::objectCompare (const GALGAS_localVarManager & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCurrentManager.objectCompare (inOperand.mProperty_mCurrentManager) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOverridenManagers.objectCompare (inOperand.mProperty_mOverridenManagers) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarManager::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVarManager generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarManager GALGAS_localVarManager::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVarManager result ;
  const GALGAS_localVarManager * p = (const GALGAS_localVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GALGAS_localVariableAttributes temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_localVariableAttributes::class_func_none (SOURCE_FILE ("variable-manager.galgas", 53)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 53)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 53)) COMMA_SOURCE_FILE ("variable-manager.galgas", 53)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GALGAS_localVarManager & ioObject,
                                              const GALGAS_lstring constinArgument_inVarName,
                                              const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                              const GALGAS_string constinArgument_inCppName,
                                              const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 71)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 71)) COMMA_SOURCE_FILE ("variable-manager.galgas", 71)), GALGAS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 66)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GALGAS_localVarManager & ioObject,
                                                     const GALGAS_lstring constinArgument_inVarName,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GALGAS_string constinArgument_inCppName,
                                                     const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 87)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 87)) COMMA_SOURCE_FILE ("variable-manager.galgas", 87)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 82)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 103)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 103)) COMMA_SOURCE_FILE ("variable-manager.galgas", 103)), GALGAS_localVarValuation::class_func_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                const GALGAS_lstring constinArgument_inVarName,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_string constinArgument_inCppName,
                                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 121)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas", 121)).operator_or (GALGAS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas", 121)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                const GALGAS_lstring constinArgument_inVarName,
                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                const GALGAS_string constinArgument_inCppName,
                                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 137)).operator_or (GALGAS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 137)) COMMA_SOURCE_FILE ("variable-manager.galgas", 137)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 132)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                        const GALGAS_lstring constinArgument_inVarName,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                        const GALGAS_string constinArgument_inCppName,
                                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)).operator_or (GALGAS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas", 153)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GALGAS_localVarManager & ioObject,
                                                        const GALGAS_lstring constinArgument_inVarName,
                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                        const GALGAS_string constinArgument_inCppName,
                                                        const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 169)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas", 169)).operator_or (GALGAS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas", 169)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 164)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                 const GALGAS_lstring constinArgument_inVarName,
                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                 const GALGAS_string constinArgument_inCppName,
                                                 const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)).operator_or (GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas", 187)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas", 187)), GALGAS_localVarValuation::class_func_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_localVarManager & ioObject,
                                                                      const GALGAS_lstring constinArgument_inVarName,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_string constinArgument_inCppName,
                                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 205)).operator_or (GALGAS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 205)) COMMA_SOURCE_FILE ("variable-manager.galgas", 205)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GALGAS_localVarManager & ioObject,
                                                      const GALGAS_lstring constinArgument_inVarName,
                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                      const GALGAS_string constinArgument_inCppName,
                                                      const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 221)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 221)) COMMA_SOURCE_FILE ("variable-manager.galgas", 221)).operator_or (GALGAS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas", 221)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 216)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                               const GALGAS_string constinArgument_inCppName,
                                               const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 240)).operator_or (GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas", 240)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas", 241)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GALGAS_localVarManager & ioObject,
                                            const GALGAS_lstring constinArgument_inVarName,
                                            const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                            const GALGAS_string constinArgument_inCppName,
                                            const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 257)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 257)) COMMA_SOURCE_FILE ("variable-manager.galgas", 257)), GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (GALGAS_localVarManager & ioObject,
                                                    const GALGAS_string constinArgument_inPropertyName,
                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                    const GALGAS_string constinArgument_inCppName,
                                                    const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                    const GALGAS_bool constinArgument_inInitialized,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_varName_12483 = GALGAS_lstring::class_func_new (GALGAS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 273)), constinArgument_inErrorLocation, inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 273)) ;
  {
  GALGAS_localVarValuation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 281)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_localVarValuation::class_func_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 281)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_12483, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 279)).operator_or (GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas", 279)).operator_or (GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas", 280)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 274)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GALGAS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 290))  COMMA_SOURCE_FILE ("variable-manager.galgas", 290)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GALGAS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas", 296))  COMMA_SOURCE_FILE ("variable-manager.galgas", 296)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GALGAS_localVarManager & ioObject,
                                    const GALGAS_location /* constinArgument_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarManager temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas", 302)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_overrideKind var_savedManager_13726 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13726, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 303)) ;
      }
      switch (var_savedManager_13726.enumValue ()) {
      case GALGAS_overrideKind::kNotBuilt:
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_13840 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_13726.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_13826_savedManager = extractPtr_13840->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_13986 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_13726.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_13905_savedManager = extractPtr_13986->mAssociatedValue0 ;
          const GALGAS_currentVarManager extractedValue_13937_referenceManager = extractPtr_13986->mAssociatedValue1 ;
          ioObject.mProperty_mCurrentManager = extractedValue_13937_referenceManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_repeatOverride:
        {
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GALGAS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 316)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GALGAS_localVarManager & ioObject,
                                  const GALGAS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 322)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarManager temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas", 324)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_overrideKind var_savedManager_14554 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_14554, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 325)) ;
      }
      switch (var_savedManager_14554.enumValue ()) {
      case GALGAS_overrideKind::kNotBuilt:
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideFirstBranch:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * extractPtr_14824 = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) (var_savedManager_14554.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_14647_savedManager = extractPtr_14824->mAssociatedValue0 ;
          const GALGAS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14647_savedManager, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas", 328))  COMMA_SOURCE_FILE ("variable-manager.galgas", 328)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14647_savedManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_selectOverrideNextBranches:
        {
          const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * extractPtr_15277 = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) (var_savedManager_14554.unsafePointer ()) ;
          const GALGAS_currentVarManager extractedValue_14893_savedManager = extractPtr_15277->mAssociatedValue0 ;
          const GALGAS_currentVarManager extractedValue_14925_referenceManager = extractPtr_15277->mAssociatedValue1 ;
          const GALGAS_localVarManager temp_3 = ioObject ;
          GALGAS_currentVarManager var_newReferenceManager_14955 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_14955, extractedValue_14925_referenceManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 332)) ;
          }
          ioObject.mProperty_mOverridenManagers.addAssign_operation (GALGAS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14893_savedManager, var_newReferenceManager_14955  COMMA_SOURCE_FILE ("variable-manager.galgas", 333))  COMMA_SOURCE_FILE ("variable-manager.galgas", 333)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14893_savedManager ;
        }
        break ;
      case GALGAS_overrideKind::kEnum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.addAssign_operation (var_savedManager_14554  COMMA_SOURCE_FILE ("variable-manager.galgas", 336)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GALGAS_localVarManager inObject,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 416)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_localVarManager & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 442)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 497)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GALGAS_localVarManager & ioObject,
                                           const GALGAS_lstring constinArgument_inVarName,
                                           GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                           GALGAS_string & outArgument_outCppName,
                                           GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 531)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GALGAS_localVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 643)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GALGAS_localVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                               GALGAS_string & outArgument_outCppName,
                                               GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 741)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GALGAS_localVarManager inObject,
                                           const GALGAS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 894)) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::GALGAS_unifiedTypeDefinition (void) :
mProperty_typeName (),
mProperty_isPredefined (),
mProperty_isConcrete (),
mProperty_superType (),
mProperty_typeKind (),
mProperty_supportCollectionValue (),
mProperty_allTypedPropertyList (),
mProperty_propertyMap (),
mProperty_currentTypedPropertyList (),
mProperty_initializerMap (),
mProperty_classFunctionMap (),
mProperty_getterMap (),
mProperty_setterMap (),
mProperty_instanceMethodMap (),
mProperty_classMethodMap (),
mProperty_optionalMethodMap (),
mProperty_enumerationDescriptorList (),
mProperty_mHandledOperatorFlags (),
mProperty_mAddAssignOperatorArguments (),
mProperty_mMapSearchMethodList (),
mProperty_mMapEntrySearchConstructorList (),
mProperty_generateHeaderInSeparateFile (),
mProperty_mTypeForEnumeratedElement (),
mProperty_defaultConstructorName (),
mProperty_mHeaderFileName (),
mProperty_headerKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::~ GALGAS_unifiedTypeDefinition (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::init_28_typeName_2C_isPredefined_2C_isConcrete_2C_superType_2C_typeKind_2C_supportCollectionValue_2C_allTypedPropertyList_2C_propertyMap_2C_currentTypedPropertyList_2C_initializerMap_2C_classFunctionMap_2C_getterMap_2C_setterMap_2C_instanceMethodMap_2C_classMethodMap_2C_optionalMethodMap_2C_enumerationDescriptorList_2C__2C__2C__2C__2C_generateHeaderInSeparateFile_2C__2C_defaultConstructorName_2C__2C_headerKind_29_ (const GALGAS_lstring & in_typeName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_bool & in_isPredefined,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_bool & in_isConcrete,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_unifiedTypeMapEntry & in_superType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_typeKindEnum & in_typeKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_bool & in_supportCollectionValue,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_propertyMap & in_propertyMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_typedPropertyList & in_currentTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_initializerMap & in_initializerMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_classFunctionMap & in_classFunctionMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_getterMap & in_getterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_setterMap & in_setterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_instanceMethodMap & in_instanceMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_classMethodMap & in_classMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_optionalMethodMap & in_optionalMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_enumerationDescriptorList & in_enumerationDescriptorList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_operators & in_mHandledOperatorFlags,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_unifiedTypeMapEntry & in_mTypeForEnumeratedElement,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_string & in_defaultConstructorName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_string & in_mHeaderFileName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              const GALGAS_headerKind & in_headerKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_isPredefined = in_isPredefined ;
  result.mProperty_isConcrete = in_isConcrete ;
  result.mProperty_superType = in_superType ;
  result.mProperty_typeKind = in_typeKind ;
  result.mProperty_supportCollectionValue = in_supportCollectionValue ;
  result.mProperty_allTypedPropertyList = in_allTypedPropertyList ;
  result.mProperty_propertyMap = in_propertyMap ;
  result.mProperty_currentTypedPropertyList = in_currentTypedPropertyList ;
  result.mProperty_initializerMap = in_initializerMap ;
  result.mProperty_classFunctionMap = in_classFunctionMap ;
  result.mProperty_getterMap = in_getterMap ;
  result.mProperty_setterMap = in_setterMap ;
  result.mProperty_instanceMethodMap = in_instanceMethodMap ;
  result.mProperty_classMethodMap = in_classMethodMap ;
  result.mProperty_optionalMethodMap = in_optionalMethodMap ;
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_mHandledOperatorFlags = in_mHandledOperatorFlags ;
  result.mProperty_mAddAssignOperatorArguments = in_mAddAssignOperatorArguments ;
  result.mProperty_mMapSearchMethodList = in_mMapSearchMethodList ;
  result.mProperty_mMapEntrySearchConstructorList = in_mMapEntrySearchConstructorList ;
  result.mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  result.mProperty_mTypeForEnumeratedElement = in_mTypeForEnumeratedElement ;
  result.mProperty_defaultConstructorName = in_defaultConstructorName ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  result.mProperty_headerKind = in_headerKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition::GALGAS_unifiedTypeDefinition (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_bool & inOperand2,
                                                            const GALGAS_unifiedTypeMapEntry & inOperand3,
                                                            const GALGAS_typeKindEnum & inOperand4,
                                                            const GALGAS_bool & inOperand5,
                                                            const GALGAS_typedPropertyList & inOperand6,
                                                            const GALGAS_propertyMap & inOperand7,
                                                            const GALGAS_typedPropertyList & inOperand8,
                                                            const GALGAS_initializerMap & inOperand9,
                                                            const GALGAS_classFunctionMap & inOperand10,
                                                            const GALGAS_getterMap & inOperand11,
                                                            const GALGAS_setterMap & inOperand12,
                                                            const GALGAS_instanceMethodMap & inOperand13,
                                                            const GALGAS_classMethodMap & inOperand14,
                                                            const GALGAS_optionalMethodMap & inOperand15,
                                                            const GALGAS_enumerationDescriptorList & inOperand16,
                                                            const GALGAS_operators & inOperand17,
                                                            const GALGAS_functionSignature & inOperand18,
                                                            const GALGAS_mapSearchMethodListAST & inOperand19,
                                                            const GALGAS_mapSearchMethodListAST & inOperand20,
                                                            const GALGAS_bool & inOperand21,
                                                            const GALGAS_unifiedTypeMapEntry & inOperand22,
                                                            const GALGAS_string & inOperand23,
                                                            const GALGAS_string & inOperand24,
                                                            const GALGAS_headerKind & inOperand25) :
mProperty_typeName (inOperand0),
mProperty_isPredefined (inOperand1),
mProperty_isConcrete (inOperand2),
mProperty_superType (inOperand3),
mProperty_typeKind (inOperand4),
mProperty_supportCollectionValue (inOperand5),
mProperty_allTypedPropertyList (inOperand6),
mProperty_propertyMap (inOperand7),
mProperty_currentTypedPropertyList (inOperand8),
mProperty_initializerMap (inOperand9),
mProperty_classFunctionMap (inOperand10),
mProperty_getterMap (inOperand11),
mProperty_setterMap (inOperand12),
mProperty_instanceMethodMap (inOperand13),
mProperty_classMethodMap (inOperand14),
mProperty_optionalMethodMap (inOperand15),
mProperty_enumerationDescriptorList (inOperand16),
mProperty_mHandledOperatorFlags (inOperand17),
mProperty_mAddAssignOperatorArguments (inOperand18),
mProperty_mMapSearchMethodList (inOperand19),
mProperty_mMapEntrySearchConstructorList (inOperand20),
mProperty_generateHeaderInSeparateFile (inOperand21),
mProperty_mTypeForEnumeratedElement (inOperand22),
mProperty_defaultConstructorName (inOperand23),
mProperty_mHeaderFileName (inOperand24),
mProperty_headerKind (inOperand25) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::class_func_new (const GALGAS_lstring & in_typeName,
                                                                           const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_bool & in_isConcrete,
                                                                           const GALGAS_unifiedTypeMapEntry & in_superType,
                                                                           const GALGAS_typeKindEnum & in_typeKind,
                                                                           const GALGAS_bool & in_supportCollectionValue,
                                                                           const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                                                           const GALGAS_propertyMap & in_propertyMap,
                                                                           const GALGAS_typedPropertyList & in_currentTypedPropertyList,
                                                                           const GALGAS_initializerMap & in_initializerMap,
                                                                           const GALGAS_classFunctionMap & in_classFunctionMap,
                                                                           const GALGAS_getterMap & in_getterMap,
                                                                           const GALGAS_setterMap & in_setterMap,
                                                                           const GALGAS_instanceMethodMap & in_instanceMethodMap,
                                                                           const GALGAS_classMethodMap & in_classMethodMap,
                                                                           const GALGAS_optionalMethodMap & in_optionalMethodMap,
                                                                           const GALGAS_enumerationDescriptorList & in_enumerationDescriptorList,
                                                                           const GALGAS_operators & in_mHandledOperatorFlags,
                                                                           const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                                           const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                                           const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                                                           const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                                           const GALGAS_unifiedTypeMapEntry & in_mTypeForEnumeratedElement,
                                                                           const GALGAS_string & in_defaultConstructorName,
                                                                           const GALGAS_string & in_mHeaderFileName,
                                                                           const GALGAS_headerKind & in_headerKind,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_isPredefined = in_isPredefined ;
  result.mProperty_isConcrete = in_isConcrete ;
  result.mProperty_superType = in_superType ;
  result.mProperty_typeKind = in_typeKind ;
  result.mProperty_supportCollectionValue = in_supportCollectionValue ;
  result.mProperty_allTypedPropertyList = in_allTypedPropertyList ;
  result.mProperty_propertyMap = in_propertyMap ;
  result.mProperty_currentTypedPropertyList = in_currentTypedPropertyList ;
  result.mProperty_initializerMap = in_initializerMap ;
  result.mProperty_classFunctionMap = in_classFunctionMap ;
  result.mProperty_getterMap = in_getterMap ;
  result.mProperty_setterMap = in_setterMap ;
  result.mProperty_instanceMethodMap = in_instanceMethodMap ;
  result.mProperty_classMethodMap = in_classMethodMap ;
  result.mProperty_optionalMethodMap = in_optionalMethodMap ;
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_mHandledOperatorFlags = in_mHandledOperatorFlags ;
  result.mProperty_mAddAssignOperatorArguments = in_mAddAssignOperatorArguments ;
  result.mProperty_mMapSearchMethodList = in_mMapSearchMethodList ;
  result.mProperty_mMapEntrySearchConstructorList = in_mMapEntrySearchConstructorList ;
  result.mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  result.mProperty_mTypeForEnumeratedElement = in_mTypeForEnumeratedElement ;
  result.mProperty_defaultConstructorName = in_defaultConstructorName ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  result.mProperty_headerKind = in_headerKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeDefinition::objectCompare (const GALGAS_unifiedTypeDefinition & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_typeName.objectCompare (inOperand.mProperty_typeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_isPredefined.objectCompare (inOperand.mProperty_isPredefined) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_isConcrete.objectCompare (inOperand.mProperty_isConcrete) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_superType.objectCompare (inOperand.mProperty_superType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_typeKind.objectCompare (inOperand.mProperty_typeKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_supportCollectionValue.objectCompare (inOperand.mProperty_supportCollectionValue) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_allTypedPropertyList.objectCompare (inOperand.mProperty_allTypedPropertyList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_propertyMap.objectCompare (inOperand.mProperty_propertyMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_currentTypedPropertyList.objectCompare (inOperand.mProperty_currentTypedPropertyList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_initializerMap.objectCompare (inOperand.mProperty_initializerMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_classFunctionMap.objectCompare (inOperand.mProperty_classFunctionMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_getterMap.objectCompare (inOperand.mProperty_getterMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_setterMap.objectCompare (inOperand.mProperty_setterMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_instanceMethodMap.objectCompare (inOperand.mProperty_instanceMethodMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_classMethodMap.objectCompare (inOperand.mProperty_classMethodMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_optionalMethodMap.objectCompare (inOperand.mProperty_optionalMethodMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_enumerationDescriptorList.objectCompare (inOperand.mProperty_enumerationDescriptorList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandledOperatorFlags.objectCompare (inOperand.mProperty_mHandledOperatorFlags) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAddAssignOperatorArguments.objectCompare (inOperand.mProperty_mAddAssignOperatorArguments) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMapSearchMethodList.objectCompare (inOperand.mProperty_mMapSearchMethodList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMapEntrySearchConstructorList.objectCompare (inOperand.mProperty_mMapEntrySearchConstructorList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_generateHeaderInSeparateFile.objectCompare (inOperand.mProperty_generateHeaderInSeparateFile) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTypeForEnumeratedElement.objectCompare (inOperand.mProperty_mTypeForEnumeratedElement) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_defaultConstructorName.objectCompare (inOperand.mProperty_defaultConstructorName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHeaderFileName.objectCompare (inOperand.mProperty_mHeaderFileName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_headerKind.objectCompare (inOperand.mProperty_headerKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeDefinition::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_isPredefined.isValid () && mProperty_isConcrete.isValid () && mProperty_superType.isValid () && mProperty_typeKind.isValid () && mProperty_supportCollectionValue.isValid () && mProperty_allTypedPropertyList.isValid () && mProperty_propertyMap.isValid () && mProperty_currentTypedPropertyList.isValid () && mProperty_initializerMap.isValid () && mProperty_classFunctionMap.isValid () && mProperty_getterMap.isValid () && mProperty_setterMap.isValid () && mProperty_instanceMethodMap.isValid () && mProperty_classMethodMap.isValid () && mProperty_optionalMethodMap.isValid () && mProperty_enumerationDescriptorList.isValid () && mProperty_mHandledOperatorFlags.isValid () && mProperty_mAddAssignOperatorArguments.isValid () && mProperty_mMapSearchMethodList.isValid () && mProperty_mMapEntrySearchConstructorList.isValid () && mProperty_generateHeaderInSeparateFile.isValid () && mProperty_mTypeForEnumeratedElement.isValid () && mProperty_defaultConstructorName.isValid () && mProperty_mHeaderFileName.isValid () && mProperty_headerKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_isPredefined.drop () ;
  mProperty_isConcrete.drop () ;
  mProperty_superType.drop () ;
  mProperty_typeKind.drop () ;
  mProperty_supportCollectionValue.drop () ;
  mProperty_allTypedPropertyList.drop () ;
  mProperty_propertyMap.drop () ;
  mProperty_currentTypedPropertyList.drop () ;
  mProperty_initializerMap.drop () ;
  mProperty_classFunctionMap.drop () ;
  mProperty_getterMap.drop () ;
  mProperty_setterMap.drop () ;
  mProperty_instanceMethodMap.drop () ;
  mProperty_classMethodMap.drop () ;
  mProperty_optionalMethodMap.drop () ;
  mProperty_enumerationDescriptorList.drop () ;
  mProperty_mHandledOperatorFlags.drop () ;
  mProperty_mAddAssignOperatorArguments.drop () ;
  mProperty_mMapSearchMethodList.drop () ;
  mProperty_mMapEntrySearchConstructorList.drop () ;
  mProperty_generateHeaderInSeparateFile.drop () ;
  mProperty_mTypeForEnumeratedElement.drop () ;
  mProperty_defaultConstructorName.drop () ;
  mProperty_mHeaderFileName.drop () ;
  mProperty_headerKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeDefinition::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeDefinition:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isPredefined.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConcrete.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_superType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_supportCollectionValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_allTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_currentTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initializerMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_classFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_getterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_setterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instanceMethodMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_classMethodMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_optionalMethodMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enumerationDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandledOperatorFlags.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAddAssignOperatorArguments.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMapSearchMethodList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMapEntrySearchConstructorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_generateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeForEnumeratedElement.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_defaultConstructorName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_headerKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ("unifiedTypeDefinition",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition GALGAS_unifiedTypeDefinition::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result ;
  const GALGAS_unifiedTypeDefinition * p = (const GALGAS_unifiedTypeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap unsolvedEntryList'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist extensionGetter_unsolvedEntryList (const GALGAS_unifiedTypeMap & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist result_result ; // Returned variable
  result_result = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("unified-type-map.galgas", 34)) ;
  const GALGAS_unifiedTypeMap temp_0 = inObject ;
  cEnumerator_unifiedTypeMap enumerator_1819 (temp_0, EnumerationOrder::up) ;
  while (enumerator_1819.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_1819.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas", 36)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result.addAssign_operation (enumerator_1819.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas", 37)) ;
      }
    }
    enumerator_1819.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_unifiedTypeMapElementClass::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_unifiedTypeMapElementClass * p = (const cPtr_unifiedTypeMapElementClass *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDefinition.objectCompare (p->mProperty_mDefinition) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_unifiedTypeMapElementClass::objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const {
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

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::init_28__29_ (const GALGAS_typeDefinition & in_mDefinition,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->mProperty_mDefinition = in_mDefinition ;
  const GALGAS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass::GALGAS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::class_func_new (const GALGAS_typeDefinition & inAttribute_mDefinition
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  if (inAttribute_mDefinition.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unifiedTypeMapElementClass (inAttribute_mDefinition COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapElementClass::setter_setMDefinition (GALGAS_typeDefinition inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GALGAS_typeDefinition & in_mDefinition
                                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mDefinition (in_mDefinition) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unifiedTypeMapElementClass::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass result ;
  const GALGAS_unifiedTypeMapElementClass * p = (const GALGAS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

