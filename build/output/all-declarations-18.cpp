#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_weakReferenceTypeForGeneration_2E_weak::objectCompare (const GGS_weakReferenceTypeForGeneration_2E_weak & inOperand) const {
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

GGS_weakReferenceTypeForGeneration_2E_weak::GGS_weakReferenceTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration_2E_weak & GGS_weakReferenceTypeForGeneration_2E_weak::operator = (const GGS_weakReferenceTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration_2E_weak::GGS_weakReferenceTypeForGeneration_2E_weak (const GGS_weakReferenceTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration_2E_weak GGS_weakReferenceTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_weakReferenceTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration GGS_weakReferenceTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_weakReferenceTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_weakReferenceTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration GGS_weakReferenceTypeForGeneration_2E_weak::bang_weakReferenceTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_weakReferenceTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = GGS_weakReferenceTypeForGeneration ((cPtr_weakReferenceTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @weakReferenceTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2E_weak ("weakReferenceTypeForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_weakReferenceTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_weakReferenceTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_weakReferenceTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceTypeForGeneration_2E_weak GGS_weakReferenceTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_weakReferenceTypeForGeneration_2E_weak result ;
  const GGS_weakReferenceTypeForGeneration_2E_weak * p = (const GGS_weakReferenceTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_weakReferenceTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (void) :
mProperty_weakQualifier (),
mProperty_typeName (),
mProperty_valueName () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_associatedValue & inSource) :
mProperty_weakQualifier (inSource.mProperty_weakQualifier),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_valueName (inSource.mProperty_valueName) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue & GGS_associatedValue::operator = (const GGS_associatedValue & inSource) {
  mProperty_weakQualifier = inSource.mProperty_weakQualifier ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_valueName = inSource.mProperty_valueName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::init_21__21__21_ (const GGS_bool & in_weakQualifier,
                                                           const GGS_lstring & in_typeName,
                                                           const GGS_lstring & in_valueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakQualifier = in_weakQualifier ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_bool & inOperand0,
                                          const GGS_lstring & inOperand1,
                                          const GGS_lstring & inOperand2) :
mProperty_weakQualifier (inOperand0),
mProperty_typeName (inOperand1),
mProperty_valueName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::class_func_new (const GGS_bool & in_weakQualifier,
                                                         const GGS_lstring & in_typeName,
                                                         const GGS_lstring & in_valueName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakQualifier = in_weakQualifier ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValue::isValid (void) const {
  return mProperty_weakQualifier.isValid () && mProperty_typeName.isValid () && mProperty_valueName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::drop (void) {
  mProperty_weakQualifier.drop () ;
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
    mProperty_weakQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
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

AC_GALGAS_root * GGS_associatedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_associatedValue result ;
  const GGS_associatedValue * p = (const GGS_associatedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                                            const GGS_enumConstantList & in_mConstantList,
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
                                                               const GGS_enumConstantList & in_mConstantList,
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

GGS_enumDeclarationAST GGS_enumDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS_enumConstantList & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumDeclarationAST (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_enumConstantList GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantList () ;
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
                                                  const GGS_enumConstantList & in_mConstantList,
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

acPtr_class * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  const GGS_enumDeclarationAST * p = (const GGS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GGS_enumConstantListForGeneration & in_constantList,
                  const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_enumTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->enumTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_constantList, in_associatedValuesTypes, inCompiler) ;
  const GGS_enumTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::
enumTypeForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GGS_enumConstantListForGeneration & in_constantList,
                                        const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                        Compiler * /* inCompiler */) {
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

GGS_enumTypeForGeneration GGS_enumTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                     const GGS_enumConstantListForGeneration & in_constantList,
                                                                     const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_enumTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (in_mSelfTypeEntry, in_constantList, in_associatedValuesTypes,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantListForGeneration GGS_enumTypeForGeneration::readProperty_constantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantListForGeneration () ;
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

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_enumConstantListForGeneration & in_constantList,
                                                        const GGS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_constantList (),
mProperty_associatedValuesTypes () {
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
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_constantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_associatedValuesTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_constantList, mProperty_associatedValuesTypes, inCompiler COMMA_THERE)) ;
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

AC_GALGAS_root * GGS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration GGS_enumTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_enumTypeForGeneration result ;
  const GGS_enumTypeForGeneration * p = (const GGS_enumTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumTypeForGeneration_2E_weak::objectCompare (const GGS_enumTypeForGeneration_2E_weak & inOperand) const {
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

GGS_enumTypeForGeneration_2E_weak::GGS_enumTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration_2E_weak & GGS_enumTypeForGeneration_2E_weak::operator = (const GGS_enumTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration_2E_weak::GGS_enumTypeForGeneration_2E_weak (const GGS_enumTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration_2E_weak GGS_enumTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration GGS_enumTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_enumTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration GGS_enumTypeForGeneration_2E_weak::bang_enumTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumTypeForGeneration) ;
      result = GGS_enumTypeForGeneration ((cPtr_enumTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumTypeForGeneration_2E_weak ("enumTypeForGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumTypeForGeneration_2E_weak GGS_enumTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_enumTypeForGeneration_2E_weak result ;
  const GGS_enumTypeForGeneration_2E_weak * p = (const GGS_enumTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeNameFormalParameterNameList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_typeNameFormalParameterNameList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_typeNameFormalParameterNameList temp_0 = inObject ;
  UpEnumerator_typeNameFormalParameterNameList enumerator_11857 (temp_0) ;
  while (enumerator_11857.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_11857.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 313)) ;
    enumerator_11857.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationAST::objectCompare (const GGS_externTypeDeclarationAST & inOperand) const {
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

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mExternTypeName,
                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                  const GGS_string & in_mCppClassCode,
                                                  const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                  const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                  const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                  const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList, inCompiler) ;
  const GGS_externTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::
externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mExternTypeName,
                                                                           const GGS_string & in_mCppPreDeclarationCode,
                                                                           const GGS_string & in_mCppClassCode,
                                                                           const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mExternTypeName,
                                                                           const GGS_string & in_mCppPreDeclarationCode,
                                                                           const GGS_string & in_mCppClassCode,
                                                                           const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationAST (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeDeclarationAST::readProperty_externTypeInitializerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_externTypeInitializerList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mExternTypeName,
                                                              const GGS_string & in_mCppPreDeclarationCode,
                                                              const GGS_string & in_mCppClassCode,
                                                              const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                              const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_externTypeInitializerList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_isPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_externTypeInitializerList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
    mProperty_externTypeInitializerList.printNonNullClassInstanceProperties ("externTypeInitializerList") ;
    mProperty_mExternTypeGetterList.printNonNullClassInstanceProperties ("mExternTypeGetterList") ;
    mProperty_mExternTypeSetterList.printNonNullClassInstanceProperties ("mExternTypeSetterList") ;
    mProperty_mExternTypeMethodList.printNonNullClassInstanceProperties ("mExternTypeMethodList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST result ;
  const GGS_externTypeDeclarationAST * p = (const GGS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationForGeneration::objectCompare (const GGS_externTypeDeclarationForGeneration & inOperand) const {
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

GGS_externTypeDeclarationForGeneration::GGS_externTypeDeclarationForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GGS_string & in_mExternTypeName,
                      const GGS_string & in_mCppPreDeclarationCode,
                      const GGS_string & in_mCppClassCode,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, inCompiler) ;
  const GGS_externTypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::
externTypeDeclarationForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                         const GGS_string & in_mExternTypeName,
                                                         const GGS_string & in_mCppPreDeclarationCode,
                                                         const GGS_string & in_mCppClassCode,
                                                         Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration::GGS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                               const GGS_string & in_mExternTypeName,
                                                                                               const GGS_string & in_mCppPreDeclarationCode,
                                                                                               const GGS_string & in_mCppClassCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationForGeneration (in_mSelfTypeEntry, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationForGeneration::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                  const GGS_string & in_mExternTypeName,
                                                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                                                  const GGS_string & in_mCppClassCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration result ;
  const GGS_externTypeDeclarationForGeneration * p = (const GGS_externTypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_externTypeDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_externTypeDeclarationForGeneration_2E_weak::GGS_externTypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak & GGS_externTypeDeclarationForGeneration_2E_weak::operator = (const GGS_externTypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak::GGS_externTypeDeclarationForGeneration_2E_weak (const GGS_externTypeDeclarationForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak GGS_externTypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_externTypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_externTypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration GGS_externTypeDeclarationForGeneration_2E_weak::bang_externTypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externTypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationForGeneration) ;
      result = GGS_externTypeDeclarationForGeneration ((cPtr_externTypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ("externTypeDeclarationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationForGeneration_2E_weak GGS_externTypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationForGeneration_2E_weak result ;
  const GGS_externTypeDeclarationForGeneration_2E_weak * p = (const GGS_externTypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mGraphTypeName,
                                  const GGS_lstring & in_mAssociatedListTypeName,
                                  const GGS_graphInsertModifierList & in_mInsertModifierList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_mGraphTypeName,
                                                      const GGS_lstring & in_mAssociatedListTypeName,
                                                      const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mGraphTypeName,
                                                                 const GGS_lstring & in_mAssociatedListTypeName,
                                                                 const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_graphDeclarationAST (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList GGS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphInsertModifierList () ;
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
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mGraphTypeName,
                                                    const GGS_lstring & in_mAssociatedListTypeName,
                                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
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
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGraphTypeName.printNonNullClassInstanceProperties ("mGraphTypeName") ;
    mProperty_mAssociatedListTypeName.printNonNullClassInstanceProperties ("mAssociatedListTypeName") ;
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

AC_GALGAS_root * GGS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationAST result ;
  const GGS_graphDeclarationAST * p = (const GGS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GGS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                      const GGS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                      const GGS_graphInsertModifierList & in_mInsertModifierList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->graphDeclarationForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mAssociatedListTypeEntry, in_mAssociatedListElementTypeEntry, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::
graphDeclarationForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedListTypeEntry = in_mAssociatedListTypeEntry ;
  mProperty_mAssociatedListElementTypeEntry = in_mAssociatedListElementTypeEntry ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration::GGS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration GGS_graphDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                     const GGS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                                                     const GGS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                                                     const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_graphDeclarationForGeneration (in_mSelfTypeEntry, in_mAssociatedListTypeEntry, in_mAssociatedListElementTypeEntry, in_mInsertModifierList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mAssociatedListTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_graphDeclarationForGeneration::readProperty_mAssociatedListElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList GGS_graphDeclarationForGeneration::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphInsertModifierList () ;
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
mProperty_mAssociatedListTypeEntry (),
mProperty_mAssociatedListElementTypeEntry (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                        const GGS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                                        const GGS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                                        const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mAssociatedListTypeEntry (),
mProperty_mAssociatedListElementTypeEntry (),
mProperty_mInsertModifierList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedListTypeEntry = in_mAssociatedListTypeEntry ;
  mProperty_mAssociatedListElementTypeEntry = in_mAssociatedListElementTypeEntry ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeEntry, mProperty_mAssociatedListElementTypeEntry, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAssociatedListTypeEntry.printNonNullClassInstanceProperties ("mAssociatedListTypeEntry") ;
    mProperty_mAssociatedListElementTypeEntry.printNonNullClassInstanceProperties ("mAssociatedListElementTypeEntry") ;
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

AC_GALGAS_root * GGS_graphDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration GGS_graphDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationForGeneration result ;
  const GGS_graphDeclarationForGeneration * p = (const GGS_graphDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationForGeneration_2E_weak::objectCompare (const GGS_graphDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_graphDeclarationForGeneration_2E_weak::GGS_graphDeclarationForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration_2E_weak & GGS_graphDeclarationForGeneration_2E_weak::operator = (const GGS_graphDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration_2E_weak::GGS_graphDeclarationForGeneration_2E_weak (const GGS_graphDeclarationForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration_2E_weak GGS_graphDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_graphDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration GGS_graphDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_graphDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_graphDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration GGS_graphDeclarationForGeneration_2E_weak::bang_graphDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_graphDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationForGeneration) ;
      result = GGS_graphDeclarationForGeneration ((cPtr_graphDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @graphDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2E_weak ("graphDeclarationForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationForGeneration_2E_weak GGS_graphDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationForGeneration_2E_weak result ;
  const GGS_graphDeclarationForGeneration_2E_weak * p = (const GGS_graphDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST::objectCompare (const GGS_listDeclarationAST & inOperand) const {
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

GGS_listDeclarationAST::GGS_listDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::
init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mListTypeName,
                                                          const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                          const GGS_bool & in_usefullList,
                                                          const GGS_bool & in_equatable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_listDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_listDeclarationAST (inCompiler COMMA_THERE)) ;
  object->listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable, inCompiler) ;
  const GGS_listDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::
listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mListTypeName,
                                                                             const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GGS_bool & in_usefullList,
                                                                             const GGS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST::GGS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_mListTypeName,
                                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                               const GGS_bool & in_usefullList,
                                                               const GGS_bool & in_equatable,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_listDeclarationAST (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_usefullList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_usefullList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mListTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_usefullList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@listDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_isPredefined, mProperty_mListTypeName, mProperty_mPropertyList, mProperty_usefullList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mListTypeName.printNonNullClassInstanceProperties ("mListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_usefullList.printNonNullClassInstanceProperties ("usefullList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @listDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST result ;
  const GGS_listDeclarationAST * p = (const GGS_listDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listTypeForGeneration::objectCompare (const GGS_listTypeForGeneration & inOperand) const {
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

GGS_listTypeForGeneration::GGS_listTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                  const GGS_typedPropertyList & in_mTypedAttributeList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_listTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_listTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->listTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, inCompiler) ;
  const GGS_listTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::
listTypeForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                        Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration::GGS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                     const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                     const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_listTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_listTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_listTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@listTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListElementTypeIndex.printNonNullClassInstanceProperties ("mListElementTypeIndex") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @listTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_listTypeForGeneration result ;
  const GGS_listTypeForGeneration * p = (const GGS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listTypeForGeneration_2E_weak::objectCompare (const GGS_listTypeForGeneration_2E_weak & inOperand) const {
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

GGS_listTypeForGeneration_2E_weak::GGS_listTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak & GGS_listTypeForGeneration_2E_weak::operator = (const GGS_listTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak::GGS_listTypeForGeneration_2E_weak (const GGS_listTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak GGS_listTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_listTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_listTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_listTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration GGS_listTypeForGeneration_2E_weak::bang_listTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_listTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listTypeForGeneration) ;
      result = GGS_listTypeForGeneration ((cPtr_listTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @listTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ("listTypeForGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listTypeForGeneration_2E_weak GGS_listTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_listTypeForGeneration_2E_weak result ;
  const GGS_listTypeForGeneration_2E_weak * p = (const GGS_listTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST::objectCompare (const GGS_dictDeclarationAST & inOperand) const {
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

GGS_dictDeclarationAST::GGS_dictDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mDictTypeName,
                                               const GGS_lstring & in_mKeyTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_dictDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable, inCompiler) ;
  const GGS_dictDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::
dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mDictTypeName,
                                                                  const GGS_lstring & in_mKeyTypeName,
                                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                  const GGS_bool & in_equatable,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST::GGS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_mDictTypeName,
                                                               const GGS_lstring & in_mKeyTypeName,
                                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                               const GGS_bool & in_equatable,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_dictDeclarationAST (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dictDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mDictTypeName,
                                                  const GGS_lstring & in_mKeyTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dictDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_isPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mPropertyList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST result ;
  const GGS_dictDeclarationAST * p = (const GGS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictTypeForGeneration::objectCompare (const GGS_dictTypeForGeneration & inOperand) const {
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

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::
init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                              const GGS_lstring & in_mDictTypeName,
                              const GGS_typedPropertyList & in_mTypedAttributeList,
                              const GGS_lstring & in_mKeyTypeName,
                              const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_dictTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_dictTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::
dictTypeForGeneration_init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                    const GGS_lstring & in_mDictTypeName,
                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                    const GGS_lstring & in_mKeyTypeName,
                                                    const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                     const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                     const GGS_lstring & in_mDictTypeName,
                                                                     const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                     const GGS_lstring & in_mKeyTypeName,
                                                                     const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_dictTypeForGeneration (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GGS_lstring & in_mDictTypeName,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        const GGS_lstring & in_mKeyTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dictTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration result ;
  const GGS_dictTypeForGeneration * p = (const GGS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictTypeForGeneration_2E_weak::objectCompare (const GGS_dictTypeForGeneration_2E_weak & inOperand) const {
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

GGS_dictTypeForGeneration_2E_weak::GGS_dictTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak & GGS_dictTypeForGeneration_2E_weak::operator = (const GGS_dictTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak::GGS_dictTypeForGeneration_2E_weak (const GGS_dictTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak GGS_dictTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dictTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_dictTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_dictTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration_2E_weak::bang_dictTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dictTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictTypeForGeneration) ;
      result = GGS_dictTypeForGeneration ((cPtr_dictTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dictTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration_2E_weak ("dictTypeForGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration_2E_weak GGS_dictTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration_2E_weak result ;
  const GGS_dictTypeForGeneration_2E_weak * p = (const GGS_dictTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                                                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                   const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                   const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                   const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                   const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                   const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                   const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GGS_bool & in_equatable,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GGS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lstring & in_mMapTypeName,
                                                                                     const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                                     const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                                     const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                                     const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                                     const GGS_bool & in_equatable,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
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

GGS_mapDeclarationAST GGS_mapDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                             const GGS_lstring & in_mMapTypeName,
                                                             const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                             const GGS_insertSetterListAST & in_mInsertSetterList,
                                                             const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                             const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                             const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                             const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                             const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                             const GGS_bool & in_equatable,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_mapDeclarationAST (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_propertyInCollectionListAST GGS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapDeclarationAST::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertOrReplaceDeclarationListAST () ;
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
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                                const GGS_lstring & in_mMapTypeName,
                                                const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                const GGS_insertSetterListAST & in_mInsertSetterList,
                                                const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                const GGS_bool & in_equatable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
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
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_mapDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable, inCompiler COMMA_THERE)) ;
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
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
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

AC_GALGAS_root * GGS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST result ;
  const GGS_mapDeclarationAST * p = (const GGS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                  const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                  const GGS_lstring & in_mMapTypeName,
                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                  const GGS_insertSetterListAST & in_mInsertSetterList,
                                                  const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                  const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                  const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                  const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                  const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                  const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                       const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                       const GGS_lstring & in_mMapTypeName,
                                                                       const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                       const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                       const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                       const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                       const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                       const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                       const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                       const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
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

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                   const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                   const GGS_lstring & in_mMapTypeName,
                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                   const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                   const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                   const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                   const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                   const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                   const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                   const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_typedPropertyList GGS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapTypeForGeneration::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
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
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GGS_lstring & in_mMapTypeName,
                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                      const GGS_insertSetterListAST & in_mInsertSetterList,
                                                      const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                      const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                      const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                      const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
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
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_mapTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
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
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
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

AC_GALGAS_root * GGS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration result ;
  const GGS_mapTypeForGeneration * p = (const GGS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapTypeForGeneration_2E_weak::objectCompare (const GGS_mapTypeForGeneration_2E_weak & inOperand) const {
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

GGS_mapTypeForGeneration_2E_weak::GGS_mapTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak & GGS_mapTypeForGeneration_2E_weak::operator = (const GGS_mapTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak::GGS_mapTypeForGeneration_2E_weak (const GGS_mapTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak GGS_mapTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_mapTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_mapTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_mapTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration_2E_weak::bang_mapTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_mapTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapTypeForGeneration) ;
      result = GGS_mapTypeForGeneration ((cPtr_mapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration_2E_weak ("mapTypeForGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration_2E_weak GGS_mapTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration_2E_weak result ;
  const GGS_mapTypeForGeneration_2E_weak * p = (const GGS_mapTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_optionalTypeName,
                                                                               const GGS_lstring & in_unwrappedTypeName,
                                                                               const GGS_bool & in_isUsefull,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_optionalTypeDeclarationAST (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_optionalTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_optionalTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST result ;
  const GGS_optionalTypeDeclarationAST * p = (const GGS_optionalTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GGS_unifiedTypeMapEntry & in_unwrappedType,
                  const GGS_unifiedTypeMapEntry & in_weakType,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->optionalTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_unwrappedType, in_weakType, inCompiler) ;
  const GGS_optionalTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::
optionalTypeForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                            const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                            const GGS_unifiedTypeMapEntry & in_weakType,
                                            Compiler * /* inCompiler */) {
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

GGS_optionalTypeForGeneration GGS_optionalTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                             const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                             const GGS_unifiedTypeMapEntry & in_weakType,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_optionalTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionalTypeForGeneration (in_mSelfTypeEntry, in_unwrappedType, in_weakType,  inCompiler COMMA_THERE)) ;
  return result ;
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

cPtr_optionalTypeForGeneration::cPtr_optionalTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                const GGS_unifiedTypeMapEntry & in_weakType,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_unwrappedType (),
mProperty_weakType () {
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
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_weakType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionalTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_unwrappedType, mProperty_weakType, inCompiler COMMA_THERE)) ;
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

AC_GALGAS_root * GGS_optionalTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration GGS_optionalTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionalTypeForGeneration result ;
  const GGS_optionalTypeForGeneration * p = (const GGS_optionalTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeForGeneration_2E_weak::objectCompare (const GGS_optionalTypeForGeneration_2E_weak & inOperand) const {
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

GGS_optionalTypeForGeneration_2E_weak::GGS_optionalTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration_2E_weak & GGS_optionalTypeForGeneration_2E_weak::operator = (const GGS_optionalTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration_2E_weak::GGS_optionalTypeForGeneration_2E_weak (const GGS_optionalTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration_2E_weak GGS_optionalTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionalTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration GGS_optionalTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionalTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_optionalTypeForGeneration * p = (cPtr_optionalTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionalTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration GGS_optionalTypeForGeneration_2E_weak::bang_optionalTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionalTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionalTypeForGeneration) ;
      result = GGS_optionalTypeForGeneration ((cPtr_optionalTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration_2E_weak ("optionalTypeForGeneration.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeForGeneration_2E_weak GGS_optionalTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionalTypeForGeneration_2E_weak result ;
  const GGS_optionalTypeForGeneration_2E_weak * p = (const GGS_optionalTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListDeclarationAST::objectCompare (const GGS_sortedListDeclarationAST & inOperand) const {
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

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mSortedListTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_sortedListDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_sortedListDeclarationAST (inCompiler COMMA_THERE)) ;
  object->sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable, inCompiler) ;
  const GGS_sortedListDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::
sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mSortedListTypeName,
                                                                        const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                        const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                        const GGS_bool & in_equatable,
                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mSortedListTypeName,
                                                                           const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                           const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                           const GGS_bool & in_equatable,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortedListDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mSortedListTypeName,
                                                              const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                              const GGS_bool & in_equatable,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_isPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSortedListTypeName.printNonNullClassInstanceProperties ("mSortedListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sortedListDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST result ;
  const GGS_sortedListDeclarationAST * p = (const GGS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListTypeForGeneration::objectCompare (const GGS_sortedListTypeForGeneration & inOperand) const {
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

GGS_sortedListTypeForGeneration::GGS_sortedListTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sortedListTypeForGeneration GGS_sortedListTypeForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                      const GGS_typedPropertyList & in_mTypedAttributeList,
                      const GGS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_sortedListTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_sortedListTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->sortedListTypeForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, in_mSortDescriptorList, inCompiler) ;
  const GGS_sortedListTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::
sortedListTypeForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                  const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                  const GGS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration::GGS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration GGS_sortedListTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                 const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                                 const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                 const GGS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_sortedListTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, in_mSortDescriptorList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_sortedListTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_sortedListTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortedListTypeForGeneration::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sortDescriptorListForGeneration () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList (),
mProperty_mSortDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                    const GGS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GGS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList (),
mProperty_mSortDescriptorList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, mProperty_mSortDescriptorList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListElementTypeIndex.printNonNullClassInstanceProperties ("mListElementTypeIndex") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sortedListTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration GGS_sortedListTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_sortedListTypeForGeneration result ;
  const GGS_sortedListTypeForGeneration * p = (const GGS_sortedListTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListTypeForGeneration_2E_weak::objectCompare (const GGS_sortedListTypeForGeneration_2E_weak & inOperand) const {
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

GGS_sortedListTypeForGeneration_2E_weak::GGS_sortedListTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration_2E_weak & GGS_sortedListTypeForGeneration_2E_weak::operator = (const GGS_sortedListTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration_2E_weak::GGS_sortedListTypeForGeneration_2E_weak (const GGS_sortedListTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration_2E_weak GGS_sortedListTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sortedListTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration GGS_sortedListTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_sortedListTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_sortedListTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration GGS_sortedListTypeForGeneration_2E_weak::bang_sortedListTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sortedListTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListTypeForGeneration) ;
      result = GGS_sortedListTypeForGeneration ((cPtr_sortedListTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedListTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2E_weak ("sortedListTypeForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListTypeForGeneration_2E_weak GGS_sortedListTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_sortedListTypeForGeneration_2E_weak result ;
  const GGS_sortedListTypeForGeneration_2E_weak * p = (const GGS_sortedListTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                                                                                            const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
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
                                                                                                                 const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
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

GGS_structDeclarationAST GGS_structDeclarationAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_structTypeName,
                                                                   const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                   const GGS_string & in_enumeratedElementTypeName,
                                                                   const GGS_structComparison & in_comparison,
                                                                   const GGS_bool & in_isUsefullStruct,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefullStruct,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS_propertyInCollectionListAST GGS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
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
                                                      const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
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

acPtr_class * cPtr_structDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST result ;
  const GGS_structDeclarationAST * p = (const GGS_structDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GGS_typedPropertyList & in_mTypedPropertyList,
                              const GGS_typedPropertyList & in_mConstructorArgumentList,
                              const GGS_string & in_mConstructorInitializationCode,
                              const GGS_bool & in_mConstructorNeedsCompilerVar,
                              const GGS_bool & in_synthetizeAnInitializer,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_structTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_structTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->structTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mTypedPropertyList, in_mConstructorArgumentList, in_mConstructorInitializationCode, in_mConstructorNeedsCompilerVar, in_synthetizeAnInitializer, inCompiler) ;
  const GGS_structTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::
structTypeForGeneration_init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_typedPropertyList & in_mTypedPropertyList,
                                                      const GGS_typedPropertyList & in_mConstructorArgumentList,
                                                      const GGS_string & in_mConstructorInitializationCode,
                                                      const GGS_bool & in_mConstructorNeedsCompilerVar,
                                                      const GGS_bool & in_synthetizeAnInitializer,
                                                      Compiler * /* inCompiler */) {
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

GGS_structTypeForGeneration GGS_structTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                         const GGS_typedPropertyList & in_mTypedPropertyList,
                                                                         const GGS_typedPropertyList & in_mConstructorArgumentList,
                                                                         const GGS_string & in_mConstructorInitializationCode,
                                                                         const GGS_bool & in_mConstructorNeedsCompilerVar,
                                                                         const GGS_bool & in_synthetizeAnInitializer,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_structTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (in_mSelfTypeEntry, in_mTypedPropertyList, in_mConstructorArgumentList, in_mConstructorInitializationCode, in_mConstructorNeedsCompilerVar, in_synthetizeAnInitializer,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_structTypeForGeneration::readProperty_mTypedPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mTypedPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_structTypeForGeneration::readProperty_mConstructorArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
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

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                            const GGS_typedPropertyList & in_mTypedPropertyList,
                                                            const GGS_typedPropertyList & in_mConstructorArgumentList,
                                                            const GGS_string & in_mConstructorInitializationCode,
                                                            const GGS_bool & in_mConstructorNeedsCompilerVar,
                                                            const GGS_bool & in_synthetizeAnInitializer,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mTypedPropertyList (),
mProperty_mConstructorArgumentList (),
mProperty_mConstructorInitializationCode (),
mProperty_mConstructorNeedsCompilerVar (),
mProperty_synthetizeAnInitializer () {
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

acPtr_class * cPtr_structTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mTypedPropertyList, mProperty_mConstructorArgumentList, mProperty_mConstructorInitializationCode, mProperty_mConstructorNeedsCompilerVar, mProperty_synthetizeAnInitializer, inCompiler COMMA_THERE)) ;
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

AC_GALGAS_root * GGS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration GGS_structTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_structTypeForGeneration result ;
  const GGS_structTypeForGeneration * p = (const GGS_structTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structTypeForGeneration_2E_weak::objectCompare (const GGS_structTypeForGeneration_2E_weak & inOperand) const {
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

GGS_structTypeForGeneration_2E_weak::GGS_structTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration_2E_weak & GGS_structTypeForGeneration_2E_weak::operator = (const GGS_structTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration_2E_weak::GGS_structTypeForGeneration_2E_weak (const GGS_structTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration_2E_weak GGS_structTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration GGS_structTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_structTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_structTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration GGS_structTypeForGeneration_2E_weak::bang_structTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structTypeForGeneration) ;
      result = GGS_structTypeForGeneration ((cPtr_structTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structTypeForGeneration_2E_weak ("structTypeForGeneration.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structTypeForGeneration_2E_weak GGS_structTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_structTypeForGeneration_2E_weak result ;
  const GGS_structTypeForGeneration_2E_weak * p = (const GGS_structTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionGetterAST::objectCompare (const GGS_abstractExtensionGetterAST & inOperand) const {
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

GGS_abstractExtensionGetterAST::GGS_abstractExtensionGetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionGetterAST GGS_abstractExtensionGetterAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_lstring & in_mAbstractExtensionGetterName,
                                      const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                      const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName, inCompiler) ;
  const GGS_abstractExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::
abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mTypeName,
                                                                 const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                 const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                 const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST::GGS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST GGS_abstractExtensionGetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_mTypeName,
                                                                               const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                               const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                               const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mTypeName,
                                                                  const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                  const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                  const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

void cPtr_abstractExtensionGetterAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionGetterName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterName") ;
    mProperty_mAbstractExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionGetterFormalInputParameterList") ;
    mProperty_mAbstractExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterReturnedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionGetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST GGS_abstractExtensionGetterAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterAST result ;
  const GGS_abstractExtensionGetterAST * p = (const GGS_abstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionGetterForGeneration::objectCompare (const GGS_abstractExtensionGetterForGeneration & inOperand) const {
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

GGS_abstractExtensionGetterForGeneration::GGS_abstractExtensionGetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                     const GGS_string & in_implementationCppFileName,
                                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                     const GGS_string & in_mAbstractExtensionGetterName,
                                                                     const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                     const GGS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionGetterName, in_mResultType, in_mAbstractExtensionGetterFormalParameterList, inCompiler) ;
  const GGS_abstractExtensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::
abstractExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                          const GGS_string & in_mAbstractExtensionGetterName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                          const GGS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mAbstractExtensionGetterFormalParameterList = in_mAbstractExtensionGetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration::GGS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                   const GGS_string & in_mAbstractExtensionGetterName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GGS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionGetterName, in_mResultType, in_mAbstractExtensionGetterFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_abstractExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_abstractExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mResultType (),
mProperty_mAbstractExtensionGetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GGS_string & in_mAbstractExtensionGetterName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mResultType (),
mProperty_mAbstractExtensionGetterFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mAbstractExtensionGetterFormalParameterList = in_mAbstractExtensionGetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

void cPtr_abstractExtensionGetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionGetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionGetterName, mProperty_mResultType, mProperty_mAbstractExtensionGetterFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionGetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionGetterName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mAbstractExtensionGetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionGetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionGetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterForGeneration result ;
  const GGS_abstractExtensionGetterForGeneration * p = (const GGS_abstractExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionGetterForGeneration_2E_weak::objectCompare (const GGS_abstractExtensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_abstractExtensionGetterForGeneration_2E_weak::GGS_abstractExtensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak & GGS_abstractExtensionGetterForGeneration_2E_weak::operator = (const GGS_abstractExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak::GGS_abstractExtensionGetterForGeneration_2E_weak (const GGS_abstractExtensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak GGS_abstractExtensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration_2E_weak::bang_abstractExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterForGeneration) ;
      result = GGS_abstractExtensionGetterForGeneration ((cPtr_abstractExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ("abstractExtensionGetterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionGetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionGetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak GGS_abstractExtensionGetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterForGeneration_2E_weak result ;
  const GGS_abstractExtensionGetterForGeneration_2E_weak * p = (const GGS_abstractExtensionGetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionGetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_abstractExtensionMethodAST GGS_abstractExtensionMethodAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_mTypeName,
                                                                               const GGS_lstring & in_mAbstractExtensionMethodName,
                                                                               const GGS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                   const GGS_string & in_mAbstractExtensionMethodName,
                                                                                                   const GGS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_abstractExtensionMethodForGeneration_2E_weak::GGS_abstractExtensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak & GGS_abstractExtensionMethodForGeneration_2E_weak::operator = (const GGS_abstractExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @abstractExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionSetterAST::objectCompare (const GGS_abstractExtensionSetterAST & inOperand) const {
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

GGS_abstractExtensionSetterAST::GGS_abstractExtensionSetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionSetterAST GGS_abstractExtensionSetterAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mTypeName,
                                  const GGS_lstring & in_mAbstractExtensionSetterName,
                                  const GGS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList, inCompiler) ;
  const GGS_abstractExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::
abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                             const GGS_lstring & in_mTypeName,
                                                             const GGS_lstring & in_mAbstractExtensionSetterName,
                                                             const GGS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST::GGS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST GGS_abstractExtensionSetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_mTypeName,
                                                                               const GGS_lstring & in_mAbstractExtensionSetterName,
                                                                               const GGS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mTypeName,
                                                                  const GGS_lstring & in_mAbstractExtensionSetterName,
                                                                  const GGS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

void cPtr_abstractExtensionSetterAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionSetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionSetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionSetterName.printNonNullClassInstanceProperties ("mAbstractExtensionSetterName") ;
    mProperty_mAbstractExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionSetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionSetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST GGS_abstractExtensionSetterAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterAST result ;
  const GGS_abstractExtensionSetterAST * p = (const GGS_abstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionSetterForGeneration::objectCompare (const GGS_abstractExtensionSetterForGeneration & inOperand) const {
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

GGS_abstractExtensionSetterForGeneration::GGS_abstractExtensionSetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration GGS_abstractExtensionSetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                 const GGS_string & in_implementationCppFileName,
                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                 const GGS_string & in_mAbstractExtensionSetterName,
                                                                 const GGS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList, inCompiler) ;
  const GGS_abstractExtensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::
abstractExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                      const GGS_string & in_mAbstractExtensionSetterName,
                                                                                                      const GGS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                                                      Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration::GGS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration GGS_abstractExtensionSetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                   const GGS_string & in_mAbstractExtensionSetterName,
                                                                                                   const GGS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_abstractExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GGS_string & in_mAbstractExtensionSetterName,
                                                                                      const GGS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_abstractExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

void cPtr_abstractExtensionSetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionSetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionSetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionSetterName.printNonNullClassInstanceProperties ("mAbstractExtensionSetterName") ;
    mProperty_mAbstractExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionSetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionSetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration GGS_abstractExtensionSetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterForGeneration result ;
  const GGS_abstractExtensionSetterForGeneration * p = (const GGS_abstractExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionSetterForGeneration_2E_weak::objectCompare (const GGS_abstractExtensionSetterForGeneration_2E_weak & inOperand) const {
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

GGS_abstractExtensionSetterForGeneration_2E_weak::GGS_abstractExtensionSetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration_2E_weak & GGS_abstractExtensionSetterForGeneration_2E_weak::operator = (const GGS_abstractExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration_2E_weak::GGS_abstractExtensionSetterForGeneration_2E_weak (const GGS_abstractExtensionSetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration_2E_weak GGS_abstractExtensionSetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionSetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration GGS_abstractExtensionSetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionSetterForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionSetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration GGS_abstractExtensionSetterForGeneration_2E_weak::bang_abstractExtensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterForGeneration) ;
      result = GGS_abstractExtensionSetterForGeneration ((cPtr_abstractExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionSetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2E_weak ("abstractExtensionSetterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionSetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionSetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionSetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterForGeneration_2E_weak GGS_abstractExtensionSetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterForGeneration_2E_weak result ;
  const GGS_abstractExtensionSetterForGeneration_2E_weak * p = (const GGS_abstractExtensionSetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionSetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_equatableExtensionAST GGS_equatableExtensionAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                     const GGS_lstring & in_mTypeName,
                                                                     const GGS_equatableComparableExtension & in_mExtension,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_equatableExtensionAST (in_isPredefined, in_mTypeName, in_mExtension,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_equatableExtensionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
// @extensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionGetterAST::objectCompare (const GGS_extensionGetterAST & inOperand) const {
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

GGS_extensionGetterAST::GGS_extensionGetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionGetterAST GGS_extensionGetterAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                      const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mExtensionGetterName,
                                                                                      const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                                                      const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                                                                      const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                                                                      const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                                                      const GGS_location & in_mEndOfReaderLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_extensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_extensionGetterAST (inCompiler COMMA_THERE)) ;
  object->extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionGetterName, in_mExtensionGetterFormalInputParameterList, in_mExtensionGetterReturnedTypeName, in_mExtensionGetterReturnedVariableName, in_mExtensionGetterInstructionList, in_mEndOfReaderLocation, inCompiler) ;
  const GGS_extensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::
extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                         const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                         const GGS_lstring & in_mTypeName,
                                                                                                         const GGS_lstring & in_mExtensionGetterName,
                                                                                                         const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                                                                         const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                                                                                         const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                                                                                         const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                                                                         const GGS_location & in_mEndOfReaderLocation,
                                                                                                         Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mExtensionGetterFormalInputParameterList = in_mExtensionGetterFormalInputParameterList ;
  mProperty_mExtensionGetterReturnedTypeName = in_mExtensionGetterReturnedTypeName ;
  mProperty_mExtensionGetterReturnedVariableName = in_mExtensionGetterReturnedVariableName ;
  mProperty_mExtensionGetterInstructionList = in_mExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST::GGS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST GGS_extensionGetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_bool & in_requiresSelfForAccessingProperty,
                                                               const GGS_lstring & in_mTypeName,
                                                               const GGS_lstring & in_mExtensionGetterName,
                                                               const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                               const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                                               const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                                               const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                               const GGS_location & in_mEndOfReaderLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_extensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionGetterName, in_mExtensionGetterFormalInputParameterList, in_mExtensionGetterReturnedTypeName, in_mExtensionGetterReturnedVariableName, in_mExtensionGetterInstructionList, in_mEndOfReaderLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterAST::readProperty_mExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_extensionGetterAST::readProperty_mExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterAST::readProperty_mExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionGetterAST::readProperty_mExtensionGetterReturnedVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_extensionGetterAST::readProperty_mExtensionGetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionGetterName (),
mProperty_mExtensionGetterFormalInputParameterList (),
mProperty_mExtensionGetterReturnedTypeName (),
mProperty_mExtensionGetterReturnedVariableName (),
mProperty_mExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_requiresSelfForAccessingProperty,
                                                  const GGS_lstring & in_mTypeName,
                                                  const GGS_lstring & in_mExtensionGetterName,
                                                  const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GGS_location & in_mEndOfReaderLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionGetterName (),
mProperty_mExtensionGetterFormalInputParameterList (),
mProperty_mExtensionGetterReturnedTypeName (),
mProperty_mExtensionGetterReturnedVariableName (),
mProperty_mExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mExtensionGetterFormalInputParameterList = in_mExtensionGetterFormalInputParameterList ;
  mProperty_mExtensionGetterReturnedTypeName = in_mExtensionGetterReturnedTypeName ;
  mProperty_mExtensionGetterReturnedVariableName = in_mExtensionGetterReturnedVariableName ;
  mProperty_mExtensionGetterInstructionList = in_mExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExtensionGetterName.printNonNullClassInstanceProperties ("mExtensionGetterName") ;
    mProperty_mExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mExtensionGetterFormalInputParameterList") ;
    mProperty_mExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mExtensionGetterReturnedTypeName") ;
    mProperty_mExtensionGetterReturnedVariableName.printNonNullClassInstanceProperties ("mExtensionGetterReturnedVariableName") ;
    mProperty_mExtensionGetterInstructionList.printNonNullClassInstanceProperties ("mExtensionGetterInstructionList") ;
    mProperty_mEndOfReaderLocation.printNonNullClassInstanceProperties ("mEndOfReaderLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionGetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST GGS_extensionGetterAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionGetterAST result ;
  const GGS_extensionGetterAST * p = (const GGS_extensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionGetterForGeneration::objectCompare (const GGS_extensionGetterForGeneration & inOperand) const {
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

GGS_extensionGetterForGeneration::GGS_extensionGetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                     const GGS_string & in_mExtensionGetterName,
                                                                                     const GGS_bool & in_mImplementedAsFunction,
                                                                                     const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                     const GGS_string & in_mResultVarCppName,
                                                                                     const GGS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                                     const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                     const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_extensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->extensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionGetterName, in_mImplementedAsFunction, in_mResultType, in_mResultVarCppName, in_mExtensionGetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_extensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::
extensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                  const GGS_string & in_implementationCppFileName,
                                                                                                                  const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                  const GGS_string & in_mExtensionGetterName,
                                                                                                                  const GGS_bool & in_mImplementedAsFunction,
                                                                                                                  const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                  const GGS_string & in_mResultVarCppName,
                                                                                                                  const GGS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                  const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                  Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mExtensionGetterFormalParameterList = in_mExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration::GGS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                   const GGS_string & in_mExtensionGetterName,
                                                                                   const GGS_bool & in_mImplementedAsFunction,
                                                                                   const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                   const GGS_string & in_mResultVarCppName,
                                                                                   const GGS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                   const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_extensionGetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionGetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionGetterName, in_mImplementedAsFunction, in_mResultType, in_mResultVarCppName, in_mExtensionGetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionGetterForGeneration::readProperty_mExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionGetterForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_extensionGetterForGeneration::readProperty_mExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_extensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_extensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionGetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                      const GGS_string & in_mExtensionGetterName,
                                                                      const GGS_bool & in_mImplementedAsFunction,
                                                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_string & in_mResultVarCppName,
                                                                      const GGS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionGetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mExtensionGetterFormalParameterList = in_mExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

void cPtr_extensionGetterForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionGetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionGetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionGetterName, mProperty_mImplementedAsFunction, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionGetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mExtensionGetterName.printNonNullClassInstanceProperties ("mExtensionGetterName") ;
    mProperty_mImplementedAsFunction.printNonNullClassInstanceProperties ("mImplementedAsFunction") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mResultVarCppName.printNonNullClassInstanceProperties ("mResultVarCppName") ;
    mProperty_mExtensionGetterFormalParameterList.printNonNullClassInstanceProperties ("mExtensionGetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionGetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration ("extensionGetterForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterForGeneration result ;
  const GGS_extensionGetterForGeneration * p = (const GGS_extensionGetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionGetterForGeneration_2E_weak::objectCompare (const GGS_extensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_extensionGetterForGeneration_2E_weak::GGS_extensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak & GGS_extensionGetterForGeneration_2E_weak::operator = (const GGS_extensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak::GGS_extensionGetterForGeneration_2E_weak (const GGS_extensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak GGS_extensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration_2E_weak::bang_extensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterForGeneration) ;
      result = GGS_extensionGetterForGeneration ((cPtr_extensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ("extensionGetterForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak GGS_extensionGetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterForGeneration_2E_weak result ;
  const GGS_extensionGetterForGeneration_2E_weak * p = (const GGS_extensionGetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                              const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_lstring & in_mExtensionMethodName,
                                                                              const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                                              const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                                              const GGS_location & in_mEndOfMethodLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_extensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_extensionMethodAST (inCompiler COMMA_THERE)) ;
  object->extensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionMethodName, in_mExtensionMethodFormalParameterList, in_mExtensionMethodInstructionList, in_mEndOfMethodLocation, inCompiler) ;
  const GGS_extensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::
extensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                 const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                 const GGS_lstring & in_mTypeName,
                                                                                                 const GGS_lstring & in_mExtensionMethodName,
                                                                                                 const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                                                                 const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                                                                 const GGS_location & in_mEndOfMethodLocation,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
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

GGS_extensionMethodAST GGS_extensionMethodAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_bool & in_requiresSelfForAccessingProperty,
                                                               const GGS_lstring & in_mTypeName,
                                                               const GGS_lstring & in_mExtensionMethodName,
                                                               const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                               const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                               const GGS_location & in_mEndOfMethodLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_extensionMethodAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionMethodAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionMethodName, in_mExtensionMethodFormalParameterList, in_mExtensionMethodInstructionList, in_mEndOfMethodLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionMethodAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
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
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionMethodAST::cPtr_extensionMethodAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_requiresSelfForAccessingProperty,
                                                  const GGS_lstring & in_mTypeName,
                                                  const GGS_lstring & in_mExtensionMethodName,
                                                  const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                                  const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                                  const GGS_location & in_mEndOfMethodLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
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
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_extensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionMethodAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mExtensionMethodInstructionList, mProperty_mEndOfMethodLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
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

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                   const GGS_string & in_mExtensionMethodName,
                                                                                   const GGS_bool & in_mImplementedAsFunction,
                                                                                   const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                   const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_extensionMethodForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionMethodForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionMethodName, in_mImplementedAsFunction, in_mExtensionMethodFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_extensionMethodForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

GGS_extensionMethodForGeneration_2E_weak::GGS_extensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak & GGS_extensionMethodForGeneration_2E_weak::operator = (const GGS_extensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @extensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterAST::objectCompare (const GGS_extensionSetterAST & inOperand) const {
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

GGS_extensionSetterAST::GGS_extensionSetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionSetterAST GGS_extensionSetterAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                              const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_lstring & in_mExtensionSetterName,
                                                                              const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                                              const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                                              const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_extensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_extensionSetterAST (inCompiler COMMA_THERE)) ;
  object->extensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionSetterName, in_mExtensionSetterFormalParameterList, in_mExtensionSetterInstructionList, in_mEndOfSetterDeclarationLocation, inCompiler) ;
  const GGS_extensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::
extensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                 const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                 const GGS_lstring & in_mTypeName,
                                                                                                 const GGS_lstring & in_mExtensionSetterName,
                                                                                                 const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                                                                 const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                                                                 const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mExtensionSetterInstructionList = in_mExtensionSetterInstructionList ;
  mProperty_mEndOfSetterDeclarationLocation = in_mEndOfSetterDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST::GGS_extensionSetterAST (const cPtr_extensionSetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST GGS_extensionSetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                               const GGS_bool & in_requiresSelfForAccessingProperty,
                                                               const GGS_lstring & in_mTypeName,
                                                               const GGS_lstring & in_mExtensionSetterName,
                                                               const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                               const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                               const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_extensionSetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionSetterAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionSetterName, in_mExtensionSetterFormalParameterList, in_mExtensionSetterInstructionList, in_mEndOfSetterDeclarationLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extensionSetterAST::readProperty_mExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_extensionSetterAST::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_extensionSetterAST::readProperty_mExtensionSetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_mExtensionSetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionSetterAST::readProperty_mEndOfSetterDeclarationLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterAST) ;
    return p->mProperty_mEndOfSetterDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterAST::cPtr_extensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionSetterName (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mExtensionSetterInstructionList (),
mProperty_mEndOfSetterDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterAST::cPtr_extensionSetterAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_requiresSelfForAccessingProperty,
                                                  const GGS_lstring & in_mTypeName,
                                                  const GGS_lstring & in_mExtensionSetterName,
                                                  const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                                  const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                                  const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionSetterName (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mExtensionSetterInstructionList (),
mProperty_mEndOfSetterDeclarationLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mExtensionSetterInstructionList = in_mExtensionSetterInstructionList ;
  mProperty_mEndOfSetterDeclarationLocation = in_mEndOfSetterDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

void cPtr_extensionSetterAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionSetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSetterDeclarationLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionSetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionSetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionSetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExtensionSetterName.printNonNullClassInstanceProperties ("mExtensionSetterName") ;
    mProperty_mExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mExtensionSetterFormalParameterList") ;
    mProperty_mExtensionSetterInstructionList.printNonNullClassInstanceProperties ("mExtensionSetterInstructionList") ;
    mProperty_mEndOfSetterDeclarationLocation.printNonNullClassInstanceProperties ("mEndOfSetterDeclarationLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionSetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterAST ("extensionSetterAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST GGS_extensionSetterAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionSetterAST result ;
  const GGS_extensionSetterAST * p = (const GGS_extensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterForGeneration::objectCompare (const GGS_extensionSetterForGeneration & inOperand) const {
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

GGS_extensionSetterForGeneration::GGS_extensionSetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                             const GGS_string & in_mExtensionSetterName,
                                                                             const GGS_bool & in_mImplementedAsFunction,
                                                                             const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                             const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_extensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->extensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionSetterName, in_mImplementedAsFunction, in_mExtensionSetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_extensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::
extensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                          const GGS_string & in_mExtensionSetterName,
                                                                                                          const GGS_bool & in_mImplementedAsFunction,
                                                                                                          const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                                          const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                          const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration::GGS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                   const GGS_string & in_mExtensionSetterName,
                                                                                   const GGS_bool & in_mImplementedAsFunction,
                                                                                   const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                   const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_extensionSetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionSetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionSetterName, in_mImplementedAsFunction, in_mExtensionSetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionSetterForGeneration::readProperty_mExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_extensionSetterForGeneration::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_extensionSetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_extensionSetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionSetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                      const GGS_string & in_mExtensionSetterName,
                                                                      const GGS_bool & in_mImplementedAsFunction,
                                                                      const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionSetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

void cPtr_extensionSetterForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionSetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionSetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionSetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionSetterName, mProperty_mImplementedAsFunction, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionSetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mExtensionSetterName.printNonNullClassInstanceProperties ("mExtensionSetterName") ;
    mProperty_mImplementedAsFunction.printNonNullClassInstanceProperties ("mImplementedAsFunction") ;
    mProperty_mExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mExtensionSetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionSetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ("extensionSetterForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterForGeneration result ;
  const GGS_extensionSetterForGeneration * p = (const GGS_extensionSetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterForGeneration_2E_weak::objectCompare (const GGS_extensionSetterForGeneration_2E_weak & inOperand) const {
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

GGS_extensionSetterForGeneration_2E_weak::GGS_extensionSetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak & GGS_extensionSetterForGeneration_2E_weak::operator = (const GGS_extensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak::GGS_extensionSetterForGeneration_2E_weak (const GGS_extensionSetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak GGS_extensionSetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionSetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionSetterForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionSetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration_2E_weak::bang_extensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterForGeneration) ;
      result = GGS_extensionSetterForGeneration ((cPtr_extensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionSetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ("extensionSetterForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak GGS_extensionSetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterForGeneration_2E_weak result ;
  const GGS_extensionSetterForGeneration_2E_weak * p = (const GGS_extensionSetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @initializerAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerAST::objectCompare (const GGS_initializerAST & inOperand) const {
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

GGS_initializerAST::GGS_initializerAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerAST GGS_initializerAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_formalInputParameterListAST & in_mFormalParameterList,
                                      const GGS_semanticInstructionListAST & in_mInstructionList,
                                      const GGS_location & in_mEndOfInitializerLocation,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_initializerAST * object = nullptr ;
  macroMyNew (object, cPtr_initializerAST (inCompiler COMMA_THERE)) ;
  object->initializerAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mTypeName, in_mFormalParameterList, in_mInstructionList, in_mEndOfInitializerLocation, inCompiler) ;
  const GGS_initializerAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::
initializerAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_formalInputParameterListAST & in_mFormalParameterList,
                                                     const GGS_semanticInstructionListAST & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInitializerLocation,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mFormalParameterList = in_mFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInitializerLocation = in_mEndOfInitializerLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST::GGS_initializerAST (const cPtr_initializerAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_initializerAST GGS_initializerAST::class_func_new (const GGS_bool & in_isPredefined,
                                                       const GGS_lstring & in_mTypeName,
                                                       const GGS_formalInputParameterListAST & in_mFormalParameterList,
                                                       const GGS_semanticInstructionListAST & in_mInstructionList,
                                                       const GGS_location & in_mEndOfInitializerLocation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_initializerAST result ;
  macroMyNew (result.mObjectPtr, cPtr_initializerAST (in_isPredefined, in_mTypeName, in_mFormalParameterList, in_mInstructionList, in_mEndOfInitializerLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_initializerAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_initializerAST * p = (cPtr_initializerAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_initializerAST::readProperty_mFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_initializerAST * p = (cPtr_initializerAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerAST) ;
    return p->mProperty_mFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_initializerAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_initializerAST * p = (cPtr_initializerAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_initializerAST::readProperty_mEndOfInitializerLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_initializerAST * p = (cPtr_initializerAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerAST) ;
    return p->mProperty_mEndOfInitializerLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerAST class
//--------------------------------------------------------------------------------------------------

cPtr_initializerAST::cPtr_initializerAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mFormalParameterList (),
mProperty_mInstructionList (),
mProperty_mEndOfInitializerLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerAST::cPtr_initializerAST (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mTypeName,
                                          const GGS_formalInputParameterListAST & in_mFormalParameterList,
                                          const GGS_semanticInstructionListAST & in_mInstructionList,
                                          const GGS_location & in_mEndOfInitializerLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mFormalParameterList (),
mProperty_mInstructionList (),
mProperty_mEndOfInitializerLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mFormalParameterList = in_mFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInitializerLocation = in_mEndOfInitializerLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_initializerAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerAST ;
}

void cPtr_initializerAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInitializerLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_initializerAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mFormalParameterList, mProperty_mInstructionList, mProperty_mEndOfInitializerLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mFormalParameterList.printNonNullClassInstanceProperties ("mFormalParameterList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInitializerLocation.printNonNullClassInstanceProperties ("mEndOfInitializerLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerAST ("initializerAST",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST GGS_initializerAST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_initializerAST result ;
  const GGS_initializerAST * p = (const GGS_initializerAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionInitializerForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionInitializerForGeneration::objectCompare (const GGS_extensionInitializerForGeneration & inOperand) const {
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

GGS_extensionInitializerForGeneration::GGS_extensionInitializerForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                         const GGS_string & in_initializerName,
                                                                         const GGS_formalInputParameterListForGeneration & in_formalParameterList,
                                                                         const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                         const GGS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_extensionInitializerForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extensionInitializerForGeneration (inCompiler COMMA_THERE)) ;
  object->extensionInitializerForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_initializerName, in_formalParameterList, in_mTypedAttributeList, in_semanticInstructionListForGeneration, inCompiler) ;
  const GGS_extensionInitializerForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::
extensionInitializerForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                                           const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                           const GGS_string & in_initializerName,
                                                                                                           const GGS_formalInputParameterListForGeneration & in_formalParameterList,
                                                                                                           const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                           const GGS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_initializerName = in_initializerName ;
  mProperty_formalParameterList = in_formalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_semanticInstructionListForGeneration = in_semanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration::GGS_extensionInitializerForGeneration (const cPtr_extensionInitializerForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionInitializerForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                             const GGS_string & in_initializerName,
                                                                                             const GGS_formalInputParameterListForGeneration & in_formalParameterList,
                                                                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                             const GGS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionInitializerForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_initializerName, in_formalParameterList, in_mTypedAttributeList, in_semanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionInitializerForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionInitializerForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionInitializerForGeneration::readProperty_initializerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionInitializerForGeneration) ;
    return p->mProperty_initializerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_extensionInitializerForGeneration::readProperty_formalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionInitializerForGeneration) ;
    return p->mProperty_formalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_extensionInitializerForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionInitializerForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_extensionInitializerForGeneration::readProperty_semanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionInitializerForGeneration) ;
    return p->mProperty_semanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionInitializerForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extensionInitializerForGeneration::cPtr_extensionInitializerForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_initializerName (),
mProperty_formalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_semanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionInitializerForGeneration::cPtr_extensionInitializerForGeneration (const GGS_bool & in_generateHeader,
                                                                                const GGS_string & in_implementationCppFileName,
                                                                                const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                const GGS_string & in_initializerName,
                                                                                const GGS_formalInputParameterListForGeneration & in_formalParameterList,
                                                                                const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                const GGS_semanticInstructionListForGeneration & in_semanticInstructionListForGeneration,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_initializerName (),
mProperty_formalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_semanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_initializerName = in_initializerName ;
  mProperty_formalParameterList = in_formalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_semanticInstructionListForGeneration = in_semanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionInitializerForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForGeneration ;
}

void cPtr_extensionInitializerForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionInitializerForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_formalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_semanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionInitializerForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionInitializerForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_initializerName, mProperty_formalParameterList, mProperty_mTypedAttributeList, mProperty_semanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionInitializerForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_initializerName.printNonNullClassInstanceProperties ("initializerName") ;
    mProperty_formalParameterList.printNonNullClassInstanceProperties ("formalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_semanticInstructionListForGeneration.printNonNullClassInstanceProperties ("semanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration ("extensionInitializerForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForGeneration result ;
  const GGS_extensionInitializerForGeneration * p = (const GGS_extensionInitializerForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionInitializerForGeneration_2E_weak::objectCompare (const GGS_extensionInitializerForGeneration_2E_weak & inOperand) const {
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

GGS_extensionInitializerForGeneration_2E_weak::GGS_extensionInitializerForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak & GGS_extensionInitializerForGeneration_2E_weak::operator = (const GGS_extensionInitializerForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak::GGS_extensionInitializerForGeneration_2E_weak (const GGS_extensionInitializerForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak GGS_extensionInitializerForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionInitializerForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionInitializerForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionInitializerForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration_2E_weak::bang_extensionInitializerForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionInitializerForGeneration) ;
      result = GGS_extensionInitializerForGeneration ((cPtr_extensionInitializerForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ("extensionInitializerForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionInitializerForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionInitializerForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak GGS_extensionInitializerForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_extensionInitializerForGeneration_2E_weak result ;
  const GGS_extensionInitializerForGeneration_2E_weak * p = (const GGS_extensionInitializerForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionInitializerForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionInitializerForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingAbstractExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionGetterAST::objectCompare (const GGS_overridingAbstractExtensionGetterAST & inOperand) const {
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

GGS_overridingAbstractExtensionGetterAST::GGS_overridingAbstractExtensionGetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST GGS_overridingAbstractExtensionGetterAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_lstring & in_mAbstractExtensionGetterName,
                                      const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                      const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_overridingAbstractExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingAbstractExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->overridingAbstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName, inCompiler) ;
  const GGS_overridingAbstractExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::
overridingAbstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mTypeName,
                                                                           const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                           const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                           const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST::GGS_overridingAbstractExtensionGetterAST (const cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST GGS_overridingAbstractExtensionGetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                                   const GGS_lstring & in_mTypeName,
                                                                                                   const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                                                   const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                                                   const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionGetterAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionGetterAST::readProperty_mAbstractExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_overridingAbstractExtensionGetterAST::readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionGetterAST::readProperty_mAbstractExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionGetterAST::cPtr_overridingAbstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionGetterAST::cPtr_overridingAbstractExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mAbstractExtensionGetterName,
                                                                                      const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                                      const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingAbstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

void cPtr_overridingAbstractExtensionGetterAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingAbstractExtensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingAbstractExtensionGetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionGetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingAbstractExtensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionGetterName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterName") ;
    mProperty_mAbstractExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionGetterFormalInputParameterList") ;
    mProperty_mAbstractExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterReturnedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionGetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ("overridingAbstractExtensionGetterAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingAbstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST GGS_overridingAbstractExtensionGetterAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionGetterAST result ;
  const GGS_overridingAbstractExtensionGetterAST * p = (const GGS_overridingAbstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingAbstractExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionMethodAST::objectCompare (const GGS_overridingAbstractExtensionMethodAST & inOperand) const {
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

GGS_overridingAbstractExtensionMethodAST::GGS_overridingAbstractExtensionMethodAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mTypeName,
                                  const GGS_lstring & in_mOverridingExtensionMethodName,
                                  const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingAbstractExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingAbstractExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mOverridingExtensionMethodName, in_mOverridingExtensionMethodFormalParameterList, inCompiler) ;
  const GGS_overridingAbstractExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::
overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mTypeName,
                                                                       const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                       const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST::GGS_overridingAbstractExtensionMethodAST (const cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                                   const GGS_lstring & in_mTypeName,
                                                                                                   const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                                                   const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionMethodAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionMethodAST (in_isPredefined, in_mTypeName, in_mOverridingExtensionMethodName, in_mOverridingExtensionMethodFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionMethodAST::readProperty_mOverridingExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_overridingAbstractExtensionMethodAST::readProperty_mOverridingExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                                      const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingAbstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

void cPtr_overridingAbstractExtensionMethodAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingAbstractExtensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingAbstractExtensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionMethodAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingAbstractExtensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionMethodName.printNonNullClassInstanceProperties ("mOverridingExtensionMethodName") ;
    mProperty_mOverridingExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionMethodAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ("overridingAbstractExtensionMethodAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingAbstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionMethodAST result ;
  const GGS_overridingAbstractExtensionMethodAST * p = (const GGS_overridingAbstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GGS_overridingAbstractExtensionSetterAST GGS_overridingAbstractExtensionSetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                                   const GGS_lstring & in_mTypeName,
                                                                                                   const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                                                   const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionSetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingAbstractExtensionSetterAST (in_isPredefined, in_mTypeName, in_mOverridingExtensionSetterName, in_mOverridingExtensionSetterFormalParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_overridingAbstractExtensionSetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
// @overridingExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionGetterAST::objectCompare (const GGS_overridingExtensionGetterAST & inOperand) const {
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

GGS_overridingExtensionGetterAST::GGS_overridingExtensionGetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                      const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                                      const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                                      const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                                      const GGS_location & in_mEndOfReaderLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->overridingExtensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionGetterName, in_mOverridingExtensionGetterFormalInputParameterList, in_mOverridingExtensionGetterReturnedTypeName, in_mOverridingExtensionGetterReturnedVariableName, in_mOverridingExtensionGetterInstructionList, in_mEndOfReaderLocation, inCompiler) ;
  const GGS_overridingExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::
overridingExtensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                   const GGS_lstring & in_mTypeName,
                                                                                                                   const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                                                                   const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                                                                   const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                                                                   const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                                                                   const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                                                                   const GGS_location & in_mEndOfReaderLocation,
                                                                                                                   Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList = in_mOverridingExtensionGetterFormalInputParameterList ;
  mProperty_mOverridingExtensionGetterReturnedTypeName = in_mOverridingExtensionGetterReturnedTypeName ;
  mProperty_mOverridingExtensionGetterReturnedVariableName = in_mOverridingExtensionGetterReturnedVariableName ;
  mProperty_mOverridingExtensionGetterInstructionList = in_mOverridingExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST::GGS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                   const GGS_lstring & in_mTypeName,
                                                                                   const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                                   const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                                   const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                                   const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                                   const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                                   const GGS_location & in_mEndOfReaderLocation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingExtensionGetterAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionGetterName, in_mOverridingExtensionGetterFormalInputParameterList, in_mOverridingExtensionGetterReturnedTypeName, in_mOverridingExtensionGetterReturnedVariableName, in_mOverridingExtensionGetterInstructionList, in_mEndOfReaderLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overridingExtensionGetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_overridingExtensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionGetterAST class
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

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                      const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                      const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                                                      const GGS_location & in_mEndOfReaderLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mOverridingExtensionGetterFormalInputParameterList (),
mProperty_mOverridingExtensionGetterReturnedTypeName (),
mProperty_mOverridingExtensionGetterReturnedVariableName (),
mProperty_mOverridingExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList = in_mOverridingExtensionGetterFormalInputParameterList ;
  mProperty_mOverridingExtensionGetterReturnedTypeName = in_mOverridingExtensionGetterReturnedTypeName ;
  mProperty_mOverridingExtensionGetterReturnedVariableName = in_mOverridingExtensionGetterReturnedVariableName ;
  mProperty_mOverridingExtensionGetterInstructionList = in_mOverridingExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionGetterAST::classDescriptor (void) const {
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

acPtr_class * cPtr_overridingExtensionGetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionGetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mOverridingExtensionGetterFormalInputParameterList, mProperty_mOverridingExtensionGetterReturnedTypeName, mProperty_mOverridingExtensionGetterReturnedVariableName, mProperty_mOverridingExtensionGetterInstructionList, mProperty_mEndOfReaderLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingExtensionGetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ("overridingExtensionGetterAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionGetterAST result ;
  const GGS_overridingExtensionGetterAST * p = (const GGS_overridingExtensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionGetterAST *> (p)) {
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

ComparisonResult GGS_overrideExtensionGetterForGeneration::objectCompare (const GGS_overrideExtensionGetterForGeneration & inOperand) const {
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

GGS_overrideExtensionGetterForGeneration::GGS_overrideExtensionGetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                     const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                     const GGS_string & in_mBaseTypeName,
                                                                                     const GGS_string & in_mOverridingExtensionGetterName,
                                                                                     const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                     const GGS_string & in_mResultVarCppName,
                                                                                     const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                     const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                     const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_overrideExtensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overrideExtensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->overrideExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mOverridingExtensionGetterName, in_mResultType, in_mResultVarCppName, in_mOverridingExtensionGetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_overrideExtensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::
overrideExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                          const GGS_string & in_mBaseTypeName,
                                                                                                                          const GGS_string & in_mOverridingExtensionGetterName,
                                                                                                                          const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                          const GGS_string & in_mResultVarCppName,
                                                                                                                          const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                                                          const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                          const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mOverridingExtensionGetterFormalParameterList = in_mOverridingExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration::GGS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideExtensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                   const GGS_string & in_mBaseTypeName,
                                                                                                   const GGS_string & in_mOverridingExtensionGetterName,
                                                                                                   const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GGS_string & in_mResultVarCppName,
                                                                                                   const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                   const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overrideExtensionGetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_overrideExtensionGetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mOverridingExtensionGetterName, in_mResultType, in_mResultVarCppName, in_mOverridingExtensionGetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overrideExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overrideExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_overrideExtensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_overrideExtensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overrideExtensionGetterForGeneration class
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

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GGS_string & in_mBaseTypeName,
                                                                                      const GGS_string & in_mOverridingExtensionGetterName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_string & in_mResultVarCppName,
                                                                                      const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mOverridingExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mOverridingExtensionGetterFormalParameterList = in_mOverridingExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overrideExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

void cPtr_overrideExtensionGetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overrideExtensionGetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_overrideExtensionGetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overrideExtensionGetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mOverridingExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overrideExtensionGetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ("overrideExtensionGetterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overrideExtensionGetterForGeneration result ;
  const GGS_overrideExtensionGetterForGeneration * p = (const GGS_overrideExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overrideExtensionGetterForGeneration_2E_weak::objectCompare (const GGS_overrideExtensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_overrideExtensionGetterForGeneration_2E_weak::GGS_overrideExtensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak & GGS_overrideExtensionGetterForGeneration_2E_weak::operator = (const GGS_overrideExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak::GGS_overrideExtensionGetterForGeneration_2E_weak (const GGS_overrideExtensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak GGS_overrideExtensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overrideExtensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_overrideExtensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_overrideExtensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration_2E_weak::bang_overrideExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overrideExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overrideExtensionGetterForGeneration) ;
      result = GGS_overrideExtensionGetterForGeneration ((cPtr_overrideExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideExtensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ("overrideExtensionGetterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideExtensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overrideExtensionGetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overrideExtensionGetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak GGS_overrideExtensionGetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overrideExtensionGetterForGeneration_2E_weak result ;
  const GGS_overrideExtensionGetterForGeneration_2E_weak * p = (const GGS_overrideExtensionGetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overrideExtensionGetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideExtensionGetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionMethodAST::objectCompare (const GGS_overridingExtensionMethodAST & inOperand) const {
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

GGS_overridingExtensionMethodAST::GGS_overridingExtensionMethodAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionMethodAST GGS_overridingExtensionMethodAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                              const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                              const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                              const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                              const GGS_location & in_mEndOfMethodLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->overridingExtensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionMethodName, in_mOverridingExtensionMethodFormalParameterList, in_mOverridingExtensionMethodInstructionList, in_mEndOfMethodLocation, inCompiler) ;
  const GGS_overridingExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::
overridingExtensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                           const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                           const GGS_lstring & in_mTypeName,
                                                                                                           const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                                                           const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                                           const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                                                           const GGS_location & in_mEndOfMethodLocation,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
  mProperty_mOverridingExtensionMethodInstructionList = in_mOverridingExtensionMethodInstructionList ;
  mProperty_mEndOfMethodLocation = in_mEndOfMethodLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST::GGS_overridingExtensionMethodAST (const cPtr_overridingExtensionMethodAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST GGS_overridingExtensionMethodAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                   const GGS_lstring & in_mTypeName,
                                                                                   const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                                   const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                   const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                                   const GGS_location & in_mEndOfMethodLocation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionMethodName, in_mOverridingExtensionMethodFormalParameterList, in_mOverridingExtensionMethodInstructionList, in_mEndOfMethodLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overridingExtensionMethodAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_overridingExtensionMethodAST::readProperty_mOverridingExtensionMethodInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_overridingExtensionMethodAST::readProperty_mEndOfMethodLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodAST) ;
    return p->mProperty_mEndOfMethodLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodAST class
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

cPtr_overridingExtensionMethodAST::cPtr_overridingExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                      const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                      const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                                                      const GGS_location & in_mEndOfMethodLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList (),
mProperty_mOverridingExtensionMethodInstructionList (),
mProperty_mEndOfMethodLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
  mProperty_mOverridingExtensionMethodInstructionList = in_mOverridingExtensionMethodInstructionList ;
  mProperty_mEndOfMethodLocation = in_mEndOfMethodLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionMethodAST::classDescriptor (void) const {
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

acPtr_class * cPtr_overridingExtensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, mProperty_mOverridingExtensionMethodInstructionList, mProperty_mEndOfMethodLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingExtensionMethodAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ("overridingExtensionMethodAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST GGS_overridingExtensionMethodAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodAST result ;
  const GGS_overridingExtensionMethodAST * p = (const GGS_overridingExtensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionMethodAST *> (p)) {
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

ComparisonResult GGS_overridingExtensionMethodForGeneration::objectCompare (const GGS_overridingExtensionMethodForGeneration & inOperand) const {
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

GGS_overridingExtensionMethodForGeneration::GGS_overridingExtensionMethodForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                             const GGS_string & in_mBaseTypeName,
                                                                             const GGS_string & in_mExtensionMethodName,
                                                                             const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                             const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionMethodForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionMethodForGeneration (inCompiler COMMA_THERE)) ;
  object->overridingExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mExtensionMethodName, in_mExtensionMethodFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_overridingExtensionMethodForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::
overridingExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                    const GGS_string & in_mBaseTypeName,
                                                                                                                    const GGS_string & in_mExtensionMethodName,
                                                                                                                    const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                    const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                    Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration::GGS_overridingExtensionMethodForGeneration (const cPtr_overridingExtensionMethodForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionMethodForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                       const GGS_string & in_implementationCppFileName,
                                                                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                       const GGS_string & in_mBaseTypeName,
                                                                                                       const GGS_string & in_mExtensionMethodName,
                                                                                                       const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                                       const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                       const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingExtensionMethodForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mExtensionMethodName, in_mExtensionMethodFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overridingExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overridingExtensionMethodForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_overridingExtensionMethodForGeneration::readProperty_mExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_overridingExtensionMethodForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_overridingExtensionMethodForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionMethodForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionMethodForGeneration class
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

cPtr_overridingExtensionMethodForGeneration::cPtr_overridingExtensionMethodForGeneration (const GGS_bool & in_generateHeader,
                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GGS_string & in_mBaseTypeName,
                                                                                          const GGS_string & in_mExtensionMethodName,
                                                                                          const GGS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                                                          const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mExtensionMethodName (),
mProperty_mExtensionMethodFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mExtensionMethodName = in_mExtensionMethodName ;
  mProperty_mExtensionMethodFormalParameterList = in_mExtensionMethodFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

void cPtr_overridingExtensionMethodForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionMethodForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_overridingExtensionMethodForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionMethodForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionMethodName, mProperty_mExtensionMethodFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingExtensionMethodForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ("overridingExtensionMethodForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodForGeneration result ;
  const GGS_overridingExtensionMethodForGeneration * p = (const GGS_overridingExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionMethodForGeneration_2E_weak::objectCompare (const GGS_overridingExtensionMethodForGeneration_2E_weak & inOperand) const {
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

GGS_overridingExtensionMethodForGeneration_2E_weak::GGS_overridingExtensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak & GGS_overridingExtensionMethodForGeneration_2E_weak::operator = (const GGS_overridingExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak::GGS_overridingExtensionMethodForGeneration_2E_weak (const GGS_overridingExtensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak GGS_overridingExtensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration_2E_weak::bang_overridingExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodForGeneration) ;
      result = GGS_overridingExtensionMethodForGeneration ((cPtr_overridingExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ("overridingExtensionMethodForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionMethodForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionMethodForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak GGS_overridingExtensionMethodForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodForGeneration_2E_weak result ;
  const GGS_overridingExtensionMethodForGeneration_2E_weak * p = (const GGS_overridingExtensionMethodForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionMethodForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @overridingExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionSetterAST::objectCompare (const GGS_overridingExtensionSetterAST & inOperand) const {
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

GGS_overridingExtensionSetterAST::GGS_overridingExtensionSetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionSetterAST GGS_overridingExtensionSetterAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                              const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                              const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                              const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                              const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->overridingExtensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionSetterName, in_mOverridingExtensionSetterFormalParameterList, in_mOverridingExtensionSetterInstructionList, in_mEndOfSetterDeclarationLocation, inCompiler) ;
  const GGS_overridingExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::
overridingExtensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                                           const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                           const GGS_lstring & in_mTypeName,
                                                                                                           const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                                                           const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                                           const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                                                           const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
  mProperty_mOverridingExtensionSetterInstructionList = in_mOverridingExtensionSetterInstructionList ;
  mProperty_mEndOfSetterDeclarationLocation = in_mEndOfSetterDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST::GGS_overridingExtensionSetterAST (const cPtr_overridingExtensionSetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST GGS_overridingExtensionSetterAST::class_func_new (const GGS_bool & in_isPredefined,
                                                                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                   const GGS_lstring & in_mTypeName,
                                                                                   const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                                   const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                                   const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                                   const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mOverridingExtensionSetterName, in_mOverridingExtensionSetterFormalParameterList, in_mOverridingExtensionSetterInstructionList, in_mEndOfSetterDeclarationLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_overridingExtensionSetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_overridingExtensionSetterAST::readProperty_mOverridingExtensionSetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mOverridingExtensionSetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_overridingExtensionSetterAST::readProperty_mEndOfSetterDeclarationLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterAST) ;
    return p->mProperty_mEndOfSetterDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterAST class
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

cPtr_overridingExtensionSetterAST::cPtr_overridingExtensionSetterAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionSetterName,
                                                                      const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                                      const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                                                      const GGS_location & in_mEndOfSetterDeclarationLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mOverridingExtensionSetterName (),
mProperty_mOverridingExtensionSetterFormalParameterList (),
mProperty_mOverridingExtensionSetterInstructionList (),
mProperty_mEndOfSetterDeclarationLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionSetterName = in_mOverridingExtensionSetterName ;
  mProperty_mOverridingExtensionSetterFormalParameterList = in_mOverridingExtensionSetterFormalParameterList ;
  mProperty_mOverridingExtensionSetterInstructionList = in_mOverridingExtensionSetterInstructionList ;
  mProperty_mEndOfSetterDeclarationLocation = in_mEndOfSetterDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionSetterAST::classDescriptor (void) const {
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

acPtr_class * cPtr_overridingExtensionSetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mOverridingExtensionSetterName, mProperty_mOverridingExtensionSetterFormalParameterList, mProperty_mOverridingExtensionSetterInstructionList, mProperty_mEndOfSetterDeclarationLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingExtensionSetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ("overridingExtensionSetterAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST GGS_overridingExtensionSetterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterAST result ;
  const GGS_overridingExtensionSetterAST * p = (const GGS_overridingExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionSetterAST *> (p)) {
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

ComparisonResult GGS_overridingExtensionSetterForGeneration::objectCompare (const GGS_overridingExtensionSetterForGeneration & inOperand) const {
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

GGS_overridingExtensionSetterForGeneration::GGS_overridingExtensionSetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration GGS_overridingExtensionSetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                             const GGS_string & in_mBaseTypeName,
                                                                             const GGS_string & in_mExtensionSetterName,
                                                                             const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                             const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->overridingExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mExtensionSetterName, in_mExtensionSetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_overridingExtensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::
overridingExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                    const GGS_string & in_mBaseTypeName,
                                                                                                                    const GGS_string & in_mExtensionSetterName,
                                                                                                                    const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                    const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                    Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration::GGS_overridingExtensionSetterForGeneration (const cPtr_overridingExtensionSetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration GGS_overridingExtensionSetterForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                                       const GGS_string & in_implementationCppFileName,
                                                                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                       const GGS_string & in_mBaseTypeName,
                                                                                                       const GGS_string & in_mExtensionSetterName,
                                                                                                       const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                                       const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                       const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingExtensionSetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mExtensionSetterName, in_mExtensionSetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overridingExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overridingExtensionSetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_overridingExtensionSetterForGeneration::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_overridingExtensionSetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_overridingExtensionSetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionSetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionSetterForGeneration class
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

cPtr_overridingExtensionSetterForGeneration::cPtr_overridingExtensionSetterForGeneration (const GGS_bool & in_generateHeader,
                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                          const GGS_string & in_mBaseTypeName,
                                                                                          const GGS_string & in_mExtensionSetterName,
                                                                                          const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                          const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                          const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mExtensionSetterName (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

void cPtr_overridingExtensionSetterForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionSetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
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

acPtr_class * cPtr_overridingExtensionSetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionSetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mExtensionSetterName, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @overridingExtensionSetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ("overridingExtensionSetterForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration GGS_overridingExtensionSetterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterForGeneration result ;
  const GGS_overridingExtensionSetterForGeneration * p = (const GGS_overridingExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionSetterForGeneration_2E_weak::objectCompare (const GGS_overridingExtensionSetterForGeneration_2E_weak & inOperand) const {
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

GGS_overridingExtensionSetterForGeneration_2E_weak::GGS_overridingExtensionSetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration_2E_weak & GGS_overridingExtensionSetterForGeneration_2E_weak::operator = (const GGS_overridingExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration_2E_weak::GGS_overridingExtensionSetterForGeneration_2E_weak (const GGS_overridingExtensionSetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration_2E_weak GGS_overridingExtensionSetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionSetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration GGS_overridingExtensionSetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionSetterForGeneration result ;
  if (isValid ()) {
    const cPtr_overridingExtensionSetterForGeneration * p = (cPtr_overridingExtensionSetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionSetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration GGS_overridingExtensionSetterForGeneration_2E_weak::bang_overridingExtensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterForGeneration) ;
      result = GGS_overridingExtensionSetterForGeneration ((cPtr_overridingExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionSetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2E_weak ("overridingExtensionSetterForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionSetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionSetterForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionSetterForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterForGeneration_2E_weak GGS_overridingExtensionSetterForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterForGeneration_2E_weak result ;
  const GGS_overridingExtensionSetterForGeneration_2E_weak * p = (const GGS_overridingExtensionSetterForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionSetterForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (void) :
mProperty_typeName (),
mProperty_isPredefined (),
mProperty_isConcrete (),
mProperty_isFinal (),
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
mProperty_unwrappedType (),
mProperty_readSubscriptMap (),
mProperty_enumerationDescriptorList (),
mProperty_features (),
mProperty_addAssignOperatorArguments (),
mProperty_generateHeaderInSeparateFile (),
mProperty_typeForEnumeratedElement (),
mProperty_headerFileName (),
mProperty_headerKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (const GGS_unifiedTypeDefinition & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_isPredefined (inSource.mProperty_isPredefined),
mProperty_isConcrete (inSource.mProperty_isConcrete),
mProperty_isFinal (inSource.mProperty_isFinal),
mProperty_superType (inSource.mProperty_superType),
mProperty_typeKind (inSource.mProperty_typeKind),
mProperty_supportCollectionValue (inSource.mProperty_supportCollectionValue),
mProperty_allTypedPropertyList (inSource.mProperty_allTypedPropertyList),
mProperty_propertyMap (inSource.mProperty_propertyMap),
mProperty_currentTypedPropertyList (inSource.mProperty_currentTypedPropertyList),
mProperty_initializerMap (inSource.mProperty_initializerMap),
mProperty_classFunctionMap (inSource.mProperty_classFunctionMap),
mProperty_getterMap (inSource.mProperty_getterMap),
mProperty_setterMap (inSource.mProperty_setterMap),
mProperty_instanceMethodMap (inSource.mProperty_instanceMethodMap),
mProperty_classMethodMap (inSource.mProperty_classMethodMap),
mProperty_unwrappedType (inSource.mProperty_unwrappedType),
mProperty_readSubscriptMap (inSource.mProperty_readSubscriptMap),
mProperty_enumerationDescriptorList (inSource.mProperty_enumerationDescriptorList),
mProperty_features (inSource.mProperty_features),
mProperty_addAssignOperatorArguments (inSource.mProperty_addAssignOperatorArguments),
mProperty_generateHeaderInSeparateFile (inSource.mProperty_generateHeaderInSeparateFile),
mProperty_typeForEnumeratedElement (inSource.mProperty_typeForEnumeratedElement),
mProperty_headerFileName (inSource.mProperty_headerFileName),
mProperty_headerKind (inSource.mProperty_headerKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition & GGS_unifiedTypeDefinition::operator = (const GGS_unifiedTypeDefinition & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_isPredefined = inSource.mProperty_isPredefined ;
  mProperty_isConcrete = inSource.mProperty_isConcrete ;
  mProperty_isFinal = inSource.mProperty_isFinal ;
  mProperty_superType = inSource.mProperty_superType ;
  mProperty_typeKind = inSource.mProperty_typeKind ;
  mProperty_supportCollectionValue = inSource.mProperty_supportCollectionValue ;
  mProperty_allTypedPropertyList = inSource.mProperty_allTypedPropertyList ;
  mProperty_propertyMap = inSource.mProperty_propertyMap ;
  mProperty_currentTypedPropertyList = inSource.mProperty_currentTypedPropertyList ;
  mProperty_initializerMap = inSource.mProperty_initializerMap ;
  mProperty_classFunctionMap = inSource.mProperty_classFunctionMap ;
  mProperty_getterMap = inSource.mProperty_getterMap ;
  mProperty_setterMap = inSource.mProperty_setterMap ;
  mProperty_instanceMethodMap = inSource.mProperty_instanceMethodMap ;
  mProperty_classMethodMap = inSource.mProperty_classMethodMap ;
  mProperty_unwrappedType = inSource.mProperty_unwrappedType ;
  mProperty_readSubscriptMap = inSource.mProperty_readSubscriptMap ;
  mProperty_enumerationDescriptorList = inSource.mProperty_enumerationDescriptorList ;
  mProperty_features = inSource.mProperty_features ;
  mProperty_addAssignOperatorArguments = inSource.mProperty_addAssignOperatorArguments ;
  mProperty_generateHeaderInSeparateFile = inSource.mProperty_generateHeaderInSeparateFile ;
  mProperty_typeForEnumeratedElement = inSource.mProperty_typeForEnumeratedElement ;
  mProperty_headerFileName = inSource.mProperty_headerFileName ;
  mProperty_headerKind = inSource.mProperty_headerKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeDefinition GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const GGS_lstring & in_typeName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isPredefined,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isConcrete,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isFinal,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_unifiedTypeMapEntry & in_superType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typeKindEnum & in_typeKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_supportCollectionValue,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typedPropertyList & in_allTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_propertyMap & in_propertyMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typedPropertyList & in_currentTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_initializerMap & in_initializerMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_classFunctionMap & in_classFunctionMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_getterMap & in_getterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_setterMap & in_setterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_classMethodMap & in_classMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_subscriptMap & in_readSubscriptMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_enumerationDescriptorList & in_enumerationDescriptorList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typeFeatures & in_features,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_functionSignature & in_addAssignOperatorArguments,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_generateHeaderInSeparateFile,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_string & in_headerFileName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_headerKind & in_headerKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_isPredefined = in_isPredefined ;
  result.mProperty_isConcrete = in_isConcrete ;
  result.mProperty_isFinal = in_isFinal ;
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
  result.mProperty_unwrappedType = in_unwrappedType ;
  result.mProperty_readSubscriptMap = in_readSubscriptMap ;
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_features = in_features ;
  result.mProperty_addAssignOperatorArguments = in_addAssignOperatorArguments ;
  result.mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  result.mProperty_typeForEnumeratedElement = in_typeForEnumeratedElement ;
  result.mProperty_headerFileName = in_headerFileName ;
  result.mProperty_headerKind = in_headerKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (const GGS_lstring & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_bool & inOperand2,
                                                      const GGS_bool & inOperand3,
                                                      const GGS_unifiedTypeMapEntry & inOperand4,
                                                      const GGS_typeKindEnum & inOperand5,
                                                      const GGS_bool & inOperand6,
                                                      const GGS_typedPropertyList & inOperand7,
                                                      const GGS_propertyMap & inOperand8,
                                                      const GGS_typedPropertyList & inOperand9,
                                                      const GGS_initializerMap & inOperand10,
                                                      const GGS_classFunctionMap & inOperand11,
                                                      const GGS_getterMap & inOperand12,
                                                      const GGS_setterMap & inOperand13,
                                                      const GGS_instanceMethodMap & inOperand14,
                                                      const GGS_classMethodMap & inOperand15,
                                                      const GGS_unifiedTypeMapEntry & inOperand16,
                                                      const GGS_subscriptMap & inOperand17,
                                                      const GGS_enumerationDescriptorList & inOperand18,
                                                      const GGS_typeFeatures & inOperand19,
                                                      const GGS_functionSignature & inOperand20,
                                                      const GGS_bool & inOperand21,
                                                      const GGS_unifiedTypeMapEntry & inOperand22,
                                                      const GGS_string & inOperand23,
                                                      const GGS_headerKind & inOperand24) :
mProperty_typeName (inOperand0),
mProperty_isPredefined (inOperand1),
mProperty_isConcrete (inOperand2),
mProperty_isFinal (inOperand3),
mProperty_superType (inOperand4),
mProperty_typeKind (inOperand5),
mProperty_supportCollectionValue (inOperand6),
mProperty_allTypedPropertyList (inOperand7),
mProperty_propertyMap (inOperand8),
mProperty_currentTypedPropertyList (inOperand9),
mProperty_initializerMap (inOperand10),
mProperty_classFunctionMap (inOperand11),
mProperty_getterMap (inOperand12),
mProperty_setterMap (inOperand13),
mProperty_instanceMethodMap (inOperand14),
mProperty_classMethodMap (inOperand15),
mProperty_unwrappedType (inOperand16),
mProperty_readSubscriptMap (inOperand17),
mProperty_enumerationDescriptorList (inOperand18),
mProperty_features (inOperand19),
mProperty_addAssignOperatorArguments (inOperand20),
mProperty_generateHeaderInSeparateFile (inOperand21),
mProperty_typeForEnumeratedElement (inOperand22),
mProperty_headerFileName (inOperand23),
mProperty_headerKind (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition GGS_unifiedTypeDefinition::class_func_new (const GGS_lstring & in_typeName,
                                                                     const GGS_bool & in_isPredefined,
                                                                     const GGS_bool & in_isConcrete,
                                                                     const GGS_bool & in_isFinal,
                                                                     const GGS_unifiedTypeMapEntry & in_superType,
                                                                     const GGS_typeKindEnum & in_typeKind,
                                                                     const GGS_bool & in_supportCollectionValue,
                                                                     const GGS_typedPropertyList & in_allTypedPropertyList,
                                                                     const GGS_propertyMap & in_propertyMap,
                                                                     const GGS_typedPropertyList & in_currentTypedPropertyList,
                                                                     const GGS_initializerMap & in_initializerMap,
                                                                     const GGS_classFunctionMap & in_classFunctionMap,
                                                                     const GGS_getterMap & in_getterMap,
                                                                     const GGS_setterMap & in_setterMap,
                                                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                                                     const GGS_classMethodMap & in_classMethodMap,
                                                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                     const GGS_subscriptMap & in_readSubscriptMap,
                                                                     const GGS_enumerationDescriptorList & in_enumerationDescriptorList,
                                                                     const GGS_typeFeatures & in_features,
                                                                     const GGS_functionSignature & in_addAssignOperatorArguments,
                                                                     const GGS_bool & in_generateHeaderInSeparateFile,
                                                                     const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                                                     const GGS_string & in_headerFileName,
                                                                     const GGS_headerKind & in_headerKind,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_isPredefined = in_isPredefined ;
  result.mProperty_isConcrete = in_isConcrete ;
  result.mProperty_isFinal = in_isFinal ;
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
  result.mProperty_unwrappedType = in_unwrappedType ;
  result.mProperty_readSubscriptMap = in_readSubscriptMap ;
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_features = in_features ;
  result.mProperty_addAssignOperatorArguments = in_addAssignOperatorArguments ;
  result.mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  result.mProperty_typeForEnumeratedElement = in_typeForEnumeratedElement ;
  result.mProperty_headerFileName = in_headerFileName ;
  result.mProperty_headerKind = in_headerKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeDefinition::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_isPredefined.isValid () && mProperty_isConcrete.isValid () && mProperty_isFinal.isValid () && mProperty_superType.isValid () && mProperty_typeKind.isValid () && mProperty_supportCollectionValue.isValid () && mProperty_allTypedPropertyList.isValid () && mProperty_propertyMap.isValid () && mProperty_currentTypedPropertyList.isValid () && mProperty_initializerMap.isValid () && mProperty_classFunctionMap.isValid () && mProperty_getterMap.isValid () && mProperty_setterMap.isValid () && mProperty_instanceMethodMap.isValid () && mProperty_classMethodMap.isValid () && mProperty_unwrappedType.isValid () && mProperty_readSubscriptMap.isValid () && mProperty_enumerationDescriptorList.isValid () && mProperty_features.isValid () && mProperty_addAssignOperatorArguments.isValid () && mProperty_generateHeaderInSeparateFile.isValid () && mProperty_typeForEnumeratedElement.isValid () && mProperty_headerFileName.isValid () && mProperty_headerKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_isPredefined.drop () ;
  mProperty_isConcrete.drop () ;
  mProperty_isFinal.drop () ;
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
  mProperty_unwrappedType.drop () ;
  mProperty_readSubscriptMap.drop () ;
  mProperty_enumerationDescriptorList.drop () ;
  mProperty_features.drop () ;
  mProperty_addAssignOperatorArguments.drop () ;
  mProperty_generateHeaderInSeparateFile.drop () ;
  mProperty_typeForEnumeratedElement.drop () ;
  mProperty_headerFileName.drop () ;
  mProperty_headerKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::description (String & ioString,
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
    mProperty_isFinal.description (ioString, inIndentation+1) ;
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
    mProperty_unwrappedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_readSubscriptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enumerationDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_features.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_addAssignOperatorArguments.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_generateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeForEnumeratedElement.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_headerFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_headerKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ("unifiedTypeDefinition",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition GGS_unifiedTypeDefinition::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  const GGS_unifiedTypeDefinition * p = (const GGS_unifiedTypeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_localVarManager & inSource) :
mProperty_mCurrentManager (inSource.mProperty_mCurrentManager),
mProperty_mOverridenManagers (inSource.mProperty_mOverridenManagers) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager & GGS_localVarManager::operator = (const GGS_localVarManager & inSource) {
  mProperty_mCurrentManager = inSource.mProperty_mCurrentManager ;
  mProperty_mOverridenManagers = inSource.mProperty_mOverridenManagers ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mCurrentManager = GGS_currentVarManager::init (inCompiler COMMA_HERE) ;
  mProperty_mOverridenManagers = GGS_openedOverrideList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_currentVarManager & inOperand0,
                                          const GGS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::description (String & ioString,
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
//     @localVarManager generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_localVarManager result ;
  const GGS_localVarManager * p = (const GGS_localVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

