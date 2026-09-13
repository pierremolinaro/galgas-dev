#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
// @overridingAbstractExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionSetterAST::objectCompare (const GGS_overridingAbstractExtensionSetterAST & inOperand) const {
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

GGS_overridingAbstractExtensionSetterAST::GGS_overridingAbstractExtensionSetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST GGS_overridingAbstractExtensionSetterAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mTypeName,
                                  const GGS_lstring & in_mOverridingExtensionSetterName,
                                  const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingAbstractExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingAbstractExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->overridingAbstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mOverridingExtensionSetterName, in_mOverridingExtensionSetterFormalParameterList, inCompiler) ;
  const GGS_overridingAbstractExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::
overridingAbstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mTypeName,
                                                                       const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                       const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST::GGS_overridingAbstractExtensionSetterAST (const cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionSetterAST::readProperty_mOverridingExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_overridingAbstractExtensionSetterAST::readProperty_mOverridingExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionSetterName (),
mProperty_mOverridingExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionSetterAST::cPtr_overridingAbstractExtensionSetterAST (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                                      const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionSetterName (),
mProperty_mOverridingExtensionSetterFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingAbstractExtensionSetterAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_overridingAbstractExtensionSetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionSetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingAbstractExtensionSetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ("overridingAbstractExtensionSetterAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingAbstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST GGS_overridingAbstractExtensionSetterAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionSetterAST result ;
  const GGS_overridingAbstractExtensionSetterAST * p = (const GGS_overridingAbstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @equatableExtensionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_equatableExtensionAST::objectCompare (const GGS_equatableExtensionAST & inOperand) const {
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

GGS_equatableExtensionAST::GGS_equatableExtensionAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_equatableExtensionAST GGS_equatableExtensionAST::
init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                              const GGS_lstring & in_mTypeName,
                              const GGS_equatableComparableExtension & in_mExtension,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_equatableExtensionAST * object = nullptr ;
  macroMyNew (object, cPtr_equatableExtensionAST (inCompiler COMMA_THERE)) ;
  object->equatableExtensionAST_init_21_isPredefined_21__21_ (in_isPredefined, in_mTypeName, in_mExtension, inCompiler) ;
  const GGS_equatableExtensionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::
equatableExtensionAST_init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mTypeName,
                                                    const GGS_equatableComparableExtension & in_mExtension,
                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtension = in_mExtension ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST::GGS_equatableExtensionAST (const cPtr_equatableExtensionAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_equatableExtensionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_equatableExtensionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_equatableExtensionAST * p = (cPtr_equatableExtensionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equatableExtensionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension GGS_equatableExtensionAST::readProperty_mExtension (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_equatableComparableExtension () ;
  }else{
    cPtr_equatableExtensionAST * p = (cPtr_equatableExtensionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equatableExtensionAST) ;
    return p->mProperty_mExtension ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @equatableExtensionAST class
//--------------------------------------------------------------------------------------------------

cPtr_equatableExtensionAST::cPtr_equatableExtensionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExtension () {
}

//--------------------------------------------------------------------------------------------------

cPtr_equatableExtensionAST::cPtr_equatableExtensionAST (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_equatableComparableExtension & in_mExtension,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExtension () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtension = in_mExtension ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_equatableExtensionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionAST ;
}

void cPtr_equatableExtensionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@equatableExtensionAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtension.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_equatableExtensionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_equatableExtensionAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mExtension, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_equatableExtensionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExtension.printNonNullClassInstanceProperties ("mExtension") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionAST ("equatableExtensionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST GGS_equatableExtensionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionAST result ;
  const GGS_equatableExtensionAST * p = (const GGS_equatableExtensionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionMethodAST::objectCompare (const GGS_abstractExtensionMethodAST & inOperand) const {
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

GGS_abstractExtensionMethodAST::GGS_abstractExtensionMethodAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionMethodAST GGS_abstractExtensionMethodAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mTypeName,
                                  const GGS_lstring & in_mAbstractExtensionMethodName,
                                  const GGS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList, inCompiler) ;
  const GGS_abstractExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::
abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                             const GGS_lstring & in_mTypeName,
                                                             const GGS_lstring & in_mAbstractExtensionMethodName,
                                                             const GGS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST::GGS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mTypeName,
                                                                  const GGS_lstring & in_mAbstractExtensionMethodName,
                                                                  const GGS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

void cPtr_abstractExtensionMethodAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_abstractExtensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionMethodName.printNonNullClassInstanceProperties ("mAbstractExtensionMethodName") ;
    mProperty_mAbstractExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionMethodAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST GGS_abstractExtensionMethodAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodAST result ;
  const GGS_abstractExtensionMethodAST * p = (const GGS_abstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionMethodForGeneration::objectCompare (const GGS_abstractExtensionMethodForGeneration & inOperand) const {
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

GGS_abstractExtensionMethodForGeneration::GGS_abstractExtensionMethodForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                 const GGS_string & in_implementationCppFileName,
                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                 const GGS_string & in_mAbstractExtensionMethodName,
                                                                 const GGS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionMethodForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionMethodForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList, inCompiler) ;
  const GGS_abstractExtensionMethodForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::
abstractExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                      const GGS_string & in_mAbstractExtensionMethodName,
                                                                                                      const GGS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                                                      Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration::GGS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_abstractExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GGS_string & in_mAbstractExtensionMethodName,
                                                                                      const GGS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

void cPtr_abstractExtensionMethodForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionMethodForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_abstractExtensionMethodForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionMethodForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionMethodName.printNonNullClassInstanceProperties ("mAbstractExtensionMethodName") ;
    mProperty_mAbstractExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionMethodForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodForGeneration result ;
  const GGS_abstractExtensionMethodForGeneration * p = (const GGS_abstractExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionMethodForGeneration_2E_weak::objectCompare (const GGS_abstractExtensionMethodForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_abstractExtensionMethodForGeneration_2E_weak::GGS_abstractExtensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak & GGS_abstractExtensionMethodForGeneration_2E_weak::operator = (const GGS_abstractExtensionMethodForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak::GGS_abstractExtensionMethodForGeneration_2E_weak (const GGS_abstractExtensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak GGS_abstractExtensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration_2E_weak::bang_abstractExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodForGeneration) ;
      result = GGS_abstractExtensionMethodForGeneration ((cPtr_abstractExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ("abstractExtensionMethodForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionMethodForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionMethodForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak GGS_abstractExtensionMethodForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodForGeneration_2E_weak result ;
  const GGS_abstractExtensionMethodForGeneration_2E_weak * p = (const GGS_abstractExtensionMethodForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionMethodForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionMethodAST::objectCompare (const GGS_extensionMethodAST & inOperand) const {
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

GGS_extensionMethodAST::GGS_extensionMethodAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionMethodAST GGS_extensionMethodAST::
init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mTypeName,
                                          const GGS_lstring & in_mExtensionMethodName,
                                          const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                          const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                          const GGS_location & in_mEndOfMethodLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_extensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_extensionMethodAST (inCompiler COMMA_THERE)) ;
  object->extensionMethodAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mTypeName, in_mExtensionMethodName, in_mExtensionMethodFormalParameterList, in_mExtensionMethodInstructionList, in_mEndOfMethodLocation, inCompiler) ;
  const GGS_extensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::
extensionMethodAST_init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                             const GGS_lstring & in_mTypeName,
                                                             const GGS_lstring & in_mExtensionMethodName,
                                                             const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                             const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                             const GGS_location & in_mEndOfMethodLocation,
                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mExtensionMethodInstructionList = in_mExtensionMethodInstructionList ;
  mProperty_mEndOfMethodLocation = in_mEndOfMethodLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST::GGS_extensionMethodAST (const cPtr_extensionMethodAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionMethodAST::readProperty_mExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionMethodAST::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_extensionMethodAST::readProperty_mExtensionMethodInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mExtensionMethodInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMethodAST::readProperty_mEndOfMethodLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_mEndOfMethodLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_extensionMethodAST::cPtr_extensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mTypeName,
                                                  const GGS_lstring & in_mExtensionMethodName,
                                                  const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GGS_location & in_mEndOfMethodLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mExtensionMethodInstructionList = in_mExtensionMethodInstructionList ;
  mProperty_mEndOfMethodLocation = in_mEndOfMethodLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

void cPtr_extensionMethodAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_extensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionMethodAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mExtensionMethodInstructionList, mProperty_mEndOfMethodLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExtensionMethodName.printNonNullClassInstanceProperties ("mExtensionMethodName") ;
    mProperty_mExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mExtensionMethodFormalParameterList") ;
    mProperty_mExtensionMethodInstructionList.printNonNullClassInstanceProperties ("mExtensionMethodInstructionList") ;
    mProperty_mEndOfMethodLocation.printNonNullClassInstanceProperties ("mEndOfMethodLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionMethodAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodAST ("extensionMethodAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST GGS_extensionMethodAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionMethodAST result ;
  const GGS_extensionMethodAST * p = (const GGS_extensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionMethodForGeneration::objectCompare (const GGS_extensionMethodForGeneration & inOperand) const {
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

GGS_extensionMethodForGeneration::GGS_extensionMethodForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                             const GGS_string & in_mExtensionMethodName,
                                                                             const GGS_bool & in_mImplementedAsFunction,
                                                                             const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                             const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_extensionMethodForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extensionMethodForGeneration (inCompiler COMMA_THERE)) ;
  object->extensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionMethodName, in_mImplementedAsFunction, in_mExtensionMethodFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_extensionMethodForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::
extensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                          const GGS_string & in_mExtensionMethodName,
                                                                                                          const GGS_bool & in_mImplementedAsFunction,
                                                                                                          const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                                          const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                          const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration::GGS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionMethodForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionMethodForGeneration::readProperty_mExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_extensionMethodForGeneration::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_extensionMethodForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_extensionMethodForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionMethodName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionMethodForGeneration::cPtr_extensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                      const GGS_string & in_mExtensionMethodName,
                                                                      const GGS_bool & in_mImplementedAsFunction,
                                                                      const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionMethodName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

void cPtr_extensionMethodForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionMethodForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_extensionMethodForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionMethodForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionMethodName, mProperty_mImplementedAsFunction, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionMethodForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mExtensionMethodName.printNonNullClassInstanceProperties ("mExtensionMethodName") ;
    mProperty_mImplementedAsFunction.printNonNullClassInstanceProperties ("mImplementedAsFunction") ;
    mProperty_mExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mExtensionMethodFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionMethodForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration ("extensionMethodForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodForGeneration result ;
  const GGS_extensionMethodForGeneration * p = (const GGS_extensionMethodForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionMethodForGeneration_2E_weak::objectCompare (const GGS_extensionMethodForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_extensionMethodForGeneration_2E_weak::GGS_extensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak & GGS_extensionMethodForGeneration_2E_weak::operator = (const GGS_extensionMethodForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak::GGS_extensionMethodForGeneration_2E_weak (const GGS_extensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak GGS_extensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration_2E_weak::bang_extensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodForGeneration) ;
      result = GGS_extensionMethodForGeneration ((cPtr_extensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ("extensionMethodForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak GGS_extensionMethodForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodForGeneration_2E_weak result ;
  const GGS_extensionMethodForGeneration_2E_weak * p = (const GGS_extensionMethodForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (void) :
mProperty_mLeftNonterminalSymbol (),
mProperty_mLeftNonterminalSymbolIndex (),
mProperty_mInstructionList (),
mProperty_mProductionIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) :
mProperty_mLeftNonterminalSymbol (inSource.mProperty_mLeftNonterminalSymbol),
mProperty_mLeftNonterminalSymbolIndex (inSource.mProperty_mLeftNonterminalSymbolIndex),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mProductionIndex (inSource.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element & GGS_productionRuleListForGrammarAnalysis_2E_element::operator = (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mLeftNonterminalSymbol = inSource.mProperty_mLeftNonterminalSymbol ;
  mProperty_mLeftNonterminalSymbolIndex = inSource.mProperty_mLeftNonterminalSymbolIndex ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mProductionIndex = inSource.mProperty_mProductionIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element GGS_productionRuleListForGrammarAnalysis_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                               const GGS_uint & in_mProductionIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeftNonterminalSymbol = in_mLeftNonterminalSymbol ;
  result.mProperty_mLeftNonterminalSymbolIndex = in_mLeftNonterminalSymbolIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mProductionIndex = in_mProductionIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_uint & inOperand1,
                                                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                          const GGS_uint & inOperand3) :
mProperty_mLeftNonterminalSymbol (inOperand0),
mProperty_mLeftNonterminalSymbolIndex (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mProductionIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_productionRuleListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mLeftNonterminalSymbol.isValid () && mProperty_mLeftNonterminalSymbolIndex.isValid () && mProperty_mInstructionList.isValid () && mProperty_mProductionIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mLeftNonterminalSymbol.drop () ;
  mProperty_mLeftNonterminalSymbolIndex.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mProductionIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @productionRuleListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductionIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @productionRuleListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ("productionRuleListForGrammarAnalysis.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_productionRuleListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_productionRuleListForGrammarAnalysis_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_productionRuleListForGrammarAnalysis_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element GGS_productionRuleListForGrammarAnalysis_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis_2E_element result ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element * p = (const GGS_productionRuleListForGrammarAnalysis_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_productionRuleListForGrammarAnalysis_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const GGS_string constinArgument_inSyntaxComponentName,
                                            GGS_string & ioArgument_ioGeneratedCode,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_currentNode_6877 = GGS_string ("P0start") ;
  GGS_rowList var_rowArray_6916 = GGS_rowList::init (inCompiler COMMA_HERE) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_0 = inObject ;
  UpEnumerator_range enumerator_6970 (GGS_range (GGS_uint (uint32_t (1U)), temp_0.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas3", 173)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 173)))) ;
  while (enumerator_6970.hasCurrentObject ()) {
    GGS__32_stringlist temp_1 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 174)) ;
    temp_1.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string::makeEmptyString (), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 174)) ;
    var_rowArray_6916.addAssignOperation (temp_1  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 174)) ;
    enumerator_6970.gotoNextObject () ;
  }
  GGS__32_stringlist temp_2 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 176)) ;
  temp_2.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_currentNode_6877, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 176)) ;
  var_rowArray_6916.addAssignOperation (temp_2  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 176)) ;
  GGS_string var_arrows_7081 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_7107 = GGS_string ("--") ;
  GGS_uint var_unusedMaxUsedRowIndex_7137 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_uint var_row_7179 = temp_3.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas3", 180)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_4 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_7220 (temp_4.readProperty_mInstructionList ()) ;
  while (enumerator_7220.hasCurrentObject ()) {
    var_row_7179.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 182)) ;
    GGS_uint var_column_7288 = GGS_uint (uint32_t (1U)) ;
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_7220.current_mInstruction (HERE).ptr (), var_rowArray_6916, var_row_7179, var_column_7288, var_currentNode_6877, var_arrowStyle_7107, var_arrows_7081, var_unusedMaxUsedRowIndex_7137, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 184)) ;
    enumerator_7220.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_7655 ;
  {
  extensionSetter_appendRow (var_rowArray_6916, GGS_string ("[lastPoint] ()"), var_row_7179, GGS_uint (uint32_t (2U)), var_lastNodeName_7655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 196)) ;
  }
  var_arrows_7081.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_6877, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 197)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 197)).add_operation (var_lastNodeName_7655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 197)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 197)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 197)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_5 = inObject ;
  GGS_location var_loc_7775 = temp_5.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 201)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 200)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 201)).add_operation (function_escapeForTex (var_loc_7775.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 203)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas3", 203)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 202)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 203)).add_operation (function_escapeForTex (var_loc_7775.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 204)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 204)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 204)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 205)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 206)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 200)) ;
  DownEnumerator_rowList enumerator_8181 (var_rowArray_6916) ;
  while (enumerator_8181.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 209)) ;
    UpEnumerator__32_stringlist enumerator_8253 (enumerator_8181.current_columns (HERE)) ;
    while (enumerator_8253.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_8253.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 212)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_8253.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 214)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 214)).add_operation (enumerator_8253.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 214)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 214)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 214)) ;
      }
      enumerator_8253.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 217)) ;
    enumerator_8181.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_7081, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 221)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 222)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const GGS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   GGS_rowList & ioArgument_ioRowList,
                                                   const GGS_uint constinArgument_inRow,
                                                   GGS_uint & ioArgument_ioColumn,
                                                   GGS_string & ioArgument_ioCurrentNode,
                                                   GGS_string & ioArgument_ioArrowShape,
                                                   GGS_string & ioArgument_ioArrows,
                                                   GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                   const GGS_bool constinArgument_inDebug,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas3", 239)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_nodeName_9297 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9297, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 240)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)).add_operation (var_nodeName_9297, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 246)) ;
      ioArgument_ioCurrentNode = var_nodeName_9297 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 249)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9494 (temp_2) ;
    while (enumerator_9494.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9494.current_mInstruction (HERE).ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas3", 252)) ;
      enumerator_9494.gotoNextObject () ;
    }
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

AbstractPtrClass * cPtr_lexicalStructuredSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @lexicalAttributeInputOutputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GGS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (void) :
GGS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::
init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
              const GGS_lstring & in_mAttributeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputOutputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputOutputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputOutputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputOutputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::
lexicalAttributeInputOutputArgumentAST_init_21__21_ (const GGS_location & in_mActualPassingModeLocation,
                                                     const GGS_lstring & in_mAttributeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST::GGS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GGS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputOutputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GGS_location & in_mActualPassingModeLocation,
                                                                                          const GGS_lstring & in_mAttributeName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation, inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputOutputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputOutputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputOutputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputOutputArgumentAST GGS_lexicalAttributeInputOutputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputOutputArgumentAST result ;
  const GGS_lexicalAttributeInputOutputArgumentAST * p = (const GGS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineCallInstructionAST::objectCompare (const GGS_lexicalRoutineCallInstructionAST & inOperand) const {
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

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::
init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                  const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                  const GGS_lstringlist & in_mErrorMessageList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRoutineCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRoutineCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRoutineCallInstructionAST_init_21__21__21_ (in_mRoutineName, in_mActualArgumentList, in_mErrorMessageList, inCompiler) ;
  const GGS_lexicalRoutineCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::
lexicalRoutineCallInstructionAST_init_21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                   const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                   const GGS_lstringlist & in_mErrorMessageList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST::GGS_lexicalRoutineCallInstructionAST (const cPtr_lexicalRoutineCallInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRoutineCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallActualArgumentListAST GGS_lexicalRoutineCallInstructionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalRoutineCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_lexicalRoutineCallInstructionAST::readProperty_mErrorMessageList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mErrorMessageList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (const GGS_lstring & in_mRoutineName,
                                                                              const GGS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                              const GGS_lstringlist & in_mErrorMessageList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRoutineCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

void cPtr_lexicalRoutineCallInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRoutineCallInstructionAST:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalRoutineCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRoutineCallInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mErrorMessageList.printNonNullClassInstanceProperties ("mErrorMessageList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ("lexicalRoutineCallInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineCallInstructionAST GGS_lexicalRoutineCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineCallInstructionAST result ;
  const GGS_lexicalRoutineCallInstructionAST * p = (const GGS_lexicalRoutineCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalTagInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalTagInstructionAST::objectCompare (const GGS_lexicalTagInstructionAST & inOperand) const {
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

GGS_lexicalTagInstructionAST::GGS_lexicalTagInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST::
init_21_ (const GGS_lstring & in_mLexicalTagName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalTagInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalTagInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalTagInstructionAST_init_21_ (in_mLexicalTagName, inCompiler) ;
  const GGS_lexicalTagInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::
lexicalTagInstructionAST_init_21_ (const GGS_lstring & in_mLexicalTagName,
                                   Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST::GGS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalTagInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalTagInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalTagInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalTagInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalTagInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagInstructionAST GGS_lexicalTagInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagInstructionAST result ;
  const GGS_lexicalTagInstructionAST * p = (const GGS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSelectInstructionAST::objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const {
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

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::
init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
              const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalSelectInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSelectInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSelectInstructionAST_init_21__21_ (in_mLexicalSelectBranchList, in_mDefaultInstructionList, inCompiler) ;
  const GGS_lexicalSelectInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::
lexicalSelectInstructionAST_init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                          const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectInstructionAST::readProperty_mLexicalSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSelectBranchListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mLexicalSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalSelectInstructionAST::readProperty_mDefaultInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mDefaultInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GGS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSelectInstructionAST:") ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSelectInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSelectInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSelectBranchList.printNonNullClassInstanceProperties ("mLexicalSelectBranchList") ;
    mProperty_mDefaultInstructionList.printNonNullClassInstanceProperties ("mDefaultInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalSelectInstructionAST result ;
  const GGS_lexicalSelectInstructionAST * p = (const GGS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSimpleSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSimpleSendInstructionAST::objectCompare (const GGS_lexicalSimpleSendInstructionAST & inOperand) const {
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

GGS_lexicalSimpleSendInstructionAST::GGS_lexicalSimpleSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST::
init_21_ (const GGS_lstring & in_mSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSimpleSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSimpleSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSimpleSendInstructionAST_init_21_ (in_mSentTerminal, inCompiler) ;
  const GGS_lexicalSimpleSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::
lexicalSimpleSendInstructionAST_init_21_ (const GGS_lstring & in_mSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST::GGS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSimpleSendInstructionAST::readProperty_mSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    return p->mProperty_mSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GGS_lstring & in_mSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mSentTerminal () {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSimpleSendInstructionAST:") ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSimpleSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSimpleSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSentTerminal.printNonNullClassInstanceProperties ("mSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSimpleSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSimpleSendInstructionAST GGS_lexicalSimpleSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSimpleSendInstructionAST result ;
  const GGS_lexicalSimpleSendInstructionAST * p = (const GGS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRewindInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRewindInstructionAST::objectCompare (const GGS_lexicalRewindInstructionAST & inOperand) const {
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

GGS_lexicalRewindInstructionAST::GGS_lexicalRewindInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST::
init_21__21_ (const GGS_lstring & in_mLexicalTagName,
              const GGS_lstring & in_mTerminalName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalRewindInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRewindInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRewindInstructionAST_init_21__21_ (in_mLexicalTagName, in_mTerminalName, inCompiler) ;
  const GGS_lexicalRewindInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::
lexicalRewindInstructionAST_init_21__21_ (const GGS_lstring & in_mLexicalTagName,
                                          const GGS_lstring & in_mTerminalName,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST::GGS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRewindInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalRewindInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GGS_lstring & in_mLexicalTagName,
                                                                    const GGS_lstring & in_mTerminalName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRewindInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalRewindInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRewindInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRewindInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRewindInstructionAST GGS_lexicalRewindInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalRewindInstructionAST result ;
  const GGS_lexicalRewindInstructionAST * p = (const GGS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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

AbstractPtrClass * cPtr_lexicalRepeatInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @lexicalDropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalDropInstructionAST::objectCompare (const GGS_lexicalDropInstructionAST & inOperand) const {
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

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::
init_21_ (const GGS_lstring & in_mTerminalName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalDropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalDropInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalDropInstructionAST_init_21_ (in_mTerminalName, inCompiler) ;
  const GGS_lexicalDropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::
lexicalDropInstructionAST_init_21_ (const GGS_lstring & in_mTerminalName,
                                    Compiler * /* inCompiler */) {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST::GGS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalDropInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GGS_lstring & in_mTerminalName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalDropInstructionAST:") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalDropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalDropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalDropInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                                              & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalDropInstructionAST GGS_lexicalDropInstructionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalDropInstructionAST result ;
  const GGS_lexicalDropInstructionAST * p = (const GGS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalWarningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalWarningInstructionAST::objectCompare (const GGS_lexicalWarningInstructionAST & inOperand) const {
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

GGS_lexicalWarningInstructionAST::GGS_lexicalWarningInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST::
init_21_ (const GGS_lstring & in_mWarningMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalWarningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalWarningInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalWarningInstructionAST_init_21_ (in_mWarningMessageName, inCompiler) ;
  const GGS_lexicalWarningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::
lexicalWarningInstructionAST_init_21_ (const GGS_lstring & in_mWarningMessageName,
                                       Compiler * /* inCompiler */) {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST::GGS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalWarningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalWarningInstructionAST::readProperty_mWarningMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    return p->mProperty_mWarningMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalWarningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mWarningMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (const GGS_lstring & in_mWarningMessageName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mWarningMessageName () {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalWarningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

void cPtr_lexicalWarningInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalWarningInstructionAST:") ;
  mProperty_mWarningMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalWarningInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalWarningInstructionAST (mProperty_mWarningMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalWarningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWarningMessageName.printNonNullClassInstanceProperties ("mWarningMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalWarningInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ("lexicalWarningInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWarningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalWarningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalWarningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWarningInstructionAST GGS_lexicalWarningInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalWarningInstructionAST result ;
  const GGS_lexicalWarningInstructionAST * p = (const GGS_lexicalWarningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalWarningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorInstructionAST::objectCompare (const GGS_lexicalErrorInstructionAST & inOperand) const {
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

GGS_lexicalErrorInstructionAST::GGS_lexicalErrorInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST::
init_21_ (const GGS_lstring & in_mErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorInstructionAST_init_21_ (in_mErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::
lexicalErrorInstructionAST_init_21_ (const GGS_lstring & in_mErrorMessageName,
                                     Compiler * /* inCompiler */) {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST::GGS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorInstructionAST::readProperty_mErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    return p->mProperty_mErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GGS_lstring & in_mErrorMessageName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mErrorMessageName () {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorInstructionAST:") ;
  mProperty_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalErrorInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mProperty_mErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mErrorMessageName.printNonNullClassInstanceProperties ("mErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                                               & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorInstructionAST GGS_lexicalErrorInstructionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorInstructionAST result ;
  const GGS_lexicalErrorInstructionAST * p = (const GGS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 36)) ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 36)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i1_ (GGS_lstring & outArgument_outTypeName,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 29)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-class-func.galgas3", 31)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-class-func.galgas3", 31)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_2008 ;
  nt_optional_5F_type_5F_ggs_33__ (var_typeName_2008, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 41)) ;
  GGS_location var_startOfExpression_2033 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 42)) ;
  GGS_lstring var_classFuncName_2115 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas3", 44)) ;
  GGS_actualOutputArgumentList var_expressionList_2188 ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
    var_expressionList_2188 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 50)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_2188, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 52)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_2353 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas3", 54)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (var_typeName_2008, var_classFuncName_2115, var_expressionList_2188, var_startOfExpression_2033.getter_union (var_endOfExpression_2353, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas3", 59)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas3", 44)) ;
  switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 50)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-class-func.galgas3", 52)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_1495 ;
  nt_optional_5F_type_5F_ggs_33__ (var_typeName_1495, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 27)) ;
  GGS_collectionValueElementList var_expressionList_1549 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_1672 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1672, inCompiler) ;
      var_expressionList_1549.addAssignOperation (var_expression_1672, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 33))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 33)) ;
      if (select_galgas_33_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (var_typeName_1495, var_expressionList_1549, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 38)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 27)) ;
  switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_1485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas3", 26)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_1485, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas3", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2987 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 70)) ;
      GGS_semanticExpressionAST var_expression_3065 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3065, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_2987, var_expression_3065, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 72))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 72)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 74)) ;
      GGS_lstring var_selector_3162 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 75)) ;
      GGS_semanticExpressionAST var_expression_3250 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3250, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_3162, var_expression_3250, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 77))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 70)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 74)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                          GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_3696 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 90)) ;
        GGS_semanticExpressionAST var_expression_3778 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3778, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_3696, var_expression_3778, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 92))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 92)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 94)) ;
        GGS_lstring var_selector_3888 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 95)) ;
        GGS_semanticExpressionAST var_expression_3980 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3980, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_3888, var_expression_3980, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 97))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 97)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_4076 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 99)) ;
        GGS_semanticExpressionAST var_expression_4168 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4168, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_4076, var_expression_4168, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 101))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 101)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_ExpressionSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 90)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 94)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_ExpressionSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas3", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 40)) ;
  GGS_lstring var_optionComponentName_2022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 42)) ;
  GGS_lstring var_optionName_2106 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 43)) ;
  GGS_lstring var_getterName_2139 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 44)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_2022, var_optionName_2106, var_getterName_2139, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 55)) ;
  GGS_lstring var_optionName_2534 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 56)) ;
  GGS_lstring var_getterName_2567 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 57)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 58)), inCompiler COMMA_HERE), var_optionName_2534, var_getterName_2567, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_1913 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas3", 36)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_1913, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_1917 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas3", 36)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_1917, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_1954 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_2011 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 39)) ;
    var_literalStringList_1954.addAssignOperation (var_literalString_2011.readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 40)) ;
    if (select_galgas_33_ExpressionSyntax_8 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 43)), var_literalStringList_1954, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas3", 39)) ;
    if (select_galgas_33_ExpressionSyntax_8 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 38)) ;
  GGS_lstring var_lexiqueName_1996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 40)) ;
  GGS_lstring var_getterName_2038 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 41)) ;
  outArgument_outExpression = GGS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_1996, var_getterName_2038, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1945 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_1945, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1938 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas3", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_1938, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas3", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1953 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_1953, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 52)) ;
  GGS_lstring var_filewrapperName_2525 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 53)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_2525, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 59)) ;
    switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_2749 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 61)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_2525, var_filePath_2749, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_2913 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 67)) ;
      GGS_actualOutputArgumentList var_expressionList_3023 ;
      nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_3023, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_2525, var_filewrapperTemplateName_2913, var_expressionList_3023, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 52)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 53)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 59)) ;
    switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 61)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 67)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 30)) ;
  GGS_actualOutputArgumentList var_expressionList_1738 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1738, inCompiler) ;
  GGS_location var_endOfExpression_1761 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 33)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas3", 35)), var_expressionList_1738, var_endOfExpression_1761, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 30)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 45)) ;
  GGS_actualOutputArgumentList var_expressionList_2204 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_expressionList_2204, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 47)) ;
  GGS_location var_endOfExpression_2234 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 48)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas3", 50)), var_expressionList_2204, var_endOfExpression_2234, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 45)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_2622 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas3", 60)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 62)) ;
    GGS_actualOutputArgumentList var_expressionList_2746 ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_2746, inCompiler) ;
    GGS_location var_endOfExpression_2771 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 64)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 65)) ;
    outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (var_typeName_2622, var_expressionList_2746, var_endOfExpression_2771, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 68)) ;
    GGS_actualOutputArgumentList var_expressionList_2976 ;
    nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_expressionList_2976, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 70)) ;
    GGS_location var_endOfExpression_3011 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas3", 71)) ;
    outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (var_typeName_2622, var_expressionList_2976, var_endOfExpression_3011, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas3", 60)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 62)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 68)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas3", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 36)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 37)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3341 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3395 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3488 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3488, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_3341, var_leftOperand_3395, var_rightOperand_3488, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3619 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3674 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3767 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3767, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_3619, var_leftOperand_3674, var_rightOperand_3767, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_3908 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3962 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4032 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4032, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_3908, var_leftOperand_3962, var_rightOperand_4032, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4157 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4212 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4282 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4282, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4157, var_leftOperand_4212, var_rightOperand_4282, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4417 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4473 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4543 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4543, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_4417, var_leftOperand_4473, var_rightOperand_4543, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 74)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 80)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 86)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 92)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas3", 98)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 42)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 43)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 50)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 51)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1944 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_1944, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas3", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                     GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_2661 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas3", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas3", 60)) ;
    GGS_dynamicTypeComparisonKind var_kind_2750 ;
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 63)) ;
      var_kind_2750 = GGS_dynamicTypeComparisonKind::class_func_equal (SOURCE_FILE ("expression-is-as.galgas3", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 66)) ;
      var_kind_2750 = GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas3", 67)) ;
    } break ;
    case 3: {
      var_kind_2750 = GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas3", 69)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 71)) ;
      var_kind_2750 = GGS_dynamicTypeComparisonKind::class_func_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas3", 72)) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_typeName_2970 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 74)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_2661, var_kind_2750, var_typeName_2970, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_3149 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas3", 82)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas3", 83)) ;
    GGS_lstring var_typeName_3220 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 84)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3149, var_typeName_3220, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas3", 60)) ;
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 66)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas3", 71)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas3", 83)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas3", 84)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 37)) ;
  nt_primary_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 40)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_1939, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-primary-bang.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3668 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 81)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 82)) ;
      GGS_semanticExpressionAST var_leftOperand_3723 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3791 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3791, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3668, var_leftOperand_3723, var_rightOperand_3791, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3917 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 87)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 88)) ;
      GGS_semanticExpressionAST var_leftOperand_3972 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4040 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4040, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3917, var_leftOperand_3972, var_rightOperand_4040, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_4167 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 94)) ;
      GGS_semanticExpressionAST var_leftOperand_4221 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4289 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4289, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_4167, var_leftOperand_4221, var_rightOperand_4289, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4409 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 99)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 100)) ;
      GGS_semanticExpressionAST var_leftOperand_4464 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4532 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4532, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4409, var_leftOperand_4464, var_rightOperand_4532, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4662 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 106)) ;
      GGS_semanticExpressionAST var_leftOperand_4716 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4784 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4784, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_4662, var_leftOperand_4716, var_rightOperand_4784, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_4904 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas3", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 112)) ;
      GGS_semanticExpressionAST var_leftOperand_4959 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5027 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_5027, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4904, var_leftOperand_4959, var_rightOperand_5027, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_term_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 82)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 88)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 94)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 100)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 106)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas3", 112)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3347 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3401 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3479 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3479, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_3347, var_leftOperand_3401, var_rightOperand_3479, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3598 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3653 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3731 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3731, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_3598, var_leftOperand_3653, var_rightOperand_3731, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_3855 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3909 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3987 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3987, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_3855, var_leftOperand_3909, var_rightOperand_3987, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4107 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4163 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4241 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4241, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4107, var_leftOperand_4163, var_rightOperand_4241, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4369 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas3", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4425 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4503 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4503, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4369, var_leftOperand_4425, var_rightOperand_4503, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 74)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 80)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 86)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas3", 92)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas3", 98)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      GGS_actualOutputArgumentList var_expressionList_1649 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 32)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ExpressionSyntax_19 (inCompiler)) {
        case 1: {
          GGS_lstring var_selector_1762 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 35)) ;
          GGS_semanticExpressionAST var_expression_1821 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1821, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_1762, var_expression_1821, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 37))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 37)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 39)) ;
          GGS_lstring var_selector_1928 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 40)) ;
          GGS_semanticExpressionAST var_expression_1997 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1997, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_1928, var_expression_1997, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 42))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 42)) ;
        } break ;
        case 3: {
          GGS_lstring var_selector_2090 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 44)) ;
          GGS_semanticExpressionAST var_expression_2159 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2159, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_2090, var_expression_2159, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 46))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 46)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_ExpressionSyntax_18 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 49)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_1649, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 54)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 58)) ;
      GGS_lstring var_structFieldName_2455 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 59)) ;
      outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_2455.readProperty_location (), outArgument_outExpression, var_structFieldName_2455, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 32)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ExpressionSyntax_19 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 35)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 39)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 3: {
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_ExpressionSyntax_18 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 49)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas3", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 36)) ;
  GGS_lstring var_typeName_1932 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 37)) ;
  outArgument_outExpression = GGS_literalTypeInExpressionAST::init_21_ (var_typeName_1932, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1462 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas3", 27)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_1462, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas3", 27)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_1922 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas3", 37)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_1922, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas3", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_2443 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 56)) ;
      GGS_semanticExpressionAST var_leftOperand_2498 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2579 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2579, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2443, var_leftOperand_2498, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas3", 59)), var_rightOperand_2579, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2714 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 62)) ;
      GGS_semanticExpressionAST var_leftOperand_2769 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2850 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2850, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2714, var_leftOperand_2769, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas3", 65)), var_rightOperand_2850, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_2988 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 67)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 68)) ;
      GGS_semanticExpressionAST var_leftOperand_3043 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3124 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3124, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2988, var_leftOperand_3043, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas3", 71)), var_rightOperand_3124, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_3266 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3321 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3402 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3402, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3266, var_leftOperand_3321, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas3", 77)), var_rightOperand_3402, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_3546 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3600 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3681 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3681, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3546, var_leftOperand_3600, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas3", 83)), var_rightOperand_3681, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_3822 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3876 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3957 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3957, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3822, var_leftOperand_3876, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas3", 89)), var_rightOperand_3957, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_4096 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4152 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4233 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4233, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_4096, var_leftOperand_4152, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas3", 95)), var_rightOperand_4233, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_4375 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas3", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4431 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4512 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4512, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_4375, var_leftOperand_4431, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas3", 101)), var_rightOperand_4512, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 86)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 92)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas3", 98)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 29)) ;
  GGS_actualOutputArgumentList var_expressionList_1676 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_21 (inCompiler)) {
  case 1: {
    GGS_lstring var_selector_1718 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas3", 32)) ;
    GGS_semanticExpressionAST var_expression_1806 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1806, inCompiler) ;
    var_expressionList_1676.addAssignOperation (var_selector_1718, var_expression_1806, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 34))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 34)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_22 (inCompiler)) {
      case 2: {
        GGS_lstring var_selector_1928 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 38)) ;
        GGS_semanticExpressionAST var_expression_2008 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2008, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_1928, var_expression_2008, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 40))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 40)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 42)) ;
        GGS_lstring var_selector_2110 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas3", 43)) ;
        GGS_semanticExpressionAST var_expression_2200 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2200, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2110, var_expression_2200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 45))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 45)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_ExpressionSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 50)) ;
      switch (select_galgas_33_ExpressionSyntax_24 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_2354 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 52)) ;
        GGS_semanticExpressionAST var_expression_2434 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2434, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2354, var_expression_2434, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 54))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 56)) ;
        GGS_lstring var_selector_2533 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas3", 57)) ;
        GGS_semanticExpressionAST var_expression_2623 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2623, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2533, var_expression_2623, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 59))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 59)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_2710 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas3", 61)) ;
        GGS_semanticExpressionAST var_expression_2800 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2800, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2710, var_expression_2800, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 63))  COMMA_SOURCE_FILE ("expression-function-call.galgas3", 63)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_1599, var_expressionList_1676, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 29)) ;
  switch (select_galgas_33_ExpressionSyntax_21 (inCompiler)) {
  case 1: {
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 38)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 42)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_ExpressionSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 50)) ;
      switch (select_galgas_33_ExpressionSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 52)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 56)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 39)) ;
  GGS_semanticExpressionAST var_ifExpression_2088 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_ifExpression_2088, inCompiler) ;
  GGS_location var_operatorLocation_2109 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 42)) ;
  GGS_semanticExpressionAST var_thenExpression_2198 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_thenExpression_2198, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 44)) ;
  GGS_semanticExpressionAST var_elseExpression_2268 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_elseExpression_2268, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 46)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2109, var_ifExpression_2088, var_thenExpression_2198, var_elseExpression_2268, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 39)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 42)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                            GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_2403 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas3", 49)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 50)) ;
      GGS_semanticExpressionAST var_leftOperand_2457 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2559 ;
      nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2559, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_2403, var_leftOperand_2457, var_rightOperand_2559, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2679 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas3", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 56)) ;
      GGS_semanticExpressionAST var_leftOperand_2734 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2836 ;
      nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2836, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_2679, var_leftOperand_2734, var_rightOperand_2836, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 50)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas3", 56)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 28)) ;
  GGS_location var_startLocation_1628 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 30)) ;
  GGS_semanticExpressionAST var_receiverExpression_1726 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_receiverExpression_1726, inCompiler) ;
  GGS_lstring var_getterName_1800 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 33)) ;
  GGS_actualOutputArgumentList var_expressionList_1919 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1919, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 36)) ;
  GGS_location var_endLocation_1950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 37)) ;
  outArgument_outExpression = GGS_getterCallExpressionAST::init_21__21__21__21_ (var_receiverExpression_1726, var_getterName_1800, var_expressionList_1919, var_startLocation_1628.getter_union (var_endLocation_1950, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 42)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 28)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 33)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 28)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 29)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas3", 28)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                       GGS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        GGS_lstring var_selector_2277 ;
        GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_2328 ;
        switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
        case 1: {
          switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
          case 1: {
            var_selector_2277 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 47)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 49)) ;
            var_selector_2277 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 50)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 53)) ;
            var_formalParameterPassingMode_2328 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 54)) ;
          } break ;
          case 2: {
            var_formalParameterPassingMode_2328 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 56)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 58)) ;
            var_formalParameterPassingMode_2328 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 59)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 2: {
          switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
          case 1: {
            var_selector_2277 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 63)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 65)) ;
            var_selector_2277 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 66)) ;
          } break ;
          default:
            break ;
          }
          var_formalParameterPassingMode_2328 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 68)) ;
        } break ;
        case 3: {
          switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
          case 1: {
            var_selector_2277 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 71)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 73)) ;
            var_selector_2277 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 74)) ;
          } break ;
          default:
            break ;
          }
          var_formalParameterPassingMode_2328 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 76)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_formalParameterTypeName_3281 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterTypeName_3281, inCompiler) ;
        GGS_bool var_isUnused_3323 ;
        switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
        case 1: {
          var_isUnused_3323 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 83)) ;
          var_isUnused_3323 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_formalParameterName_3477 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 86)) ;
        outArgument_outFormalParameterList.addAssignOperation (var_selector_2277, var_formalParameterPassingMode_2328, var_formalParameterTypeName_3281, var_formalParameterName_3477, var_isUnused_3323  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 95)) ;
    switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_selector_3770 ;
        GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_3823 ;
        switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
        case 1: {
          switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
          case 1: {
            var_selector_3770 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 103)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 105)) ;
            var_selector_3770 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 106)) ;
          } break ;
          case 3: {
            var_selector_3770 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 108)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler)) {
          case 1: {
            var_formalParameterPassingMode_3823 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 111)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 113)) ;
            var_formalParameterPassingMode_3823 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 114)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 116)) ;
            var_formalParameterPassingMode_3823 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 117)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 2: {
          switch (select_galgas_33_ParameterArgumentSyntax_13 (inCompiler)) {
          case 1: {
            var_selector_3770 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 121)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 123)) ;
            var_selector_3770 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 124)) ;
          } break ;
          default:
            break ;
          }
          var_formalParameterPassingMode_3823 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 126)) ;
        } break ;
        case 3: {
          switch (select_galgas_33_ParameterArgumentSyntax_14 (inCompiler)) {
          case 1: {
            var_selector_3770 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 129)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 131)) ;
            var_selector_3770 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 132)) ;
          } break ;
          default:
            break ;
          }
          var_formalParameterPassingMode_3823 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 134)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_formalParameterTypeName_4834 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterTypeName_4834, inCompiler) ;
        GGS_bool var_isUnused_4878 ;
        switch (select_galgas_33_ParameterArgumentSyntax_15 (inCompiler)) {
        case 1: {
          var_isUnused_4878 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 141)) ;
          var_isUnused_4878 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_formalParameterName_5046 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 144)) ;
        outArgument_outFormalParameterList.addAssignOperation (var_selector_3770, var_formalParameterPassingMode_3823, var_formalParameterTypeName_4834, var_formalParameterName_5046, var_isUnused_4878  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 145)) ;
        if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 152)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 155)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__34__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
        case 1: {
          switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 47)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 49)) ;
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 53)) ;
          } break ;
          case 2: {
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 58)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 2: {
          switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 63)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 65)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 3: {
          switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 71)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 73)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 83)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 86)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 95)) ;
    switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
        case 1: {
          switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 103)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 105)) ;
          } break ;
          case 3: {
          } break ;
          default:
            break ;
          }
          switch (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 113)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 116)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 2: {
          switch (select_galgas_33_ParameterArgumentSyntax_13 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 121)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 123)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        case 3: {
          switch (select_galgas_33_ParameterArgumentSyntax_14 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 129)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 131)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          break ;
        }
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        switch (select_galgas_33_ParameterArgumentSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 141)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 144)) ;
        if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 152)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 155)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                   GGS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GGS_actualParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_16 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_5816 ;
      switch (select_galgas_33_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        var_selector_5816 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 170)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 172)) ;
        var_selector_5816 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 173)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_e_5996 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_e_5996, inCompiler) ;
      GGS_location var_endOfExpressionLocation_6018 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 176)) ;
      outArgument_outActualParameterList.addAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_5816, var_e_5996, var_endOfExpressionLocation_6018, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 177)) ;
    } break ;
    case 3: {
      GGS_lstring var_selector_6219 ;
      switch (select_galgas_33_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
        var_selector_6219 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 185)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 187)) ;
        var_selector_6219 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 188)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 191)) ;
        GGS_lstringlist var_poisonedVarNameList_6393 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_6393, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_6219, var_poisonedVarNameList_6393, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 193)) ;
      } break ;
      case 2: {
        GGS_lbigint var_count_6552 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 195)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 196)) ;
        GGS_uint var_n_6582 = var_count_6552.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 197)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, var_selector_6219.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, EnumFixItKind::fixItReplace, GGS_string ("\?")) ;
            inCompiler->emitSemanticError (var_selector_6219.readProperty_location (), GGS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 199)) ;
          }
        }
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_n_6582.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_6552.readProperty_location (), GGS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 202)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          if (var_n_6582.isValid ()) {
            uint32_t variant_6832 = var_n_6582.uintValue () ;
            bool loop_6832 = true ;
            while (loop_6832) {
              loop_6832 = GGS_bool (ComparisonKind::greaterThan, var_n_6582.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
              if (loop_6832) {
                loop_6832 = GGS_bool (ComparisonKind::greaterThan, var_n_6582.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
              }
              if (loop_6832 && (0 == variant_6832)) {
                loop_6832 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 204)) ;
              }
              if (loop_6832) {
                variant_6832 -= 1 ;
                outArgument_outActualParameterList.addAssignOperation (GGS_inputJokerActualParameterAST::init_21__21_ (var_selector_6219.readProperty_location (), var_n_6582, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 206)) ;
                var_n_6582.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 207)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      GGS_lstring var_selector_7043 ;
      switch (select_galgas_33_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        var_selector_7043 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 214)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 216)) ;
        var_selector_7043 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 217)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 220)) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_outputInputSelfParameterAST::init_21_ (var_selector_7043, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 221)) ;
      } break ;
      case 2: {
        GGS_lstring var_outputInputActualParameterName_7295 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 223)) ;
        GGS_lstringlist var_structAttributeList_7338 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
        bool repeatFlag_5 = true ;
        while (repeatFlag_5) {
          if (select_galgas_33_ParameterArgumentSyntax_22 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 227)) ;
            GGS_lstring var_structAttributeName_7447 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 228)) ;
            var_structAttributeList_7338.addAssignOperation (var_structAttributeName_7447  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 229)) ;
          }else{
            repeatFlag_5 = false ;
          }
        }
        outArgument_outActualParameterList.addAssignOperation (GGS_outputInputActualParameterAST::init_21__21__21_ (var_selector_7043, var_outputInputActualParameterName_7295, var_structAttributeList_7338, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 231)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 237)) ;
        GGS_semanticExpressionAST var_initializerCall_7777 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_initializerCall_7777, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_outputInputJokerParameterAST::init_21__21_ (var_selector_7043, var_initializerCall_7777, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 239)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      GGS_lstring var_selector_7926 ;
      switch (select_galgas_33_ParameterArgumentSyntax_23 (inCompiler)) {
      case 1: {
        var_selector_7926 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 244)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 246)) ;
        var_selector_7926 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 247)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 250)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 251)) ;
        GGS_lstring var_inputActualParameterName_8137 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 252)) ;
        GGS_lstringlist var_poisonedVarNameList_8200 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_8200, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_7926, var_inputActualParameterName_8137, var_poisonedVarNameList_8200, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 254)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 260)) ;
        GGS_lstringlist var_poisonedVarNameList_8478 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_8478, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_7926, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 264)), var_poisonedVarNameList_8478, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 262)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 268)) ;
        GGS_lstring var_declarationTypeName_8720 ;
        switch (select_galgas_33_ParameterArgumentSyntax_25 (inCompiler)) {
        case 1: {
          var_declarationTypeName_8720 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 271)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_declarationTypeName_8720, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_inputActualParameterName_8918 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 275)) ;
        GGS_lstringlist var_poisonedVarNameList_8981 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_8981, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_7926, var_declarationTypeName_8720, var_inputActualParameterName_8918, var_poisonedVarNameList_8981, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 277)) ;
      } break ;
      case 4: {
        GGS_lstring var_declarationTypeName_9322 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_declarationTypeName_9322, inCompiler) ;
        GGS_lstring var_inputActualParameterName_9368 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 285)) ;
        GGS_lstringlist var_poisonedVarNameList_9431 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_9431, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_7926, var_declarationTypeName_9322, var_inputActualParameterName_9368, var_poisonedVarNameList_9431, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 287)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 294)) ;
        GGS_lstring var_declarationTypeName_9729 ;
        switch (select_galgas_33_ParameterArgumentSyntax_26 (inCompiler)) {
        case 1: {
          var_declarationTypeName_9729 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 297)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_declarationTypeName_9729, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_markedAsUnused_9919 ;
        switch (select_galgas_33_ParameterArgumentSyntax_27 (inCompiler)) {
        case 1: {
          var_markedAsUnused_9919 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 305)) ;
          var_markedAsUnused_9919 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_inputActualParameterName_10082 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 308)) ;
        GGS_lstringlist var_poisonedVarNameList_10145 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_10145, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_7926, var_declarationTypeName_9729, var_inputActualParameterName_10082, var_markedAsUnused_9919, var_poisonedVarNameList_10145, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 310)) ;
      } break ;
      case 6: {
        GGS_lstring var_inputActualParameterName_10465 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 318)) ;
        GGS_lstringlist var_poisonedVarNameList_10528 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_10528, inCompiler) ;
        outArgument_outActualParameterList.addAssignOperation (GGS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_7926, var_inputActualParameterName_10465, var_poisonedVarNameList_10528, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 320)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_16 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 170)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 172)) ;
      } break ;
      default:
        break ;
      }
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      switch (select_galgas_33_ParameterArgumentSyntax_18 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 185)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 187)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 191)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 195)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 196)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      switch (select_galgas_33_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 214)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 216)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 220)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 223)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          if (select_galgas_33_ParameterArgumentSyntax_22 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 227)) ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 228)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_from COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 237)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 5: {
      switch (select_galgas_33_ParameterArgumentSyntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 244)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 246)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 250)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 251)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 252)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 260)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 268)) ;
        switch (select_galgas_33_ParameterArgumentSyntax_25 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 275)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 4: {
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 285)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 294)) ;
        switch (select_galgas_33_ParameterArgumentSyntax_26 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_ParameterArgumentSyntax_27 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 305)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 308)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 318)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                            GGS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_28 (inCompiler) == 2) {
      GGS_bool var_isConstant_11261 ;
      GGS_lstring var_selector_11291 ;
      switch (select_galgas_33_ParameterArgumentSyntax_29 (inCompiler)) {
      case 1: {
        var_selector_11291 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 341)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 343)) ;
        var_selector_11291 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 344)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_30 (inCompiler)) {
      case 1: {
        var_isConstant_11261 = GGS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 349)) ;
        var_isConstant_11261 = GGS_bool (false) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 352)) ;
        var_isConstant_11261 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_11601 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterTypeName_11601, inCompiler) ;
      GGS_bool var_isUnused_11641 ;
      switch (select_galgas_33_ParameterArgumentSyntax_31 (inCompiler)) {
      case 1: {
        var_isUnused_11641 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 360)) ;
        var_isUnused_11641 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_11781 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 363)) ;
      outArgument_outFormalInputParameterList.addAssignOperation (var_selector_11291, var_formalParameterTypeName_11601, var_formalParameterName_11781, var_isUnused_11641, var_isConstant_11261  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 364)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_28 (inCompiler) == 2) {
      switch (select_galgas_33_ParameterArgumentSyntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 341)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 343)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_30 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 349)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 352)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_ParameterArgumentSyntax_31 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 360)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 363)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                                GGS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 380)) ;
  switch (select_galgas_33_ParameterArgumentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_12503 ;
      switch (select_galgas_33_ParameterArgumentSyntax_34 (inCompiler)) {
      case 1: {
        var_selector_12503 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 386)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 388)) ;
        var_selector_12503 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 389)) ;
      } break ;
      case 3: {
        var_selector_12503 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 391)) ;
      } break ;
      default:
        break ;
      }
      GGS_bool var_isConstant_12684 ;
      switch (select_galgas_33_ParameterArgumentSyntax_35 (inCompiler)) {
      case 1: {
        var_isConstant_12684 = GGS_bool (true) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 397)) ;
        var_isConstant_12684 = GGS_bool (false) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 400)) ;
        var_isConstant_12684 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_12914 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalParameterTypeName_12914, inCompiler) ;
      GGS_bool var_isUnused_12956 ;
      switch (select_galgas_33_ParameterArgumentSyntax_36 (inCompiler)) {
      case 1: {
        var_isUnused_12956 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 408)) ;
        var_isUnused_12956 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_13110 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 411)) ;
      outArgument_outFormalInputParameterList.addAssignOperation (var_selector_12503, var_formalParameterTypeName_12914, var_formalParameterName_13110, var_isUnused_12956, var_isConstant_12684  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 412)) ;
      if (select_galgas_33_ParameterArgumentSyntax_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 419)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 422)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 380)) ;
  switch (select_galgas_33_ParameterArgumentSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ParameterArgumentSyntax_34 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 386)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 388)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_35 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 397)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 400)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_ParameterArgumentSyntax_36 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 408)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 411)) ;
      if (select_galgas_33_ParameterArgumentSyntax_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 419)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 422)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 435)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_varName_13817 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 437)) ;
    outArgument_outPoisonedVarNameList.addAssignOperation (var_varName_13817  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 438)) ;
    if (select_galgas_33_ParameterArgumentSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 440)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 435)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 437)) ;
    if (select_galgas_33_ParameterArgumentSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas3", 440)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                             GGS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_3500 ;
      nt_semantic_5F_instruction_5F_ggs_33__ (ioArgument_ioDeclarations, var_instruction_3500, inCompiler) ;
      outArgument_outInstructionsList.addAssignOperation (var_instruction_3500  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 64)) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 67)) ;
        } break ;
        case 2: {
          GGS_string var_separator_3622 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 69)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_3622.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 70)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 70)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 71)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 71)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 79)) ;
    GGS_location var_instructionLocation_3906 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 80)) ;
    GGS_CommaSeparatedExpressionList var_testExpression_4005 ;
    nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_testExpression_4005, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 82)) ;
    GGS_semanticInstructionListAST var_else_5F_instructionList_4094 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_else_5F_instructionList_4094, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_4125 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 84)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 85)) ;
    GGS_semanticInstructionListAST var_then_5F_instructionList_4233 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_then_5F_instructionList_4233, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_4264 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 87)) ;
    GGS_ifInstructionAST var_instruction_4309 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3906, var_testExpression_4005, var_then_5F_instructionList_4233, var_endOf_5F_then_5F_branch_4264, var_else_5F_instructionList_4094, var_endOf_5F_else_5F_branch_4125, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.addAssignOperation (var_instruction_4309  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 96)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 67)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 79)) ;
    nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 82)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 85)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 105)) ;
  GGS_bool var_isOnce_4912 = GGS_bool (false) ;
  GGS_bool var_isUsefull_4935 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 110)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_4912.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 112)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 112)) ;
        }
      }
      var_isOnce_4912 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 116)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_4935.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 118)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 118)) ;
        }
      }
      var_isUsefull_4935 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_5273 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 122)) ;
  nt_function_5F_declaration_5F_ggs_33__ (var_isOnce_4912, var_isUsefull_4935, GGS_bool (false), var_functionName_5273, ioArgument_ioDeclarations, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 110)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 122)) ;
  nt_function_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_ (const GGS_bool constinArgument_inIsOnce,
                                                                                                                     const GGS_bool constinArgument_inIsUsefull,
                                                                                                                     const GGS_bool constinArgument_inPrivate,
                                                                                                                     const GGS_lstring constinArgument_inFunctionName,
                                                                                                                     GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_formalInputParameterListAST var_formalInputParameterList_5932 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_5932, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_5932.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 134)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inFunctionName.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 135)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 137)) ;
  GGS_lstring var_resultTypeName_6165 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_6165, inCompiler) ;
  GGS_lstring var_resultVariableName_6197 ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    var_resultVariableName_6197 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 141)) ;
  } break ;
  case 2: {
    var_resultVariableName_6197 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 143)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 145)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_6395 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_functionInstructionList_6395, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 147)) ;
  GGS_location var_endOfFunctionInstructionList_6435 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 148)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_resultTypeName_6165, var_resultVariableName_6197, var_functionInstructionList_6395, var_endOfFunctionInstructionList_6435, constinArgument_inPrivate, constinArgument_inIsUsefull, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 150)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_formalInputParameterList_5932, var_resultTypeName_6165, constinArgument_inIsUsefull, var_resultVariableName_6197, var_functionInstructionList_6395, var_endOfFunctionInstructionList_6435, constinArgument_inPrivate, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 161)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 137)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 141)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 145)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_ (const GGS_bool constinArgument_inIsOnce,
                                                                                                                     const GGS_bool constinArgument_inIsUsefull,
                                                                                                                     const GGS_bool constinArgument_inIsPrivate,
                                                                                                                     const GGS_lstring constinArgument_inFunctionName,
                                                                                                                     GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  GGS_formalInputParameterListAST var_formalInputParameterList_7700 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_7700, inCompiler) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_7700.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 183)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inFunctionName.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 184)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 186)) ;
  GGS_lstring var_resultTypeName_7933 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_7933, inCompiler) ;
  GGS_lstring var_resultVariableName_7956 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 188)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 189)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_8072 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_functionInstructionList_8072, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 191)) ;
  GGS_location var_endOfFunctionInstructionList_8112 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 192)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inIsOnce.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_resultTypeName_7933, var_resultVariableName_7956, var_functionInstructionList_8072, var_endOfFunctionInstructionList_8112, constinArgument_inIsPrivate, constinArgument_inIsUsefull, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 194)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), constinArgument_inFunctionName, var_formalInputParameterList_7700, var_resultTypeName_7933, constinArgument_inIsUsefull, var_resultVariableName_7956, var_functionInstructionList_8072, var_endOfFunctionInstructionList_8112, constinArgument_inIsPrivate, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 205)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_function_5F_declaration_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 186)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 189)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 191)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 222)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 223)) ;
  GGS_bool var_isOnce_9045 = GGS_bool (false) ;
  GGS_bool var_isUsefull_9068 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 228)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_9045.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 230)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 230)) ;
        }
      }
      var_isOnce_9045 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 234)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_9068.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 236)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 236)) ;
        }
      }
      var_isUsefull_9068 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_9406 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 240)) ;
  nt_function_5F_declaration_5F_ggs_33__ (var_isOnce_9045, var_isUsefull_9068, GGS_bool (true), var_functionName_9406, ioArgument_ioDeclarations, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 222)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 223)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 228)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 234)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 240)) ;
  nt_function_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 250)) ;
  GGS_bool var_isUsefull_9932 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 254)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_9932.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 256)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 256)) ;
        }
      }
      var_isUsefull_9932 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_10134 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 260)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_10236 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_10236, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 262)) ;
  GGS_lstring var_resultTypeName_10328 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_10328, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_10134, var_formalInputParameterList_10236, var_resultTypeName_10328, var_isUsefull_9932, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 264)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 250)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 254)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 260)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 262)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 285)) ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 287)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 288)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_11454 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_11454, inCompiler) ;
    GGS_lstring var_actualParameterName_11502 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 291)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_11454, var_actualParameterName_11502, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 294)) ;
    GGS_lstring var_actualParameterTypeName_11728 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_11728, inCompiler) ;
    GGS_lstring var_actualParameterName_11776 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 296)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_11728, var_actualParameterName_11776, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_11956 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 299)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_11956, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 285)) ;
  switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 287)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 291)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 294)) ;
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 296)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 299)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                  GGS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS_actualInputParameterListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_9 (inCompiler) == 2) {
      GGS_lstring var_selector_12474 ;
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        var_selector_12474 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 313)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 315)) ;
        var_selector_12474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 316)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 319)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_12474, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 320)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 322)) ;
        GGS_lstring var_actualParameterTypeName_12740 ;
        switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_12740 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 325)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_12740, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_12949 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 329)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_12474, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_12740, var_actualParameterName_12949, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 330)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 334)) ;
        GGS_lstring var_actualParameterTypeName_13163 ;
        switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_13163 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 337)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterTypeName_13163, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_13373 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 341)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_12474, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_13163, var_actualParameterName_13373, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 342)) ;
      } break ;
      case 4: {
        GGS_lstring var_actualParameterName_13578 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 346)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_12474, GGS_inputParameterVariable::init_21_ (var_actualParameterName_13578, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 347)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_9 (inCompiler) == 2) {
      switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 313)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 315)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 319)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 322)) ;
        switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 329)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 334)) ;
        switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 341)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 346)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 44)) ;
  GGS_location var_instructionLocation_2136 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas3", 45)) ;
  GGS_logListAST var_logList_2193 = GGS_logListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_loggedVariableName_2257 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 49)) ;
      var_logList_2193.addAssignOperation (var_loggedVariableName_2257, GGS_varInExpressionAST::init_21_ (var_loggedVariableName_2257, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 53)) ;
      GGS_lstring var_propertyName_2420 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 54)) ;
      var_logList_2193.addAssignOperation (var_propertyName_2420, GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_propertyName_2420.readProperty_location (), GGS_selfInExpressionAST::init_21_ (var_propertyName_2420.readProperty_location (), inCompiler COMMA_HERE), var_propertyName_2420, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 55)) ;
    } break ;
    case 3: {
      GGS_lstring var_logMessage_2639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 60)) ;
      GGS_semanticExpressionAST var_logExpression_2710 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_logExpression_2710, inCompiler) ;
      var_logList_2193.addAssignOperation (var_logMessage_2639, var_logExpression_2710  COMMA_SOURCE_FILE ("instruction-log.galgas3", 62)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_logInstructionAST::init_21__21_ (var_instructionLocation_2136, var_logList_2193, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 53)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 54)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 59)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 60)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                     GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 44)) ;
  GGS_location var_instructionLocation_2180 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 46)) ;
  GGS_lstring var_methodName_2247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 48)) ;
  GGS_actualParameterListAST var_actualParameterList_2345 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_2345, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 50)) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_2180, var_methodName_2247, var_actualParameterList_2345, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 48)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS_fixitListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 57)) ;
    GGS_bool var_hasFixItRemove_2642 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 61)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_2642.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 63)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas3", 63)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas3", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 65)) ;
          var_hasFixItRemove_2642 = GGS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas3", 69)) ;
        GGS_location var_errorLocation_2939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 70)) ;
        GGS_semanticExpressionAST var_expression_3041 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3041, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_3041, var_errorLocation_2939  COMMA_SOURCE_FILE ("instruction-error.galgas3", 72))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 72)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        GGS_location var_errorLocation_3192 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 75)) ;
        GGS_semanticExpressionAST var_expression_3294 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3294, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_3294, var_errorLocation_3192  COMMA_SOURCE_FILE ("instruction-error.galgas3", 77))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 77)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        GGS_location var_errorLocation_3450 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 80)) ;
        GGS_semanticExpressionAST var_expression_3552 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3552, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_3552, var_errorLocation_3450  COMMA_SOURCE_FILE ("instruction-error.galgas3", 82))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 82)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 61)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas3", 69)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas3", 74)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas3", 79)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 91)) ;
  GGS_location var_instructionLocation_3957 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 93)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_4069 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReceiverExpression_4069, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 95)) ;
  GGS_semanticExpressionAST var_mErrorExpression_4164 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mErrorExpression_4164, inCompiler) ;
  GGS_lstringlist var_mBuiltVariableList_4189 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 100)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_4296 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 102)) ;
      var_mBuiltVariableList_4189.addAssignOperation (var_builtVariableName_4296  COMMA_SOURCE_FILE ("instruction-error.galgas3", 103)) ;
      if (select_galgas_33_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 105)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_fixitListAST var_fixitListAST_4458 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_4458, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 109)) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_3957, var_mReceiverExpression_4069, var_mErrorExpression_4164, var_mBuiltVariableList_4189, var_fixitListAST_4458, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 93)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 95)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 100)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 102)) ;
      if (select_galgas_33_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 105)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 28)) ;
  GGS_location var_instructionLocation_1621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 30)) ;
  GGS_actualOutputArgumentList var_expressionList_1759 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1759, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualElementsInstructionAST::init_21__21_ (var_instructionLocation_1621, var_expressionList_1759, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 30)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 42)) ;
  GGS_location var_instructionLocation_2170 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 44)) ;
  GGS_semanticExpressionAST var_expression_2283 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2283, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2170, var_expression_2283, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 56)) ;
  GGS_location var_instructionLocation_2688 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 58)) ;
  GGS_semanticExpressionAST var_expression_2801 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2801, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2688, var_expression_2801, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 58)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 70)) ;
  GGS_location var_instructionLocation_3207 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 72)) ;
  GGS_semanticExpressionAST var_expression_3320 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3320, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3207, var_expression_3320, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 72)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 84)) ;
  GGS_location var_instructionLocation_3724 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 86)) ;
  GGS_semanticExpressionAST var_expression_3837 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3837, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3724, var_expression_3837, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 86)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mRoutineName_1624 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 29)) ;
  GGS_actualParameterListAST var_actualParameterList_1745 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_1745, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 31)) ;
  outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_mRoutineName_1624.readProperty_location (), var_mRoutineName_1624, var_actualParameterList_1745, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 29)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas3", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_2538 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 45)) ;
  GGS_location var_instructionLocation_2559 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 46)) ;
  GGS_lstringlist var_propertyList_2617 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 50)) ;
      GGS_lstring var_attributeName_2691 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 51)) ;
      var_propertyList_2617.addAssignOperation (var_attributeName_2691  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 52)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 55)) ;
    GGS_semanticExpressionAST var_expression_2841 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2841, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas3", 62)), var_expression_2841, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 66)) ;
    GGS_semanticExpressionAST var_expression_3147 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3147, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, var_expression_3147, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 76)) ;
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      GGS_actualOutputArgumentList var_expressionList_3472 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_3472, inCompiler) ;
      outArgument_outInstruction = GGS_plusEqualElementsInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, var_expressionList_3472, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_3769 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3769, inCompiler) ;
      outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas3", 93)), var_expression_3769, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 98)) ;
    GGS_semanticExpressionAST var_expression_4099 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4099, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas3", 105)), var_expression_4099, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 109)) ;
    GGS_semanticExpressionAST var_expression_4402 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4402, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas3", 116)), var_expression_4402, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 120)) ;
    GGS_semanticExpressionAST var_expression_4705 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4705, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas3", 127)), var_expression_4705, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 131)) ;
    GGS_semanticExpressionAST var_expression_5007 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_5007, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas3", 138)), var_expression_5007, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 142)) ;
    GGS_semanticExpressionAST var_expression_5310 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_5310, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2559, constinArgument_inHasSelfPrefix, var_receiverName_2538, var_propertyList_2617, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas3", 149)), var_expression_5310, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 50)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 51)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 55)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 66)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 76)) ;
    switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 98)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 109)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 120)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 131)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 142)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_5883 ;
    switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
    case 1: {
      var_selector_5883 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 163)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 165)) ;
      var_selector_5883 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 166)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_6063 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_6063, inCompiler) ;
    outArgument_outExpressionList.addAssignOperation (var_selector_5883, var_expression_6063, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 169))  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 169)) ;
    if (select_galgas_33_InstructionsSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 163)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 165)) ;
    } break ;
    default:
      break ;
    }
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 38)) ;
  GGS_location var_instructionLocation_2053 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas3", 39)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_2157 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReceiverExpression_2157, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 41)) ;
  GGS_semanticExpressionAST var_mWarningExpression_2252 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mWarningExpression_2252, inCompiler) ;
  GGS_fixitListAST var_fixitListAST_2325 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_2325, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_2053, var_mReceiverExpression_2157, var_mWarningExpression_2252, var_fixitListAST_2325, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 41)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                               GGS_CommaSeparatedExpressionList & outArgument_outExpressionList,
                                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_CommaSeparatedExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_1696 ;
      GGS_bool var_isConstant_1722 ;
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 34)) ;
        var_varName_1696 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 35)) ;
        var_isConstant_1722 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 38)) ;
        var_isConstant_1722 = GGS_bool (true) ;
        switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
        case 1: {
          var_varName_1696 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 43)) ;
          var_varName_1696 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 44)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 47)) ;
      GGS_semanticExpressionAST var_expression_2082 ;
      nt_expression_5F_or_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2082, inCompiler) ;
      GGS_location var_endOfReceiverExpression_2105 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 49)) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1696, var_isConstant_1722, var_expression_2082, var_endOfReceiverExpression_2105, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 56))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 51))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 51)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 59)) ;
        GGS_lstring var_typeName_2472 ;
        nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2472, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1696, var_isConstant_1722, var_expression_2082, var_endOfReceiverExpression_2105, var_typeName_2472  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 61))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 61)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_2781 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2781, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_regularExp (var_expression_2781, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_comma_5F_separated_5F_expression_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
    case 1: {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 34)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 38)) ;
        switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 43)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 47)) ;
      nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 59)) ;
        nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 97)) ;
  GGS_location var_instructionLocation_4730 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 98)) ;
  GGS_lstring var_grammarComponentName_4798 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 99)) ;
  GGS_lstring var_labelName_4871 ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_labelName_4871 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 102)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 104)) ;
    var_labelName_4871 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 107)) ;
  GGS_actualParameterListAST var_actualParameterList_5087 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_5087, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 109)) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_4730, var_actualParameterList_5087, var_grammarComponentName_4798, var_labelName_4871, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 97)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 99)) ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 104)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 107)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 109)) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 121)) ;
  GGS_semanticExpressionAST var_sourceExpression_5883 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_5883, inCompiler) ;
  GGS_location var_endOfSourceExpression_5908 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 123)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6068 ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6068 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 129)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_6068, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_5883, var_endOfSourceExpression_5908, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6068, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 121)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 129)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 151)) ;
  GGS_semanticExpressionAST var_sourceExpression_7284 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_7284, inCompiler) ;
  GGS_location var_endOfSourceExpression_7319 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 153)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 154)) ;
  GGS_semanticExpressionAST var_nameExpression_7424 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_nameExpression_7424, inCompiler) ;
  GGS_location var_endOfNameExpression_7457 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 156)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_7606 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_7606 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 162)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_7606, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_7284, var_endOfSourceExpression_7319, var_nameExpression_7424, var_endOfNameExpression_7457, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_7606, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 151)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 154)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 162)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 184)) ;
  GGS_location var_instructionLocation_8704 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 185)) ;
  GGS_lstring var_grammarComponentName_8772 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 186)) ;
  GGS_lstring var_labelName_8845 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_labelName_8845 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 189)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 191)) ;
    var_labelName_8845 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 192)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_ (ioArgument_ioDeclarations, var_instructionLocation_8704, var_grammarComponentName_8772, var_labelName_8845, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 184)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 186)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 191)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 192)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_location constinArgument_inInstructionLocation,
                                                                                                                              const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 204)) ;
  GGS_semanticExpressionAST var_mSourceExpression_9690 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSourceExpression_9690, inCompiler) ;
  GGS_location var_endOfSourceExpression_9716 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 206)) ;
  GGS_actualParameterListAST var_actualParameterList_9834 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_9834, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_9975 ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_9975 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 213)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_9975, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_9690, var_endOfSourceExpression_9716, var_actualParameterList_9834, var_grammarInstructionSyntaxDirectedTranslationResult_9975, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 204)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 213)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_location constinArgument_inInstructionLocation,
                                                                                                                              const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 235)) ;
  GGS_semanticExpressionAST var_sourceExpression_11160 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_11160, inCompiler) ;
  GGS_location var_endOfSourceExpression_11195 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 237)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 238)) ;
  GGS_semanticExpressionAST var_nameExpression_11300 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_nameExpression_11300, inCompiler) ;
  GGS_location var_endOfNameExpression_11333 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 241)) ;
  GGS_actualParameterListAST var_actualParameterList_11448 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_11448, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_11589 ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_11589 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 248)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_11589, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_11160, var_endOfSourceExpression_11195, var_nameExpression_11300, var_endOfNameExpression_11333, var_actualParameterList_11448, var_grammarInstructionSyntaxDirectedTranslationResult_11589, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 235)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 238)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 241)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 248)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 44)) ;
  GGS_location var_instructionLocation_2365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 47)) ;
  GGS_semanticExpressionAST var_variantExpression_2493 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_variantExpression_2493, inCompiler) ;
  GGS_location var_endOfVariantExpression_2519 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 50)) ;
  GGS_semanticInstructionListAST var_firstInstructions_2662 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstInstructions_2662, inCompiler) ;
  GGS_location var_endOfFirstInstructions_2696 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 55)) ;
  GGS_semanticExpressionAST var_loopExpression_2815 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_loopExpression_2815, inCompiler) ;
  GGS_location var_endOfLoopExpression_2838 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 58)) ;
  GGS_semanticInstructionListAST var_secondInstructions_2971 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_secondInstructions_2971, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2998 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 61)) ;
  GGS_location var_endOfLoopInstruction_3057 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 62)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_2365, var_variantExpression_2493, var_endOfVariantExpression_2519, var_firstInstructions_2662, var_endOfFirstInstructions_2696, var_loopExpression_2815, var_endOfLoopExpression_2838, var_secondInstructions_2971, var_endOfSecondInstructions_2998, var_endOfLoopInstruction_3057, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 47)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 55)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 58)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 28)) ;
  GGS_location var_instructionLocation_1618 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 29)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_1722 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReceiverExpression_1722, inCompiler) ;
  GGS_lstring var_mMethodName_1764 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 31)) ;
  GGS_actualParameterListAST var_actualParameterList_1855 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_1855, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 33)) ;
  outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_1618, var_mReceiverExpression_1722, var_mMethodName_1764, var_actualParameterList_1855, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 28)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 31)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas3", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1830 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 33)) ;
  GGS_CommaSeparatedExpressionList var_testExpression_1927 ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_testExpression_1927, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 35)) ;
  GGS_semanticInstructionListAST var_then_5F_instructionList_2012 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_then_5F_instructionList_2012, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_2041 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 37)) ;
  GGS_semanticInstructionListAST var_else_5F_instructionList_2120 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2120 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 42)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_else_5F_instructionList_2120, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 45)) ;
    GGS_semanticInstructionAST var_instruction_2381 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_2381, inCompiler) ;
    GGS_semanticInstructionListAST temp_0 = GGS_semanticInstructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 47)) ;
    temp_0.plusPlusAssignOperation (GGS_semanticInstructionListAST_2E_element::init_21_ (var_instruction_2381, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 47)) ;
    var_else_5F_instructionList_2120 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_1830, var_testExpression_1927, var_then_5F_instructionList_2012, var_endOf_5F_then_5F_branchLocation_2041, var_else_5F_instructionList_2120, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 55)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 42)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 45)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 63)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 63)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  GGS_location var_instructionLocation_1623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 29)) ;
  GGS_semanticExpressionAST var_switchExpression_1704 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_switchExpression_1704, inCompiler) ;
  GGS_location var_endOfSwitchExpression_1729 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 31)) ;
  GGS_switchBranchesAST var_switchBranches_1795 = GGS_switchBranchesAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 34)) ;
    GGS__5B_lstring_5D_ var_constantNameList_1909 ;
    GGS_switchExtractedValuesListAST var_associatedValuesExtraction_1969 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_1909, var_associatedValuesExtraction_1969, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 39)) ;
    GGS_semanticInstructionListAST var_instructions_2067 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_instructions_2067, inCompiler) ;
    var_switchBranches_1795.addAssignOperation (var_constantNameList_1909, var_associatedValuesExtraction_1969, var_instructions_2067, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 41))  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 41)) ;
    if (select_galgas_33_InstructionsSyntax_37 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 44)) ;
  GGS_location var_endOfSwitchInstruction_2216 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 45)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1623, var_switchExpression_1704, var_endOfSwitchExpression_1729, var_switchBranches_1795, var_endOfSwitchInstruction_2216, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 28)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 34)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 39)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_37 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_2823 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 62)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_2823, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 63)) ;
    }
    if (select_galgas_33_InstructionsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3039 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 74)) ;
        UpEnumerator_range enumerator_3082 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3039.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 75)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 75)))) ;
        while (enumerator_3082.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 76)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 76)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 76)) ;
          enumerator_3082.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 79)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 80)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 80)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 80)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_3305 ;
        switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_3305, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_3305 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 86)) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_constantMarkedAsUnused_3471 ;
        switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3471 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 92)) ;
          var_constantMarkedAsUnused_3471 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_3681 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 95)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (var_typeName_3305, var_constantName_3681, var_constantMarkedAsUnused_3471  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 96)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_40 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 100)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 62)) ;
    if (select_galgas_33_InstructionsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 79)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 92)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 95)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_40 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 100)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i36_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lbigint var_count_4195 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 86)) ;
  GGS_uint var_n_4217 = var_count_4195.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 87)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_4217.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_4195.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas3", 89)) ;
    }
  }
  if (var_n_4217.isValid ()) {
    uint32_t variant_4318 = var_n_4217.uintValue () ;
    bool loop_4318 = true ;
    while (loop_4318) {
      loop_4318 = GGS_bool (ComparisonKind::greaterThan, var_n_4217.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_4318) {
        loop_4318 = GGS_bool (ComparisonKind::greaterThan, var_n_4217.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4318 && (0 == variant_4318)) {
        loop_4318 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas3", 91)) ;
      }
      if (loop_4318) {
        variant_4318 -= 1 ;
        ioArgument_ioElementList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 92)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 92))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 92)) ;
        var_n_4217.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 93)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_typeName_4713 ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_typeName_4713 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 103)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_4713, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 108)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_4713, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 109))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 109)) ;
  } break ;
  case 2: {
    GGS_bool var_isUnused_4924 ;
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
      var_isUnused_4924 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 115)) ;
      var_isUnused_4924 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_constantName_5064 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 118)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_4713, var_isUnused_4924, var_constantName_5064  COMMA_SOURCE_FILE ("instruction-for.galgas3", 119)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 108)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 115)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 118)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 127)) ;
  GGS_forInstructionEnumeratedObjectElementListAST var_elementList_5450 = GGS_forInstructionEnumeratedObjectElementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_5450, inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_47 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_5613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 135)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_5723 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_enumeratedExpression_5723, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_5450, var_enumeratedExpression_5723, var_location_5613, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_47 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 135)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_6187 ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
    var_typeName_6187 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 150)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6187, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_6323 ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 156)) ;
    var_enumerationVariable_6323 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 157)) ;
  } break ;
  case 2: {
    var_enumerationVariable_6323 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 161)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_6531 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_enumeratedExpression_6531, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_6187, var_enumerationVariable_6323, var_enumeratedExpression_6531, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 167)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 156)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 159)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 161)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 175)) ;
  GGS_location var_instructionLocation_6992 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 176)) ;
  GGS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_7037 = GGS_forInstructionEnumeratedObjectListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_7130 ;
    switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
    case 1: {
      var_ascending_7130 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 183)) ;
      var_ascending_7130 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_7332 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_7332, inCompiler) ;
    var_mEnumeratedObjectList_7037.addAssignOperation (var_ascending_7130, var_enumeratedObject_7332  COMMA_SOURCE_FILE ("instruction-for.galgas3", 187)) ;
    if (select_galgas_33_InstructionsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_7468 ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7468 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 193)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 195)) ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mWhileExpression_7468, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_7655 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 198)) ;
  GGS_semanticInstructionListAST var_mBeforeInstructionList_7731 ;
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7731 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 203)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mBeforeInstructionList_7731, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_7945 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 206)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 207)) ;
  GGS_lstring var_indexVariableName_8008 ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_indexVariableName_8008 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 210)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 212)) ;
    var_indexVariableName_8008 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 213)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 214)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticInstructionListAST var_mDoInstructionList_8227 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mDoInstructionList_8227, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_8254 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 217)) ;
  GGS_semanticInstructionListAST var_mBetweenInstructionList_8323 ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8323 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 222)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mBetweenInstructionList_8323, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_8541 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 225)) ;
  GGS_semanticInstructionListAST var_mAfterInstructionList_8615 ;
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8615 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 230)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mAfterInstructionList_8615, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_8825 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 234)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_8879 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 235)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_6992, var_mEnumeratedObjectList_7037, var_indexVariableName_8008, var_mWhileExpression_7468, var_endof_5F_while_5F_expression_7655, var_mBeforeInstructionList_7731, var_endof_5F_before_5F_branch_7945, var_mBetweenInstructionList_8323, var_endof_5F_between_5F_branch_8541, var_mDoInstructionList_8227, var_endof_5F_do_5F_branch_8254, var_mAfterInstructionList_8615, var_endof_5F_after_5F_branch_8825, var_endof_5F_foreach_5F_instruction_8879, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 183)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 195)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 203)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 207)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 212)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 213)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 214)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 222)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 230)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 234)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas3", 36)) ;
  GGS_location var_instructionLocation_1950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas3", 37)) ;
  GGS_semanticExpressionAST var_expression_2054 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2054, inCompiler) ;
  outArgument_outInstruction = GGS_messageInstructionAST::init_21__21_ (var_instructionLocation_1950, var_expression_2054, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas3", 36)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 48)) ;
  GGS_location var_instructionLocation_2429 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 50)) ;
  GGS_bool var_prefixedBySelf_2489 ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_2489 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 55)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 56)) ;
    var_prefixedBySelf_2489 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_2632 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 59)) ;
  GGS_lstringlist var_mReceiverStructAttributes_2654 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_58 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 63)) ;
      GGS_lstring var_structAttribute_2753 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 64)) ;
      var_mReceiverStructAttributes_2654.addAssignOperation (var_structAttribute_2753  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_typeNameForCasting_2846 ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_2846 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas3", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 71)) ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeNameForCasting_2846, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSetterName_3028 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 74)) ;
  GGS_actualParameterListAST var_actualParameterList_3119 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_3119, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 76)) ;
  outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21__21_ (var_instructionLocation_2429, var_prefixedBySelf_2489, var_mReceiverName_2632, var_mReceiverStructAttributes_2654, var_typeNameForCasting_2846, var_mSetterName_3028, var_actualParameterList_3119, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 50)) ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 55)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 59)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_58 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 63)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 71)) ;
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 74)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 92)) ;
  GGS_location var_instructionLocation_3655 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 95)) ;
  GGS_lstring var_mSetterName_3734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 96)) ;
  GGS_actualParameterListAST var_actualParameterList_3825 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_3825, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 98)) ;
  outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_3655, var_mSetterName_3734, var_actualParameterList_3825, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 96)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 28)) ;
  GGS_location var_instructionLocation_1621 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 29)) ;
  GGS_semanticInstructionListAST var_firstInstructions_1745 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_firstInstructions_1745, inCompiler) ;
  GGS_location var_endOfFirstInstructions_1779 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 33)) ;
  GGS_CommaSeparatedExpressionList var_loopExpression_1891 ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_loopExpression_1891, inCompiler) ;
  GGS_location var_endOfLoopExpression_1914 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 36)) ;
  GGS_semanticInstructionListAST var_secondInstructions_2047 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_secondInstructions_2047, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2074 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 39)) ;
  GGS_location var_endOfLoopInstruction_2133 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 40)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_1621, var_firstInstructions_1745, var_endOfFirstInstructions_1779, var_loopExpression_1891, var_endOfLoopExpression_1914, var_secondInstructions_2047, var_endOfSecondInstructions_2074, var_endOfLoopInstruction_2133, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 28)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 33)) ;
  nt_comma_5F_separated_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 53)) ;
  GGS_lstring var_typeName_2674 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2674, inCompiler) ;
  GGS_lstring var_constantName_2705 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_2674.readProperty_location (), var_typeName_2674, var_constantName_2705, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 63)) ;
    GGS_semanticExpressionAST var_sourceExpression_2953 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2953, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_2674.readProperty_location (), GGS_bool (true), var_typeName_2674, var_constantName_2705, var_sourceExpression_2953, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 53)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 55)) ;
  switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 63)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 79)) ;
  GGS_lstring var_variableName_3480 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 81)) ;
  GGS_semanticExpressionAST var_sourceExpression_3568 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_3568, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3480.readProperty_location (), var_variableName_3480, var_sourceExpression_3568, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 81)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 36)) ;
  GGS_location var_instructionLocation_1939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 37)) ;
  GGS_lstringlist var_dropList_1997 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2047 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 40)) ;
    var_dropList_1997.addAssignOperation (var_variableName_2047  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 41)) ;
    if (select_galgas_33_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_1939, var_dropList_1997, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 40)) ;
    if (select_galgas_33_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 44)) ;
  GGS_lstring var_variableName_2279 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 46)) ;
  GGS_semanticExpressionAST var_sourceExpression_2367 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2367, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_2279.readProperty_location (), var_variableName_2279, var_sourceExpression_2367, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 46)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 59)) ;
  GGS_lstring var_typeName_2850 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_2850, inCompiler) ;
  GGS_lstring var_variableName_2881 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 61)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_2850.readProperty_location (), var_typeName_2850, var_variableName_2881, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 69)) ;
    GGS_semanticExpressionAST var_sourceExpression_3132 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_3132, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_2850.readProperty_location (), GGS_bool (false), var_typeName_2850, var_variableName_2881, var_sourceExpression_3132, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 59)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 61)) ;
  switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 69)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 36)) ;
  GGS_location var_instructionLocation_1962 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 38)) ;
  GGS_semanticExpressionAST var_sourceExpression_2074 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_sourceExpression_2074, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21_ (var_instructionLocation_1962, var_sourceExpression_2074, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 38)) ;
  GGS_location var_instructionLocation_2029 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 39)) ;
  GGS_lstring var_mTypeName_2092 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 40)) ;
  GGS_lstring var_mMethodName_2168 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 41)) ;
  GGS_actualParameterListAST var_actualParameterList_2259 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_actualParameterList_2259, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 43)) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2029, var_mTypeName_2092, var_mMethodName_2168, var_actualParameterList_2259, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 44)) ;
  GGS_location var_instructionLocation_2174 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 48)) ;
  GGS_actualOutputArgumentList var_actualParameterList_2295 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_actualParameterList_2295, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 50)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2174, var_actualParameterList_2295, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 48)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_1627 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 29)) ;
  GGS_lstring var_optionalProperty_1664 ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
    var_optionalProperty_1664 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 32)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 34)) ;
    GGS_lstring var_attributeName_1769 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 35)) ;
    var_optionalProperty_1664 = var_attributeName_1769 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 38)) ;
  GGS_semanticExpressionAST var_mSourceExpression_1905 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSourceExpression_1905, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_1627.readProperty_location (), var_mTargetVariableName_1627, var_optionalProperty_1664, var_mSourceExpression_1905, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 29)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 34)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 53)) ;
  GGS_lstring var_mTargetVariableName_2394 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 54)) ;
  GGS_lstring var_optionalProperty_2431 ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
    var_optionalProperty_2431 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 59)) ;
    GGS_lstring var_attributeName_2536 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 60)) ;
    var_optionalProperty_2431 = var_attributeName_2536 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 63)) ;
  GGS_semanticExpressionAST var_mSourceExpression_2672 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_mSourceExpression_2672, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_2394.readProperty_location (), var_mTargetVariableName_2394, var_optionalProperty_2431, var_mSourceExpression_2672, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 63)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 32)) ;
  GGS_bool var_isUsefull_1766 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 36)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1766.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 38)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 38)) ;
        }
      }
      var_isUsefull_1766 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_1977 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 42)) ;
  GGS_formalParameterListAST var_formalParameterList_2072 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2072, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_1977, var_formalParameterList_2072, var_isUsefull_1766, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 36)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas3", 42)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 31)) ;
  GGS_bool var_isUsefull_1723 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 35)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1723.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 37)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 37)) ;
        }
      }
      var_isUsefull_1723 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_1925 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 41)) ;
  GGS_formalParameterListAST var_formalParameterList_2021 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2021, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 43)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_2136 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRoutineInstructionList_2136, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 45)) ;
  GGS_location var_endOfInstructionList_2176 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_mRoutineName_1925, var_formalParameterList_2021, var_isUsefull_1723, var_mRoutineInstructionList_2136, var_endOfInstructionList_2176, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 41)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 43)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i57_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 62)) ;
  GGS_bool var_isUsefull_2719 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 66)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2719.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 68)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 68)) ;
        }
      }
      var_isUsefull_2719 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_2921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 72)) ;
  GGS_formalParameterListAST var_formalParameterList_3017 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3017, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 74)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_3132 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_mRoutineInstructionList_3132, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 76)) ;
  GGS_location var_endOfInstructionList_3172 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_mRoutineName_2921, var_formalParameterList_3017, var_isUsefull_2719, var_mRoutineInstructionList_3132, var_endOfInstructionList_3172, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i57_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 72)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 74)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 76)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 60)) ;
  GGS_lstring var_mFilewrapperName_3178 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 62)) ;
  GGS_lstring var_mFilewrapperPath_3264 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 63)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_3315 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_3315, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_3384 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_3384, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_3469 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_3469, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 70)), var_mFilewrapperName_3178, var_mFilewrapperPath_3264, var_filewrapperTextFileExtensionList_3315, var_filewrapperBinaryFileExtensionList_3384, var_filewrapperTemplateList_3469, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 60)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 63)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 82)) ;
  GGS_lstring var_mFilewrapperName_4079 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 84)) ;
  GGS_lstring var_mFilewrapperPath_4165 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 85)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_4216 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_4216, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_4285 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_4285, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_4370 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_4370, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 92)), var_mFilewrapperName_4079, var_mFilewrapperPath_4165, var_filewrapperTextFileExtensionList_4216, var_filewrapperBinaryFileExtensionList_4285, var_filewrapperTemplateList_4370, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 82)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 85)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 105)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5050 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 109)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssignOperation (var_pathExtension_5050  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 110)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 105)) ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 109)) ;
      if (select_galgas_33_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 122)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5491 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 126)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssignOperation (var_pathExtension_5491  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 127)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 122)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 126)) ;
      if (select_galgas_33_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 129)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 132)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 139)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 143)) ;
      GGS_lstring var_mFilewrapperTemplateName_5992 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 144)) ;
      GGS_lstring var_mFilewrapperTemplatePath_6039 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 145)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_6111 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          GGS_lstring var_selector_6209 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 149)) ;
          GGS_lstring var_typeName_6271 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6271, inCompiler) ;
          GGS_bool var_isUnused_6298 ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
            var_isUnused_6298 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 155)) ;
            var_isUnused_6298 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6443 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 158)) ;
          var_filewrapperTemplateFormalInputParameters_6111.addAssignOperation (var_selector_6209, var_typeName_6271, var_argumentName_6443, var_isUnused_6298  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 159)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 161)) ;
          GGS_lstring var_selector_6588 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 162)) ;
          GGS_lstring var_typeName_6660 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_typeName_6660, inCompiler) ;
          GGS_bool var_isUnused_6687 ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_isUnused_6687 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 168)) ;
            var_isUnused_6687 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_6832 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 171)) ;
          var_filewrapperTemplateFormalInputParameters_6111.addAssignOperation (var_selector_6588, var_typeName_6660, var_argumentName_6832, var_isUnused_6687  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 172)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssignOperation (var_mFilewrapperTemplateName_5992, var_mFilewrapperTemplatePath_6039, var_filewrapperTemplateFormalInputParameters_6111  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 174)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 179)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 145)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 149)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 155)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 158)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 161)) ;
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 168)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 171)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas3", 179)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i6_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.ggs", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.ggs", 31)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.ggs", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.ggs", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.ggs", 36)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 38)) ;
      GGS_lstring var_value_1794 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 39)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_1794.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1794.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.ggs", 41)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 43)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.ggs", 44)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.ggs", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.ggs", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 51)) ;
      GGS_lstring var_value_2110 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 52)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_2110.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_2110.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.ggs", 54)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 56)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.ggs", 57)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.ggs", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.ggs", 62))  COMMA_SOURCE_FILE ("accessControl.ggs", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 64)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.ggs", 65))  COMMA_SOURCE_FILE ("accessControl.ggs", 65)) ;
      GGS_lstring var_value_2541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 66)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_2541.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2541.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.ggs", 68)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 70)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_acces_5F_control_i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_public COMMA_SOURCE_FILE ("accessControl.ggs", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_protected COMMA_SOURCE_FILE ("accessControl.ggs", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 43)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_private COMMA_SOURCE_FILE ("accessControl.ggs", 47)) ;
    switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 51)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 56)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.ggs", 60)) ;
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.ggs", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.ggs", 70)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 42)) ;
  GGS_lstring var_typeName_2293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 46)) ;
      GGS_lstring var_t_2398 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 47)) ;
      var_typeName_2293 = function_makeEmbeddedTypeLName (var_typeName_2293, var_t_2398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 50)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2598 ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2598, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2598, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 57)) ;
  GGS_lstring var_mReturnedTypeName_2876 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2876, inCompiler) ;
  GGS_lstring var_resultVariableName_2911 ;
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    var_resultVariableName_2911 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 61)) ;
  } break ;
  case 2: {
    var_resultVariableName_2911 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 63)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 65)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3109 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3109, inCompiler) ;
  GGS_location var_endOfInstructionList_3150 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 68)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_2293, var_getterName_2507, var_formalInputParameterList_2598, var_mReturnedTypeName_2876, var_resultVariableName_2911, var_routineInstructionList_3109, var_endOfInstructionList_3150, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 42)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 57)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 61)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 65)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i8_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                   GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 85)) ;
  GGS_lstring var_typeName_3742 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_16 (inCompiler) == 2) {
      GGS_lstring var_t_3804 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 89)) ;
      var_typeName_3742 = function_makeEmbeddedTypeLName (var_typeName_3742, var_t_3804, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 90)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 91)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_3923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 93)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4014 ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_4014, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_4014, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 100)) ;
  GGS_lstring var_mReturnedTypeName_4292 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_4292, inCompiler) ;
  GGS_lstring var_resultVariableName_4327 ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
    var_resultVariableName_4327 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 104)) ;
  } break ;
  case 2: {
    var_resultVariableName_4327 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 106)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 108)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4553 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_4553, inCompiler) ;
  GGS_location var_endOfInstructionList_4594 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 111)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_3742, var_getterName_3923, var_formalInputParameterList_4014, var_mReturnedTypeName_4292, var_resultVariableName_4327, var_routineInstructionList_4553, var_endOfInstructionList_4594, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 89)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 91)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 93)) ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 100)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 104)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 108)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 111)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 39)) ;
  GGS_lstring var_typeName_2038 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 43)) ;
      GGS_lstring var_t_2151 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 44)) ;
      var_typeName_2038 = function_makeEmbeddedTypeLName (var_typeName_2038, var_t_2151, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2260 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 47)) ;
  GGS_formalParameterListAST var_formalParameterList_2378 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2378, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2038, var_methodName_2260, var_formalParameterList_2378, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_19 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 43)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i10_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 62)) ;
  GGS_lstring var_methodName_2876 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 63)) ;
  GGS_formalParameterListAST var_formalParameterList_2994 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2994, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_2876, var_formalParameterList_2994, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 62)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 63)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 28)) ;
  GGS_lstring var_className_1571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 29)) ;
  GGS_lstring var_setterName_1658 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 30)) ;
  GGS_formalParameterListAST var_formalParameterList_1768 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1768, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_className_1571, var_setterName_1658, var_formalParameterList_1768, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 30)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i12_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 44)) ;
  GGS_lstring var_setterName_2243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 45)) ;
  GGS_formalParameterListAST var_formalParameterList_2353 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2353, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_setterName_2243, var_formalParameterList_2353, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas3", 45)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas3", 39)) ;
  GGS_lstring var_typeName_2103 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 43)) ;
      GGS_lstring var_t_2200 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 44)) ;
      var_typeName_2103 = function_makeEmbeddedTypeLName (var_typeName_2103, var_t_2200, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 47)) ;
  GGS_formalParameterListAST var_formalParameterList_2411 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2411, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 49)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2498 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2498, inCompiler) ;
  GGS_location var_endOfSetterLocation_2539 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 52)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2103, var_setterName_2309, var_formalParameterList_2411, var_routineInstructionList_2498, var_endOfSetterLocation_2539, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas3", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 43)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 44)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 47)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 49)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas3", 66)) ;
  GGS_lstring var_typeName_3027 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      GGS_lstring var_t_3089 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 70)) ;
      var_typeName_3027 = function_makeEmbeddedTypeLName (var_typeName_3027, var_t_3089, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 71)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 72)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3208 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 74)) ;
  GGS_formalParameterListAST var_formalParameterList_3310 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3310, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 76)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3425 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3425, inCompiler) ;
  GGS_location var_endOfSetterLocation_3466 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 78)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 79)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3027, var_setterName_3208, var_formalParameterList_3310, var_routineInstructionList_3425, var_endOfSetterLocation_3466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas3", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas3", 70)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 72)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 74)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 76)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 25)) ;
  GGS_lstring var_typeName_1446 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_22 (inCompiler) == 2) {
      GGS_lstring var_t_1541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 30)) ;
      var_typeName_1446 = function_makeEmbeddedTypeLName (var_typeName_1446, var_t_1541, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas3", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 34)) ;
  GGS_formalInputParameterListAST var_formalParameterList_1702 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1702, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 36)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1789 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1789, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 38)) ;
  GGS_location var_endOfMethodLocation_1828 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1446, var_formalParameterList_1702, var_routineInstructionList_1789, var_endOfMethodLocation_1828, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-initializer.galgas3", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 34)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 36)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 53)) ;
  GGS_formalInputParameterListAST var_formalParameterList_2394 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2394, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 55)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2481 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2481, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 57)) ;
  GGS_location var_endOfMethodLocation_2520 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 58)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inClassName, var_formalParameterList_2394, var_routineInstructionList_2481, var_endOfMethodLocation_2520, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 53)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 55)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 40)) ;
  GGS_lstring var_typeName_2158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 44)) ;
      GGS_lstring var_t_2273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 45)) ;
      var_typeName_2158 = function_makeEmbeddedTypeLName (var_typeName_2158, var_t_2273, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2382 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 48)) ;
  GGS_formalParameterListAST var_formalParameterList_2492 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2492, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 50)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2579 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2579, inCompiler) ;
  GGS_location var_endOfSetterLocation_2620 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2158, var_setterName_2382, var_formalParameterList_2492, var_routineInstructionList_2579, var_endOfSetterLocation_2620, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_23 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 48)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 69)) ;
  GGS_lstring var_typeName_3167 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      GGS_lstring var_t_3229 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 73)) ;
      var_typeName_3167 = function_makeEmbeddedTypeLName (var_typeName_3167, var_t_3229, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_3348 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 77)) ;
  GGS_formalParameterListAST var_formalParameterList_3458 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_3458, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 79)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3573 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3573, inCompiler) ;
  GGS_location var_endOfSetterLocation_3614 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3167, var_setterName_3348, var_formalParameterList_3458, var_routineInstructionList_3573, var_endOfSetterLocation_3614, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 77)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 79)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 26)) ;
  GGS_lstring var_typeName_1449 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 30)) ;
      GGS_lstring var_t_1554 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 31)) ;
      var_typeName_1449 = function_makeEmbeddedTypeLName (var_typeName_1449, var_t_1554, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 34)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1745 ;
  switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_1745, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1745, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 41)) ;
  GGS_lstring var_returnedTypeName_2032 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2032, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_1449, var_getterName_1654, var_formalInputParameterList_1745, var_returnedTypeName_2032, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 25)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 26)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 30)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 34)) ;
  switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 41)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 57)) ;
  GGS_lstring var_typeName_2542 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 61)) ;
      GGS_lstring var_t_2614 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 62)) ;
      var_typeName_2542 = function_makeEmbeddedTypeLName (var_typeName_2542, var_t_2614, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 63)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_2714 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 65)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2806 ;
  switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2806, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2806, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 72)) ;
  GGS_lstring var_returnedTypeName_3093 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3093, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2542, var_mGetterName_2714, var_formalInputParameterList_2806, var_returnedTypeName_3093, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 62)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 65)) ;
  switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 72)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas3", 27)) ;
  GGS_lstring var_typeName_1547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 31)) ;
      GGS_lstring var_t_1644 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 32)) ;
      var_typeName_1547 = function_makeEmbeddedTypeLName (var_typeName_1547, var_t_1644, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1753 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 35)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_1836 ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_1836, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_1836, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 42)) ;
  GGS_lstring var_mReturnedTypeName_2114 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_2114, inCompiler) ;
  GGS_lstring var_resultVariableName_2149 ;
  switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
  case 1: {
    var_resultVariableName_2149 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 46)) ;
  } break ;
  case 2: {
    var_resultVariableName_2149 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 48)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 50)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2375 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2375, inCompiler) ;
  GGS_location var_endOfInstructionList_2416 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_1547, var_getterName_1753, var_formalInputParameterList_1836, var_mReturnedTypeName_2114, var_resultVariableName_2149, var_routineInstructionList_2375, var_endOfInstructionList_2416, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas3", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 35)) ;
  switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 42)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas3", 69)) ;
  GGS_lstring var_getterName_3006 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 70)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3089 ;
  switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3089, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3089, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 77)) ;
  GGS_lstring var_mReturnedTypeName_3367 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_mReturnedTypeName_3367, inCompiler) ;
  GGS_lstring var_resultVariableName_3402 ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    var_resultVariableName_3402 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 81)) ;
  } break ;
  case 2: {
    var_resultVariableName_3402 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 83)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 85)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3628 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_3628, inCompiler) ;
  GGS_location var_endOfInstructionList_3669 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 88)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_3006, var_formalInputParameterList_3089, var_mReturnedTypeName_3367, var_resultVariableName_3402, var_routineInstructionList_3628, var_endOfInstructionList_3669, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 89)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas3", 69)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 70)) ;
  switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 77)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 81)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 85)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 28)) ;
  GGS_lstring var_typeName_1562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 32)) ;
      GGS_lstring var_t_1677 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 33)) ;
      var_typeName_1562 = function_makeEmbeddedTypeLName (var_typeName_1562, var_t_1677, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1786 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 36)) ;
  GGS_formalParameterListAST var_formalParameterList_1896 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1896, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 38)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1983 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1983, inCompiler) ;
  GGS_location var_endOfMethodLocation_2014 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1562, var_methodName_1786, var_formalParameterList_1896, var_routineInstructionList_1983, var_endOfMethodLocation_2014, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 38)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 56)) ;
  GGS_lstring var_typeName_2548 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_35 (inCompiler) == 2) {
      GGS_lstring var_t_2610 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 60)) ;
      var_typeName_2548 = function_makeEmbeddedTypeLName (var_typeName_2548, var_t_2610, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 62)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2729 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 64)) ;
  GGS_formalParameterListAST var_formalParameterList_2839 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2839, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 66)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2954 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2954, inCompiler) ;
  GGS_location var_endOfMethodLocation_2995 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 69)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2548, var_methodName_2729, var_formalParameterList_2839, var_routineInstructionList_2954, var_endOfMethodLocation_2995, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 60)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 62)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 64)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 66)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 40)) ;
  GGS_lstring var_typeName_2111 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 44)) ;
      GGS_lstring var_t_2224 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 45)) ;
      var_typeName_2111 = function_makeEmbeddedTypeLName (var_typeName_2111, var_t_2224, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2324 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 48)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_2423 ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_2423, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_2423, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 55)) ;
  GGS_lstring var_returnedTypeName_2701 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_2701, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2111, var_getterName_2324, var_formalInputParameterList_2423, var_returnedTypeName_2701, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 48)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 55)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 71)) ;
  GGS_lstring var_typeName_3181 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_38 (inCompiler) == 2) {
      GGS_lstring var_t_3243 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 75)) ;
      var_typeName_3181 = function_makeEmbeddedTypeLName (var_typeName_3181, var_t_3243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 76)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_3353 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 79)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_3452 ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_formalInputParameterList_3452, inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalInputParameterList_3452, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 86)) ;
  GGS_lstring var_returnedTypeName_3730 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_returnedTypeName_3730, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3181, var_getterName_3353, var_formalInputParameterList_3452, var_returnedTypeName_3730, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 75)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 77)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 79)) ;
  switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 86)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 29)) ;
  GGS_lstring var_typeName_1577 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 33)) ;
      GGS_lstring var_t_1690 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 34)) ;
      var_typeName_1577 = function_makeEmbeddedTypeLName (var_typeName_1577, var_t_1690, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_1799 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 37)) ;
  GGS_formalParameterListAST var_formalParameterList_1917 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1917, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1577, var_setterName_1799, var_formalParameterList_1917, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_40 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 37)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 52)) ;
  GGS_lstring var_typeName_2392 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_41 (inCompiler) == 2) {
      GGS_lstring var_t_2454 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 56)) ;
      var_typeName_2392 = function_makeEmbeddedTypeLName (var_typeName_2392, var_t_2454, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2573 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 60)) ;
  GGS_formalParameterListAST var_formalParameterList_2691 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2691, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionSetterAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2392, var_setterName_2573, var_formalParameterList_2691, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_41 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas3", 60)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 25)) ;
  GGS_lstring var_typeName_1446 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 27)) ;
  GGS_equatableComparableExtension var_theExtension_1539 ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 30)) ;
    var_theExtension_1539 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 33)) ;
    var_theExtension_1539 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 34)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_1446, var_theExtension_1539, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 30)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 28)) ;
  GGS_lstring var_typeName_1562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 32)) ;
      GGS_lstring var_t_1667 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 33)) ;
      var_typeName_1562 = function_makeEmbeddedTypeLName (var_typeName_1562, var_t_1667, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1776 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 36)) ;
  GGS_formalParameterListAST var_formalParameterList_1886 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1886, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_1562, var_methodName_1776, var_formalParameterList_1886, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 28)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_43 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 32)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 33)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 36)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i31_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 50)) ;
  GGS_lstring var_typeName_2336 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_44 (inCompiler) == 2) {
      GGS_lstring var_t_2398 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 54)) ;
      var_typeName_2336 = function_makeEmbeddedTypeLName (var_typeName_2336, var_t_2398, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2517 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 58)) ;
  GGS_formalParameterListAST var_formalParameterList_2627 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2627, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2336, var_methodName_2517, var_formalParameterList_2627, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 54)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 56)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 58)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas3", 25)) ;
  GGS_lstring var_typeName_1434 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 29)) ;
      GGS_lstring var_t_1531 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 30)) ;
      var_typeName_1434 = function_makeEmbeddedTypeLName (var_typeName_1434, var_t_1531, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 31)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1640 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 33)) ;
  GGS_formalParameterListAST var_formalParameterList_1742 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_1742, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 35)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_1829 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_1829, inCompiler) ;
  GGS_location var_endOfMethodLocation_1860 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 38)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1434, var_methodName_1640, var_formalParameterList_1742, var_routineInstructionList_1829, var_endOfMethodLocation_1860, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 29)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 30)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 33)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 35)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i33_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                    GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas3", 53)) ;
  GGS_lstring var_typeName_2403 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_46 (inCompiler) == 2) {
      GGS_lstring var_t_2465 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 57)) ;
      var_typeName_2403 = function_makeEmbeddedTypeLName (var_typeName_2403, var_t_2465, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2584 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 61)) ;
  GGS_formalParameterListAST var_formalParameterList_2686 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_2686, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 63)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_2801 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_routineInstructionList_2801, inCompiler) ;
  GGS_location var_endOfMethodLocation_2832 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 66)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2403, var_methodName_2584, var_formalParameterList_2686, var_routineInstructionList_2801, var_endOfMethodLocation_2832, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas3", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_46 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas3", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 61)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 63)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 28)) ;
  GGS_lstring var_elementTypeName_1628 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_elementTypeName_1628, inCompiler) ;
  outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_1628, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 30)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 31)).operator_not (SOURCE_FILE ("declaration-type-array.galgas3", 31)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 32)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_1628, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 33)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 28)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 25)) ;
  GGS_lstring var_structTypeName_1443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 26)) ;
  GGS_structComparison var_comparison_1510 ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    var_comparison_1510 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas3", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 31)) ;
    var_comparison_1510 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 34)) ;
    var_comparison_1510 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 37)) ;
  GGS_propertyInCollectionListAST var_propertyList_1724 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1724, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_structTypeName_1443, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_1443, var_propertyList_1724, GGS_string::makeEmptyString (), var_comparison_1510, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 26)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 38)) ;
  GGS_lstring var_listTypeName_2013 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 39)) ;
  GGS_bool var_isUsefull_2087 = GGS_bool (false) ;
  GGS_bool var_isEquatable_2113 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 44)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_2113.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 46)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 46)) ;
        }
      }
      var_isEquatable_2113 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 50)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_2087.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 52)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 52)) ;
        }
      }
      var_isUsefull_2087 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 56)) ;
  GGS_propertyInCollectionListAST var_propertyList_2489 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2489, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_listTypeName_2013, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_propertyList_2489.getter_count (SOURCE_FILE ("declaration-type-list.galgas3", 64)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 65)), GGS_string ("a list declaration must declare at least one property"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 65)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 67)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_2013, var_propertyList_2489, var_isUsefull_2087, var_isEquatable_2113, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 38)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 50)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 56)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_1817 ;
  nt_acces_5F_control_ (var_accessControl_1817, inCompiler) ;
  GGS_propertyMutability var_mutability_1859 ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 34)) ;
    var_mutability_1859 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas3", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 37)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_1817, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 38)) ;
    var_mutability_1859 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas3", 39)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_2097 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_2097, inCompiler) ;
  GGS_lstring var_propertyName_2136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 42)) ;
  GGS_bool var_selectorAttribute_2163 ;
  GGS_propertyInCollectionInitializationAST var_initialization_2228 ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 46)) ;
    var_selectorAttribute_2163 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 49)) ;
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 50)) ;
    var_selectorAttribute_2163 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 53)) ;
    GGS_semanticExpressionAST var_expression_2467 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2467, inCompiler) ;
    var_initialization_2228 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_2467  COMMA_SOURCE_FILE ("declaration-property.galgas3", 55)) ;
    var_selectorAttribute_2163 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_1859, var_propertyTypeName_2097, var_propertyName_2136, var_accessControl_1817, var_selectorAttribute_2163, var_initialization_2228  COMMA_SOURCE_FILE ("declaration-property.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_33_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 37)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 42)) ;
  switch (select_galgas_33_DeclarationsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 49)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 53)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_3081 ;
  nt_acces_5F_control_ (var_accessControl_3081, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 76)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 77)), GGS_string ("a weak property is mutable, and should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas3", 77)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_3291 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyTypeName_3291, inCompiler) ;
  GGS_lstring var_propertyName_3330 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 80)) ;
  GGS_bool var_selectorAttribute_3357 ;
  GGS_propertyInCollectionInitializationAST var_initialization_3422 ;
  switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    var_initialization_3422 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 84)) ;
    var_selectorAttribute_3357 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 87)) ;
    var_initialization_3422 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 88)) ;
    var_selectorAttribute_3357 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 91)) ;
    GGS_semanticExpressionAST var_expression_3661 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3661, inCompiler) ;
    var_initialization_3422 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_3661  COMMA_SOURCE_FILE ("declaration-property.galgas3", 93)) ;
    var_selectorAttribute_3357 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_3775 = function_makeWeakTypeLName (var_propertyTypeName_3291, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 96)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas3", 102)), var_propertyWeakTypeName_3775, var_propertyName_3330, var_accessControl_3081, var_selectorAttribute_3357, var_initialization_3422  COMMA_SOURCE_FILE ("declaration-property.galgas3", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 72)) ;
  switch (select_galgas_33_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 76)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 80)) ;
  switch (select_galgas_33_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 87)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 91)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 27)) ;
  GGS_lstring var_enumTypeName_1545 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 28)) ;
  GGS_structComparison var_comparison_1608 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas3", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 32)) ;
      switch (var_comparison_1608.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1608 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 35)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 37)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 37)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 39)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 39)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 42)) ;
      switch (var_comparison_1608.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1608 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 45)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 47)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 47)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 49)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 49)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 52)) ;
  GGS_enumConstantList var_constantList_2248 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 56)) ;
      GGS_lstring var_constantName_2325 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 57)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_2367 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 61)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_2466 ;
          switch (select_galgas_33_DeclarationsSyntax_59 (inCompiler)) {
          case 1: {
            var_weakQualifier_2466 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 67)) ;
            var_weakQualifier_2466 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_2665 ;
          nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedValueType_2665, inCompiler) ;
          GGS_lstring var_associatedValueName_2713 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 71)) ;
          {
          var_associatedValueTypeList_2367.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_2466, var_associatedValueType_2665, var_associatedValueName_2713, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 72)) ;
          }
          if (select_galgas_33_DeclarationsSyntax_58 (inCompiler) == 2) {
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 75)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_2248.addAssignOperation (var_constantName_2325, var_associatedValueTypeList_2367  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 77)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_enumTypeName_1545, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 81)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_2248.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 82)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_1545.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 83)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_1545, var_constantList_2248, var_comparison_1608, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 85)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i39_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 32)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 52)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 57)) ;
      switch (select_galgas_33_DeclarationsSyntax_57 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 61)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_33_DeclarationsSyntax_59 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 67)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 71)) ;
          if (select_galgas_33_DeclarationsSyntax_58 (inCompiler) == 2) {
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 75)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 27)) ;
  GGS_lstring var_graphTypeName_1555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 29)) ;
  GGS_lstring var_associatedListTypeName_1651 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_associatedListTypeName_1651, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 32)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_1698 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 36)) ;
      GGS_lstring var_insertName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 39)) ;
      GGS_lstring var_errorMessage_1893 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 40)) ;
      var_graphInsertModifierList_1698.addAssignOperation (var_insertName_1821, var_errorMessage_1893  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 41)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_1555, var_associatedListTypeName_1651, var_graphInsertModifierList_1698, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i40_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 29)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 36)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 37)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 40)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 121)) ;
      GGS_lstring var_typeName_5455 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 122)) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_5455, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 123)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i41_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 118)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 121)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 122)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 131)) ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 133)) ;
  GGS_lstring joker_5900 ; // Joker input parameter
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, joker_5900, inCompiler) ;
  joker_5900.drop () ; // Release temporary input variables (joker in source)
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 135)), GGS_string ("Not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i42_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 131)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 133)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_t_6306 ;
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_t_6306, inCompiler) ;
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_t_6306.readProperty_location (), GGS_string ("not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 147)) ;
    if (select_galgas_33_DeclarationsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 149)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i43_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 149)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 159)) ;
  GGS_lstring var_unwrappedTypeName_6683 = outArgument_outTypeName ;
  {
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_6683, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 161)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i44_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 159)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_lstring & outArgument_outTypeName,
                                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 172)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 174)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 174)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_type_5F_definition_5F_ggs_33__i45_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 168)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 172)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 175)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 27)) ;
  GGS_lstring var_mapTypeName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 28)) ;
  GGS_bool var_isEquatable_1631 ;
  switch (select_galgas_33_DeclarationsSyntax_64 (inCompiler)) {
  case 1: {
    var_isEquatable_1631 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 33)) ;
    var_isEquatable_1631 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 36)) ;
  GGS_propertyInCollectionListAST var_propertyList_1755 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_1810 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_1882 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_1934 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_1986 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2053 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_2121 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_1755, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_1810, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_1882, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_2121, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_1934, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_1986, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2053, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mapTypeName_1553, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_1553, var_propertyList_1755, var_mInsertSetterList_1810, var_mSearchMethodList_1882, var_searchSubscriptListAST_2121, var_mRemoveSetterList_1934, var_replaceMethodList_1986, var_insertOrReplaceDeclarationListAST_2053, var_isEquatable_1631, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i46_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_65 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 80)) ;
  GGS_lstring var_methodName_3334 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  GGS_lstring var_errorMessage_3398 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 83)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_3334, var_errorMessage_3398  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_method_5F_declaration_i47_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_search COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 90)) ;
  GGS_lstring var_methodName_3742 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  GGS_lstring var_errorMessage_3806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 93)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_3742, var_errorMessage_3806  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_subscript_5F_declaration_i48_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 100)) ;
  GGS_lstring var_mMethodName_4137 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 103)) ;
  GGS_lstring var_mErrorMessage_4204 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 104)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_4137, var_mErrorMessage_4204  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_setter_5F_declaration_i49_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_remove COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 111)) ;
  GGS_lstring var_mMethodName_4516 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 114)) ;
  GGS_lstring var_mErrorMessage_4583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 115)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_4516, var_mErrorMessage_4583  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_replace_5F_setter_5F_declaration_i50_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 124)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 125))  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 125)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i51_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_or COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 123)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_replace COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 131)) ;
  GGS_lstring var_mMethodName_5205 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 134)) ;
  GGS_lstring var_mErrorMessage_5272 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 135)) ;
  GGS_lstring var_mShadowErrorMessage_5303 ;
  switch (select_galgas_33_DeclarationsSyntax_66 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5303 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 138)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 140)) ;
    var_mShadowErrorMessage_5303 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 141)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_5205, var_mErrorMessage_5272, var_mShadowErrorMessage_5303  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i52_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_insert COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 131)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_error COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_message COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 135)) ;
  switch (select_galgas_33_DeclarationsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 140)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 141)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 27)) ;
  GGS_lstring var_boolsetTypeName_1557 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 28)) ;
  GGS_bool var_isEquatable_1613 ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
    var_isEquatable_1613 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 33)) ;
    var_isEquatable_1613 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 36)) ;
  GGS_lstringlist var_slotList_1750 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 40)) ;
      GGS_lstring var_slotName_1823 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 41)) ;
      var_slotList_1750.addAssignOperation (var_slotName_1823  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 42)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_boolsetTypeName_1557, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 46)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_1750.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_1557.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 48)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_1557, var_slotList_1750, var_isEquatable_1613, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i53_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 40)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 41)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  GGS_bool var_isAbstract_1532 ;
  GGS_bool var_clonable_1557 ;
  GGS_bool var_finalClass_1580 ;
  switch (select_galgas_33_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 35)) ;
    var_isAbstract_1532 = GGS_bool (true) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 40)) ;
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (false) ;
    var_finalClass_1580 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 45)) ;
    var_isAbstract_1532 = GGS_bool (false) ;
    var_clonable_1557 = GGS_bool (true) ;
    var_finalClass_1580 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 50)) ;
  GGS_lstring var_className_2007 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 51)) ;
  GGS_lstring var_superClassName_2059 ;
  switch (select_galgas_33_DeclarationsSyntax_70 (inCompiler)) {
  case 1: {
    var_superClassName_2059 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 56)) ;
    var_superClassName_2059 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 57)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_2253 ;
  switch (select_galgas_33_DeclarationsSyntax_71 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_2253 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 63)) ;
    var_generateInSeparateFile_2253 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 66)) ;
  GGS_propertyInCollectionListAST var_propertyList_2478 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2478, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_className_2007, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 75)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_1532, var_finalClass_1580, var_className_2007, var_superClassName_2059, var_generateInSeparateFile_2253, var_propertyList_2478, var_clonable_1557, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 76)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_2059.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_2059 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_2059, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 92)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_2007, function_makeWeakTypeLName (var_className_2007, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 89)), temp_1, var_generateInSeparateFile_2253, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i54_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 35)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 40)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 50)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 51)) ;
  switch (select_galgas_33_DeclarationsSyntax_70 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 56)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 57)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 44)) ;
  GGS_lstring var_mDictTypeName_2229 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 46)) ;
  GGS_bool var_equatable_2309 ;
  switch (select_galgas_33_DeclarationsSyntax_73 (inCompiler)) {
  case 1: {
    var_equatable_2309 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 51)) ;
    var_equatable_2309 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 54)) ;
  GGS_lstring var_keyTypeName_2468 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_keyTypeName_2468, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 57)) ;
  GGS_propertyInCollectionListAST var_propertyList_2519 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_74 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_propertyList_2519, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__ (var_mDictTypeName_2229, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 65)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_2229, var_keyTypeName_2468, var_propertyList_2519, var_equatable_2309, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i55_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 44)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 46)) ;
  switch (select_galgas_33_DeclarationsSyntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 54)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_74 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 27)) ;
  GGS_lstring var_sortedListTypeName_1551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 28)) ;
  GGS_bool var_isEquatable_1643 ;
  switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
  case 1: {
    var_isEquatable_1643 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 33)) ;
    var_isEquatable_1643 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 36)) ;
  GGS_propertyInCollectionListAST var_attributeList_1796 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_76 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__ (ioArgument_ioDeclarations, var_attributeList_1796, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 43)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_1969 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1969, inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_1551, var_attributeList_1796, var_sortDescriptorList_1969, var_isEquatable_1643, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i56_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_76 (inCompiler) == 2) {
      nt_property_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 43)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_33_DeclarationsSyntax_77 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 48)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_2565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 63)) ;
  GGS_bool var_mAscending_2600 ;
  switch (select_galgas_33_DeclarationsSyntax_78 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 66)) ;
    var_mAscending_2600 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 69)) ;
    var_mAscending_2600 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_2565, var_mAscending_2600  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i57_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_78 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 66)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 69)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 27)) ;
  GGS_lstring var_externTypeName_1556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 28)) ;
  GGS_string var_cppPredeclarationCode_1642 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_1642, inCompiler) ;
  GGS_string var_cppClassCode_1707 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_1707, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 31)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_1763 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_1825 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_1882 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_1939 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_79 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeConstructorList_1763, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeGetterList_1825, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeSetterList_1882, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__ (ioArgument_ioDeclarations, var_externTypeMethodList_1939, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_1556, var_cppPredeclarationCode_1642, var_cppClassCode_1707, var_externTypeConstructorList_1763, var_externTypeGetterList_1825, var_externTypeSetterList_1882, var_externTypeMethodList_1939, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_ggs_33__i58_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_79 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 62)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_80 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_2913 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 66)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_2913.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i59_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_80 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 75)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_81 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_3288 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 79)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_3288.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 80)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i60_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_DeclarationsSyntax_81 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 90)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_3733 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_82 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_3801 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 94)) ;
      GGS_lstring var_argumentTypeName_3861 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_3861, inCompiler) ;
      GGS_lstring var_argumentName_3911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 96)) ;
      var_argumentTypeList_3733.addAssignOperation (var_selector_3801, var_argumentTypeName_3861, var_argumentName_3911  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 97)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 99)) ;
      GGS_lstring var_selector_4022 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 100)) ;
      GGS_lstring var_argumentTypeName_4092 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4092, inCompiler) ;
      GGS_lstring var_argumentName_4142 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 102)) ;
      var_argumentTypeList_3733.addAssignOperation (var_selector_4022, var_argumentTypeName_4092, var_argumentName_4142  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 105)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_3733  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_5F_ggs_33__i61_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_82 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 94)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 96)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 99)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 102)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 105)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 113)) ;
  GGS_lstring var_getterName_4595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 114)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_4647 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_83 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_4715 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 118)) ;
      GGS_lstring var_argumentTypeName_4775 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_4775, inCompiler) ;
      GGS_lstring var_argumentName_4825 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 120)) ;
      var_argumentTypeList_4647.addAssignOperation (var_selector_4715, var_argumentTypeName_4775, var_argumentName_4825  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 121)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 123)) ;
      GGS_lstring var_selector_4936 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 124)) ;
      GGS_lstring var_argumentTypeName_5006 ;
      nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_argumentTypeName_5006, inCompiler) ;
      GGS_lstring var_argumentName_5056 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 126)) ;
      var_argumentTypeList_4647.addAssignOperation (var_selector_4936, var_argumentTypeName_5006, var_argumentName_5056  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 129)) ;
  GGS_lstring var_resultTypeName_5212 ;
  nt_type_5F_definition_5F_ggs_33__ (ioArgument_ioDeclarations, var_resultTypeName_5212, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_4595, var_resultTypeName_5212, var_argumentTypeList_4647  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_5F_ggs_33__i62_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_getter COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_83 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 118)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 123)) ;
      nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 126)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 129)) ;
  nt_type_5F_definition_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 138)) ;
  GGS_lstring var_setterName_5606 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 139)) ;
  GGS_formalParameterListAST var_formalParameterList_5673 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_5673, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_5606, var_formalParameterList_5673  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_5F_ggs_33__i63_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_setter COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 139)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                                   Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 148)) ;
  GGS_lstring var_methodName_6059 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 149)) ;
  GGS_formalParameterListAST var_formalParameterList_6126 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_formalParameterList_6126, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_6059, var_formalParameterList_6126, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 151))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_5F_ggs_33__i64_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_method COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 149)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
}

