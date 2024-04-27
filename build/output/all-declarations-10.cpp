#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ifTestListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ifTestListForGeneration : public cCollectionElement {
  public: GGS_ifTestListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GGS_ifTestForGeneration & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GGS_ifTestListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ifTestListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ifTestListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ifTestListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ifTestListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration::GGS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::enterElement (const GGS_ifTestListForGeneration_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::class_func_listWithValue (const GGS_ifTestForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_ifTestListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ifTestListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_ifTestForGeneration & in_mExpression
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::addAssign_operation (const GGS_ifTestForGeneration & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_append (const GGS_ifTestForGeneration inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_insertAtIndex (const GGS_ifTestForGeneration inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_removeAtIndex (GGS_ifTestForGeneration & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_popFirst (GGS_ifTestForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_popLast (GGS_ifTestForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::method_first (GGS_ifTestForGeneration & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::method_last (GGS_ifTestForGeneration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::add_operation (const GGS_ifTestListForGeneration & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_ifTestListForGeneration result = GGS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::plusAssign_operation (const GGS_ifTestListForGeneration inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestListForGeneration::setter_setMExpressionAtIndex (GGS_ifTestForGeneration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  GGS_ifTestForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ifTestListForGeneration::cEnumerator_ifTestListForGeneration (const GGS_ifTestListForGeneration & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration_2E_element cEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration cEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ifTestListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ("ifTestListForGeneration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifTestListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifTestListForGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifTestListForGeneration result ;
  const GGS_ifTestListForGeneration * p = (const GGS_ifTestListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration::objectCompare (const GGS_ifInstructionForGeneration & inOperand) const {
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

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ifTestListForGeneration & in_mExpressions,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList, inCompiler) ;
  const GGS_ifInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::
ifInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_ifTestListForGeneration & in_mExpressions,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                               const GGS_ifTestListForGeneration & in_mExpressions,
                                                                               const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                               const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                               COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionForGeneration (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifInstructionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_ifTestListForGeneration & in_mExpressions,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  const GGS_ifInstructionForGeneration * p = (const GGS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration_2E_weak::objectCompare (const GGS_ifInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak & GGS_ifInstructionForGeneration_2E_weak::operator = (const GGS_ifInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak::GGS_ifInstructionForGeneration_2E_weak (const GGS_ifInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration_2E_weak::bang_ifInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionForGeneration) ;
      result = GGS_ifInstructionForGeneration ((cPtr_ifInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ("ifInstructionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration_2E_weak GGS_ifInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration_2E_weak result ;
  const GGS_ifInstructionForGeneration_2E_weak * p = (const GGS_ifInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithAssignmentAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ("localVariableOrConstantDeclarationWithAssignmentAST.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationAST_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak & GGS_undefinedLocalConstantDeclarationAST_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (const GGS_undefinedLocalConstantDeclarationAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GGS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ("undefinedLocalConstantDeclarationAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationAST_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak & GGS_localConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GGS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localConstantDeclarationWithAssignmentAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ("localConstantDeclarationWithAssignmentAST.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationForGeneration_init_21__21_ (in_mTargetType, in_mCppVariableName, inCompiler) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::
undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                             const GGS_string & in_mCppVariableName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                       const GGS_string & in_mCppVariableName
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (in_mTargetType, in_mCppVariableName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                          const GGS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration * p = (const GGS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GGS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ("undefinedLocalConstantDeclarationForGeneration.weak",
                                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
      result = GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ((cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak",
                                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@logListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_logListAST : public cCollectionElement {
  public: GGS_logListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_logListAST (const GGS_lstring & in_mLogMessage,
                                         const GGS_semanticExpressionAST & in_mLogExpression
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_logListAST (const GGS_logListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GGS_lstring & in_mLogMessage,
                                                              const GGS_semanticExpressionAST & in_mLogExpression
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLogMessage, in_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GGS_logListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLogMessage, inElement.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_logListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_logListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_logListAST (mObject.mProperty_mLogMessage, mObject.mProperty_mLogExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_logListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogMessage" ":") ;
  mObject.mProperty_mLogMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogExpression" ":") ;
  mObject.mProperty_mLogExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST::GGS_logListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST::GGS_logListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::enterElement (const GGS_logListAST_2E_element & inValue,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                         const GGS_semanticExpressionAST & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  GGS_logListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_logListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_logListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_lstring & in_mLogMessage,
                                                const GGS_semanticExpressionAST & in_mLogExpression
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (in_mLogMessage,
                                                in_mLogExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                          const GGS_semanticExpressionAST & inOperand1
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_append (const GGS_lstring inOperand0,
                                    const GGS_semanticExpressionAST inOperand1,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                           const GGS_semanticExpressionAST inOperand1,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                           GGS_semanticExpressionAST & outOperand1,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_logListAST) ;
      outOperand0 = p->mObject.mProperty_mLogMessage ;
      outOperand1 = p->mObject.mProperty_mLogExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_popFirst (GGS_lstring & outOperand0,
                                      GGS_semanticExpressionAST & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_popLast (GGS_lstring & outOperand0,
                                     GGS_semanticExpressionAST & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::method_first (GGS_lstring & outOperand0,
                                   GGS_semanticExpressionAST & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::method_last (GGS_lstring & outOperand0,
                                  GGS_semanticExpressionAST & outOperand1,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::add_operation (const GGS_logListAST & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_logListAST result = GGS_logListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::plusAssign_operation (const GGS_logListAST inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_setMLogMessageAtIndex (GGS_lstring inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_logListAST::getter_mLogMessageAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST::setter_setMLogExpressionAtIndex (GGS_semanticExpressionAST inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_logListAST::getter_mLogExpressionAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GGS_semanticExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_logListAST::cEnumerator_logListAST (const GGS_logListAST & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element cEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST cEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @logListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST ("logListAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logListAST::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_logListAST result ;
  const GGS_logListAST * p = (const GGS_logListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLogList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLogList.printNonNullClassInstanceProperties ("mLogList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionAST::objectCompare (const GGS_logInstructionAST & inOperand) const {
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

GGS_logInstructionAST::GGS_logInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_logListAST & in_mLogList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_logInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_logInstructionAST (inCompiler COMMA_THERE)) ;
  object->logInstructionAST_init_21__21_ (in_mInstructionLocation, in_mLogList, inCompiler) ;
  const GGS_logInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::
logInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                const GGS_logListAST & in_mLogList,
                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST::GGS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_logListAST & in_mLogList
                                                             COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_logInstructionAST (in_mInstructionLocation, in_mLogList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logInstructionAST::readProperty_mLogList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_logListAST () ;
  }else{
    cPtr_logInstructionAST * p = (cPtr_logInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionAST) ;
    return p->mProperty_mLogList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_logListAST & in_mLogList
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLogList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

void cPtr_logInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@logInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLogList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionAST (mProperty_mInstructionLocation, mProperty_mLogList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @logInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ("logInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST result ;
  const GGS_logInstructionAST * p = (const GGS_logInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionAST_2E_weak::objectCompare (const GGS_logInstructionAST_2E_weak & inOperand) const {
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

GGS_logInstructionAST_2E_weak::GGS_logInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak & GGS_logInstructionAST_2E_weak::operator = (const GGS_logInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak::GGS_logInstructionAST_2E_weak (const GGS_logInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak GGS_logInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST_2E_weak::bang_logInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionAST) ;
      result = GGS_logInstructionAST ((cPtr_logInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ("logInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST_2E_weak GGS_logInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST_2E_weak result ;
  const GGS_logInstructionAST_2E_weak * p = (const GGS_logInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionForGeneration_2E_weak::objectCompare (const GGS_logInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak & GGS_logInstructionForGeneration_2E_weak::operator = (const GGS_logInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (const GGS_logInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak GGS_logInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration_2E_weak::bang_logInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionForGeneration) ;
      result = GGS_logInstructionForGeneration ((cPtr_logInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ("logInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_logInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak GGS_logInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_logInstructionForGeneration_2E_weak result ;
  const GGS_logInstructionForGeneration_2E_weak * p = (const GGS_logInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST::objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const {
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

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::
loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                            const GGS_location & in_mEndOfVariantExpression,
                                                                            const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                            const GGS_location & in_mEndOfFirstInstructions,
                                                                            const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                            const GGS_location & in_mEndOfLoopExpression,
                                                                            const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                            const GGS_location & in_mEndOfSecondInstructions,
                                                                            const GGS_location & in_mEndOfLoopInstruction,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (const cPtr_loopInstructionWithVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                                     const GGS_location & in_mEndOfVariantExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                     const GGS_location & in_mEndOfFirstInstructions,
                                                                                     const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                                     const GGS_location & in_mEndOfLoopExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                     const GGS_location & in_mEndOfSecondInstructions,
                                                                                     const GGS_location & in_mEndOfLoopInstruction
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantAST (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                        const GGS_location & in_mEndOfVariantExpression,
                                                                        const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                        const GGS_location & in_mEndOfFirstInstructions,
                                                                        const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                        const GGS_location & in_mEndOfLoopExpression,
                                                                        const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                        const GGS_location & in_mEndOfSecondInstructions,
                                                                        const GGS_location & in_mEndOfLoopInstruction
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

void cPtr_loopInstructionWithVariantAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ("loopInstructionWithVariantAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  const GGS_loopInstructionWithVariantAST * p = (const GGS_loopInstructionWithVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak & GGS_loopInstructionWithVariantAST_2E_weak::operator = (const GGS_loopInstructionWithVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (const GGS_loopInstructionWithVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantAST) ;
      result = GGS_loopInstructionWithVariantAST ((cPtr_loopInstructionWithVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ("loopInstructionWithVariantAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  const GGS_loopInstructionWithVariantAST_2E_weak * p = (const GGS_loopInstructionWithVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak & GGS_loopInstructionWithVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (const GGS_loopInstructionWithVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantForGeneration) ;
      result = GGS_loopInstructionWithVariantForGeneration ((cPtr_loopInstructionWithVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ("loopInstructionWithVariantForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST::objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                      const GGS_location & in_mEndOfFirstInstructions,
                                      const GGS_semanticExpressionAST & in_mLoopExpression,
                                      const GGS_location & in_mEndOfLoopExpression,
                                      const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                      const GGS_location & in_mEndOfSecondInstructions,
                                      const GGS_location & in_mEndOfLoopInstruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithoutVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::
loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                       const GGS_location & in_mEndOfFirstInstructions,
                                                                       const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                       const GGS_location & in_mEndOfLoopExpression,
                                                                       const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                       const GGS_location & in_mEndOfSecondInstructions,
                                                                       const GGS_location & in_mEndOfLoopInstruction,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (const cPtr_loopInstructionWithoutVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                           const GGS_location & in_mEndOfFirstInstructions,
                                                                                           const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                                           const GGS_location & in_mEndOfLoopExpression,
                                                                                           const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                           const GGS_location & in_mEndOfSecondInstructions,
                                                                                           const GGS_location & in_mEndOfLoopInstruction
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantAST (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                              const GGS_location & in_mEndOfFirstInstructions,
                                                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                              const GGS_location & in_mEndOfLoopExpression,
                                                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                              const GGS_location & in_mEndOfSecondInstructions,
                                                                              const GGS_location & in_mEndOfLoopInstruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

void cPtr_loopInstructionWithoutVariantAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantAST (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ("loopInstructionWithoutVariantAST",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  const GGS_loopInstructionWithoutVariantAST * p = (const GGS_loopInstructionWithoutVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak & GGS_loopInstructionWithoutVariantAST_2E_weak::operator = (const GGS_loopInstructionWithoutVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (const GGS_loopInstructionWithoutVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantAST) ;
      result = GGS_loopInstructionWithoutVariantAST ((cPtr_loopInstructionWithoutVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ("loopInstructionWithoutVariantAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  const GGS_loopInstructionWithoutVariantAST_2E_weak * p = (const GGS_loopInstructionWithoutVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak & GGS_loopInstructionWithoutVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithoutVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const GGS_loopInstructionWithoutVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
      result = GGS_loopInstructionWithoutVariantForGeneration ((cPtr_loopInstructionWithoutVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ("loopInstructionWithoutVariantForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithoutVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @messageInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_messageInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionAST::objectCompare (const GGS_messageInstructionAST & inOperand) const {
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

GGS_messageInstructionAST::GGS_messageInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_messageInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_messageInstructionAST (inCompiler COMMA_THERE)) ;
  object->messageInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_messageInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::
messageInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                    const GGS_semanticExpressionAST & in_mExpression,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST::GGS_messageInstructionAST (const cPtr_messageInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_semanticExpressionAST & in_mExpression
                                                                     COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_messageInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_messageInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_messageInstructionAST * p = (cPtr_messageInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @messageInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_messageInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

void cPtr_messageInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@messageInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_messageInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_messageInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST ("messageInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST result ;
  const GGS_messageInstructionAST * p = (const GGS_messageInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionAST_2E_weak::objectCompare (const GGS_messageInstructionAST_2E_weak & inOperand) const {
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

GGS_messageInstructionAST_2E_weak::GGS_messageInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak & GGS_messageInstructionAST_2E_weak::operator = (const GGS_messageInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak::GGS_messageInstructionAST_2E_weak (const GGS_messageInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak GGS_messageInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_messageInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST GGS_messageInstructionAST_2E_weak::bang_messageInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_messageInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionAST) ;
      result = GGS_messageInstructionAST ((cPtr_messageInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ("messageInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionAST_2E_weak GGS_messageInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_messageInstructionAST_2E_weak result ;
  const GGS_messageInstructionAST_2E_weak * p = (const GGS_messageInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_messageInstructionForGeneration_2E_weak::objectCompare (const GGS_messageInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_messageInstructionForGeneration_2E_weak::GGS_messageInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak & GGS_messageInstructionForGeneration_2E_weak::operator = (const GGS_messageInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak::GGS_messageInstructionForGeneration_2E_weak (const GGS_messageInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak GGS_messageInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_messageInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration GGS_messageInstructionForGeneration_2E_weak::bang_messageInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_messageInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionForGeneration) ;
      result = GGS_messageInstructionForGeneration ((cPtr_messageInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration_2E_weak ("messageInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_messageInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_messageInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_messageInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_messageInstructionForGeneration_2E_weak GGS_messageInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_messageInstructionForGeneration_2E_weak result ;
  const GGS_messageInstructionForGeneration_2E_weak * p = (const GGS_messageInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_messageInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionAST_2E_weak::objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak & GGS_methodCallInstructionAST_2E_weak::operator = (const GGS_methodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (const GGS_methodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GGS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ("methodCallInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  const GGS_methodCallInstructionAST_2E_weak * p = (const GGS_methodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak & GGS_methodCallInstructionForGeneration_2E_weak::operator = (const GGS_methodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (const GGS_methodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GGS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ("methodCallInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_methodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  const GGS_methodCallInstructionForGeneration_2E_weak * p = (const GGS_methodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST::objectCompare (const GGS_superInitInstructionAST & inOperand) const {
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

GGS_superInitInstructionAST::GGS_superInitInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_actualOutputArgumentList & in_mActualParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionAST (inCompiler COMMA_THERE)) ;
  object->superInitInstructionAST_init_21__21_ (in_mInstructionLocation, in_mActualParameterList, inCompiler) ;
  const GGS_superInitInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::
superInitInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_actualOutputArgumentList & in_mActualParameterList,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST::GGS_superInitInstructionAST (const cPtr_superInitInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_actualOutputArgumentList & in_mActualParameterList
                                                                         COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionAST (in_mInstructionLocation, in_mActualParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                                            const GGS_actualOutputArgumentList & in_mActualParameterList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

void cPtr_superInitInstructionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionAST (mProperty_mInstructionLocation, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST ("superInitInstructionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST result ;
  const GGS_superInitInstructionAST * p = (const GGS_superInitInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST_2E_weak::objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const {
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

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak & GGS_superInitInstructionAST_2E_weak::operator = (const GGS_superInitInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (const GGS_superInitInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak GGS_superInitInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superInitInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST_2E_weak::bang_superInitInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superInitInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionAST) ;
      result = GGS_superInitInstructionAST ((cPtr_superInitInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ("superInitInstructionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak GGS_superInitInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST_2E_weak result ;
  const GGS_superInitInstructionAST_2E_weak * p = (const GGS_superInitInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mSuperInitializerSignature.printNonNullClassInstanceProperties ("mSuperInitializerSignature") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mSuperTypeName.printNonNullClassInstanceProperties ("mSuperTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionForGeneration::objectCompare (const GGS_superInitInstructionForGeneration & inOperand) const {
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

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSuperInitializerSignature,
                      const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                      const GGS_string & in_mSuperTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superInitInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName, inCompiler) ;
  const GGS_superInitInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::
superInitInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mSuperInitializerSignature,
                                                        const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                        const GGS_string & in_mSuperTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (const cPtr_superInitInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_string & in_mSuperInitializerSignature,
                                                                                             const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                             const GGS_string & in_mSuperTypeName
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionForGeneration (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_superInitInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperInitializerSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperInitializerSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_superInitInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_string & in_mSuperInitializerSignature,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                const GGS_string & in_mSuperTypeName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

void cPtr_superInitInstructionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperInitializerSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSuperInitializerSignature, mProperty_mActualParameterList, mProperty_mSuperTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ("superInitInstructionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration result ;
  const GGS_superInitInstructionForGeneration * p = (const GGS_superInitInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionForGeneration_2E_weak::objectCompare (const GGS_superInitInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_superInitInstructionForGeneration_2E_weak::GGS_superInitInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak & GGS_superInitInstructionForGeneration_2E_weak::operator = (const GGS_superInitInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak::GGS_superInitInstructionForGeneration_2E_weak (const GGS_superInitInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak GGS_superInitInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration_2E_weak::bang_superInitInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superInitInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionForGeneration) ;
      result = GGS_superInitInstructionForGeneration ((cPtr_superInitInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ("superInitInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_superInitInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration_2E_weak GGS_superInitInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionForGeneration_2E_weak result ;
  const GGS_superInitInstructionForGeneration_2E_weak * p = (const GGS_superInitInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST_2E_weak::objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const {
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

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak & GGS_procCallInstructionAST_2E_weak::operator = (const GGS_procCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (const GGS_procCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST_2E_weak::bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionAST) ;
      result = GGS_procCallInstructionAST ((cPtr_procCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ("procCallInstructionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  const GGS_procCallInstructionAST_2E_weak * p = (const GGS_procCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionForGeneration_2E_weak::objectCompare (const GGS_procCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak & GGS_procCallInstructionForGeneration_2E_weak::operator = (const GGS_procCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak::GGS_procCallInstructionForGeneration_2E_weak (const GGS_procCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration_2E_weak::bang_procCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionForGeneration) ;
      result = GGS_procCallInstructionForGeneration ((cPtr_procCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ("procCallInstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration_2E_weak GGS_procCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration_2E_weak result ;
  const GGS_procCallInstructionForGeneration_2E_weak * p = (const GGS_procCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST::objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const {
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

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mSourceExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21_ (in_mInstructionLocation, in_mSourceExpression, inCompiler) ;
  const GGS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_semanticExpressionAST & in_mSourceExpression
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfAssignmentInstructionAST (in_mInstructionLocation, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_semanticExpressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST result ;
  const GGS_selfAssignmentInstructionAST * p = (const GGS_selfAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST_2E_weak::objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak & GGS_selfAssignmentInstructionAST_2E_weak::operator = (const GGS_selfAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (const GGS_selfAssignmentInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak GGS_selfAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST_2E_weak::bang_selfAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfAssignmentInstructionAST) ;
      result = GGS_selfAssignmentInstructionAST ((cPtr_selfAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAssignmentInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ("selfAssignmentInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak GGS_selfAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST_2E_weak result ;
  const GGS_selfAssignmentInstructionAST_2E_weak * p = (const GGS_selfAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualElementsInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualElementsInstructionAST::cPtr_selfPlusEqualElementsInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualElementsInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualElementsInstructionAST::objectCompare (const GGS_selfPlusEqualElementsInstructionAST & inOperand) const {
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

GGS_selfPlusEqualElementsInstructionAST::GGS_selfPlusEqualElementsInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST GGS_selfPlusEqualElementsInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_actualOutputArgumentList & in_mExpressions,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualElementsInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualElementsInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualElementsInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpressions, inCompiler) ;
  const GGS_selfPlusEqualElementsInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::
selfPlusEqualElementsInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_actualOutputArgumentList & in_mExpressions,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST::GGS_selfPlusEqualElementsInstructionAST (const cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualElementsInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST GGS_selfPlusEqualElementsInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_actualOutputArgumentList & in_mExpressions
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualElementsInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualElementsInstructionAST (in_mInstructionLocation, in_mExpressions COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_selfPlusEqualElementsInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_selfPlusEqualElementsInstructionAST * p = (cPtr_selfPlusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualElementsInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualElementsInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualElementsInstructionAST::cPtr_selfPlusEqualElementsInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_actualOutputArgumentList & in_mExpressions
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpressions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPlusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

void cPtr_selfPlusEqualElementsInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPlusEqualElementsInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPlusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualElementsInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualElementsInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ("selfPlusEqualElementsInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST GGS_selfPlusEqualElementsInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualElementsInstructionAST result ;
  const GGS_selfPlusEqualElementsInstructionAST * p = (const GGS_selfPlusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualElementsInstructionAST_2E_weak::objectCompare (const GGS_selfPlusEqualElementsInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPlusEqualElementsInstructionAST_2E_weak::GGS_selfPlusEqualElementsInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST_2E_weak & GGS_selfPlusEqualElementsInstructionAST_2E_weak::operator = (const GGS_selfPlusEqualElementsInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST_2E_weak::GGS_selfPlusEqualElementsInstructionAST_2E_weak (const GGS_selfPlusEqualElementsInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST_2E_weak GGS_selfPlusEqualElementsInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfPlusEqualElementsInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST GGS_selfPlusEqualElementsInstructionAST_2E_weak::bang_selfPlusEqualElementsInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfPlusEqualElementsInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualElementsInstructionAST) ;
      result = GGS_selfPlusEqualElementsInstructionAST ((cPtr_selfPlusEqualElementsInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualElementsInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST_2E_weak ("selfPlusEqualElementsInstructionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualElementsInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualElementsInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualElementsInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualElementsInstructionAST_2E_weak GGS_selfPlusEqualElementsInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualElementsInstructionAST_2E_weak result ;
  const GGS_selfPlusEqualElementsInstructionAST_2E_weak * p = (const GGS_selfPlusEqualElementsInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualElementsInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualElementsInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfPlusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::
selfPlusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                     const GGS_semanticExpressionAST & in_mExpression
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfPlusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_semanticExpressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPlusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

void cPtr_selfPlusEqualExpressionInstructionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPlusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPlusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ("selfPlusEqualExpressionInstructionAST",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  const GGS_selfPlusEqualExpressionInstructionAST * p = (const GGS_selfPlusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak & GGS_selfPlusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfPlusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (const GGS_selfPlusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak GGS_selfPlusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST_2E_weak::bang_selfPlusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
      result = GGS_selfPlusEqualExpressionInstructionAST ((cPtr_selfPlusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualExpressionInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ("selfPlusEqualExpressionInstructionAST.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPlusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPlusEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPlusEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak GGS_selfPlusEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfPlusEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPlusEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfMinusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMinusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMinusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMinusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMinusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfMinusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::
selfMinusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (const cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                       const GGS_semanticExpressionAST & in_mExpression
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfMinusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfMinusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMinusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMinusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_semanticExpressionAST & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfMinusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

void cPtr_selfMinusEqualExpressionInstructionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@selfMinusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfMinusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMinusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfMinusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ("selfMinusEqualExpressionInstructionAST",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMinusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMinusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMinusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  const GGS_selfMinusEqualExpressionInstructionAST * p = (const GGS_selfMinusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMinusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak & GGS_selfMinusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfMinusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (const GGS_selfMinusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak GGS_selfMinusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST_2E_weak::bang_selfMinusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
      result = GGS_selfMinusEqualExpressionInstructionAST ((cPtr_selfMinusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfMinusEqualExpressionInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ("selfMinusEqualExpressionInstructionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMinusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMinusEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMinusEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak GGS_selfMinusEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfMinusEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMinusEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfMulEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMulEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMulEqualExpressionInstructionAST::objectCompare (const GGS_selfMulEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfMulEqualExpressionInstructionAST::GGS_selfMulEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMulEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMulEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMulEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfMulEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::
selfMulEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST::GGS_selfMulEqualExpressionInstructionAST (const cPtr_selfMulEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMulEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   const GGS_semanticExpressionAST & in_mExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_selfMulEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfMulEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfMulEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfMulEqualExpressionInstructionAST * p = (cPtr_selfMulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMulEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMulEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_semanticExpressionAST & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfMulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;
}

void cPtr_selfMulEqualExpressionInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfMulEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfMulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfMulEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ("selfMulEqualExpressionInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfMulEqualExpressionInstructionAST result ;
  const GGS_selfMulEqualExpressionInstructionAST * p = (const GGS_selfMulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMulEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfMulEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfMulEqualExpressionInstructionAST_2E_weak::GGS_selfMulEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak & GGS_selfMulEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfMulEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak::GGS_selfMulEqualExpressionInstructionAST_2E_weak (const GGS_selfMulEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak GGS_selfMulEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfMulEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST_2E_weak::bang_selfMulEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfMulEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMulEqualExpressionInstructionAST) ;
      result = GGS_selfMulEqualExpressionInstructionAST ((cPtr_selfMulEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfMulEqualExpressionInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2E_weak ("selfMulEqualExpressionInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMulEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMulEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMulEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak GGS_selfMulEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfMulEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfMulEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfMulEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMulEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMulEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfDivEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST::objectCompare (const GGS_selfDivEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfDivEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfDivEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfDivEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfDivEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::
selfDivEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (const cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfDivEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   const GGS_semanticExpressionAST & in_mExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfDivEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfDivEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfDivEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_semanticExpressionAST & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfDivEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

void cPtr_selfDivEqualExpressionInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfDivEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfDivEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfDivEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfDivEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ("selfDivEqualExpressionInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfDivEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfDivEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfDivEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST result ;
  const GGS_selfDivEqualExpressionInstructionAST * p = (const GGS_selfDivEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfDivEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfDivEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak & GGS_selfDivEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfDivEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (const GGS_selfDivEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak GGS_selfDivEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST_2E_weak::bang_selfDivEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfDivEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfDivEqualExpressionInstructionAST) ;
      result = GGS_selfDivEqualExpressionInstructionAST ((cPtr_selfDivEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfDivEqualExpressionInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ("selfDivEqualExpressionInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfDivEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfDivEqualExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfDivEqualExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak GGS_selfDivEqualExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
  const GGS_selfDivEqualExpressionInstructionAST_2E_weak * p = (const GGS_selfDivEqualExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfDivEqualExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionAST_2E_weak::objectCompare (const GGS_setterCallInstructionAST_2E_weak & inOperand) const {
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

GGS_setterCallInstructionAST_2E_weak::GGS_setterCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak & GGS_setterCallInstructionAST_2E_weak::operator = (const GGS_setterCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak::GGS_setterCallInstructionAST_2E_weak (const GGS_setterCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak GGS_setterCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setterCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST GGS_setterCallInstructionAST_2E_weak::bang_setterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionAST) ;
      result = GGS_setterCallInstructionAST ((cPtr_setterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2E_weak ("setterCallInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setterCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak GGS_setterCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_setterCallInstructionAST_2E_weak result ;
  const GGS_setterCallInstructionAST_2E_weak * p = (const GGS_setterCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionAST_2E_weak::objectCompare (const GGS_selfSetterCallInstructionAST_2E_weak & inOperand) const {
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

GGS_selfSetterCallInstructionAST_2E_weak::GGS_selfSetterCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak & GGS_selfSetterCallInstructionAST_2E_weak::operator = (const GGS_selfSetterCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak::GGS_selfSetterCallInstructionAST_2E_weak (const GGS_selfSetterCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak GGS_selfSetterCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfSetterCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST GGS_selfSetterCallInstructionAST_2E_weak::bang_selfSetterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfSetterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionAST) ;
      result = GGS_selfSetterCallInstructionAST ((cPtr_selfSetterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2E_weak ("selfSetterCallInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfSetterCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfSetterCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfSetterCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak GGS_selfSetterCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfSetterCallInstructionAST_2E_weak result ;
  const GGS_selfSetterCallInstructionAST_2E_weak * p = (const GGS_selfSetterCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfSetterCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionForGeneration_2E_weak::objectCompare (const GGS_setterCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_setterCallInstructionForGeneration_2E_weak::GGS_setterCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak & GGS_setterCallInstructionForGeneration_2E_weak::operator = (const GGS_setterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak::GGS_setterCallInstructionForGeneration_2E_weak (const GGS_setterCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak GGS_setterCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setterCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration GGS_setterCallInstructionForGeneration_2E_weak::bang_setterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionForGeneration) ;
      result = GGS_setterCallInstructionForGeneration ((cPtr_setterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2E_weak ("setterCallInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setterCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionForGeneration_2E_weak GGS_setterCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_setterCallInstructionForGeneration_2E_weak result ;
  const GGS_setterCallInstructionForGeneration_2E_weak * p = (const GGS_setterCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionForGeneration_2E_weak::objectCompare (const GGS_selfSetterCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selfSetterCallInstructionForGeneration_2E_weak::GGS_selfSetterCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak & GGS_selfSetterCallInstructionForGeneration_2E_weak::operator = (const GGS_selfSetterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak::GGS_selfSetterCallInstructionForGeneration_2E_weak (const GGS_selfSetterCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak GGS_selfSetterCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfSetterCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration GGS_selfSetterCallInstructionForGeneration_2E_weak::bang_selfSetterCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfSetterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionForGeneration) ;
      result = GGS_selfSetterCallInstructionForGeneration ((cPtr_selfSetterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2E_weak ("selfSetterCallInstructionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfSetterCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfSetterCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfSetterCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionForGeneration_2E_weak GGS_selfSetterCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selfSetterCallInstructionForGeneration_2E_weak result ;
  const GGS_selfSetterCallInstructionForGeneration_2E_weak * p = (const GGS_selfSetterCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfSetterCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchBranchesAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesAST : public cCollectionElement {
  public: GGS_switchBranchesAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchBranchesAST (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                const GGS_semanticInstructionListAST & in_mInstructions,
                                                const GGS_location & in_mEndOfBranch
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesAST (const GGS_switchBranchesAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesAST::cCollectionElement_switchBranchesAST (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                            const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                            const GGS_semanticInstructionListAST & in_mInstructions,
                                                                            const GGS_location & in_mEndOfBranch
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mAssociatedValuesExtraction, in_mInstructions, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesAST::cCollectionElement_switchBranchesAST (const GGS_switchBranchesAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mAssociatedValuesExtraction, inElement.mProperty_mInstructions, inElement.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchBranchesAST (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mAssociatedValuesExtraction, mObject.mProperty_mInstructions, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchBranchesAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSwitchConstantList" ":") ;
  mObject.mProperty_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedValuesExtraction" ":") ;
  mObject.mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructions" ":") ;
  mObject.mProperty_mInstructions.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranch" ":") ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST::GGS_switchBranchesAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST::GGS_switchBranchesAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_switchBranchesAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_switchBranchesAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::enterElement (const GGS_switchBranchesAST_2E_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::class_func_listWithValue (const GGS__5B_lstring_5D_ & inOperand0,
                                                                       const GGS_switchExtractedValuesListAST & inOperand1,
                                                                       const GGS_semanticInstructionListAST & inOperand2,
                                                                       const GGS_location & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GGS_switchBranchesAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_switchBranchesAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_switchBranchesAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                       const GGS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                       const GGS_semanticInstructionListAST & in_mInstructions,
                                                       const GGS_location & in_mEndOfBranch
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesAST (in_mSwitchConstantList,
                                                       in_mAssociatedValuesExtraction,
                                                       in_mInstructions,
                                                       in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::addAssign_operation (const GGS__5B_lstring_5D_ & inOperand0,
                                                 const GGS_switchExtractedValuesListAST & inOperand1,
                                                 const GGS_semanticInstructionListAST & inOperand2,
                                                 const GGS_location & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_append (const GGS__5B_lstring_5D_ inOperand0,
                                           const GGS_switchExtractedValuesListAST inOperand1,
                                           const GGS_semanticInstructionListAST inOperand2,
                                           const GGS_location inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_insertAtIndex (const GGS__5B_lstring_5D_ inOperand0,
                                                  const GGS_switchExtractedValuesListAST inOperand1,
                                                  const GGS_semanticInstructionListAST inOperand2,
                                                  const GGS_location inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_removeAtIndex (GGS__5B_lstring_5D_ & outOperand0,
                                                  GGS_switchExtractedValuesListAST & outOperand1,
                                                  GGS_semanticInstructionListAST & outOperand2,
                                                  GGS_location & outOperand3,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
      outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
      outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
      outOperand2 = p->mObject.mProperty_mInstructions ;
      outOperand3 = p->mObject.mProperty_mEndOfBranch ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_popFirst (GGS__5B_lstring_5D_ & outOperand0,
                                             GGS_switchExtractedValuesListAST & outOperand1,
                                             GGS_semanticInstructionListAST & outOperand2,
                                             GGS_location & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_popLast (GGS__5B_lstring_5D_ & outOperand0,
                                            GGS_switchExtractedValuesListAST & outOperand1,
                                            GGS_semanticInstructionListAST & outOperand2,
                                            GGS_location & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::method_first (GGS__5B_lstring_5D_ & outOperand0,
                                          GGS_switchExtractedValuesListAST & outOperand1,
                                          GGS_semanticInstructionListAST & outOperand2,
                                          GGS_location & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::method_last (GGS__5B_lstring_5D_ & outOperand0,
                                         GGS_switchExtractedValuesListAST & outOperand1,
                                         GGS_semanticInstructionListAST & outOperand2,
                                         GGS_location & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::add_operation (const GGS_switchBranchesAST & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchBranchesAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesAST result = GGS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesAST result = GGS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesAST result = GGS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::plusAssign_operation (const GGS_switchBranchesAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_setMSwitchConstantListAtIndex (GGS__5B_lstring_5D_ inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSwitchConstantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_switchBranchesAST::getter_mSwitchConstantListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GGS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mSwitchConstantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_setMAssociatedValuesExtractionAtIndex (GGS_switchExtractedValuesListAST inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValuesExtraction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchBranchesAST::getter_mAssociatedValuesExtractionAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GGS_switchExtractedValuesListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mAssociatedValuesExtraction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_setMInstructionsAtIndex (GGS_semanticInstructionListAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_switchBranchesAST::getter_mInstructionsAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GGS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mInstructions ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesAST::setter_setMEndOfBranchAtIndex (GGS_location inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchBranchesAST::getter_mEndOfBranchAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchBranchesAST::cEnumerator_switchBranchesAST (const GGS_switchBranchesAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST_2E_element cEnumerator_switchBranchesAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ cEnumerator_switchBranchesAST::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST cEnumerator_switchBranchesAST::current_mAssociatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mAssociatedValuesExtraction ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST cEnumerator_switchBranchesAST::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_switchBranchesAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST ("switchBranchesAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchBranchesAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchBranchesAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_switchBranchesAST result ;
  const GGS_switchBranchesAST * p = (const GGS_switchBranchesAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOfSwitchExpression.printNonNullClassInstanceProperties ("mEndOfSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
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

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOfSwitchExpression,
                          const GGS_switchBranchesAST & in_mBranches,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_semanticExpressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOfSwitchExpression,
                                               const GGS_switchBranchesAST & in_mBranches,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                                   const GGS_location & in_mEndOfSwitchExpression,
                                                                   const GGS_switchBranchesAST & in_mBranches,
                                                                   const GGS_location & in_mEndOf_5F_switch_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOfSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOfSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchInstructionAST::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchBranchesAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOfSwitchExpression,
                                                      const GGS_switchBranchesAST & in_mBranches,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  const GGS_switchInstructionAST * p = (const GGS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST_2E_weak::objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const {
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

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak & GGS_switchInstructionAST_2E_weak::operator = (const GGS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (const GGS_switchInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GGS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  const GGS_switchInstructionAST_2E_weak * p = (const GGS_switchInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchBranchesForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesForGeneration : public cCollectionElement {
  public: GGS_switchBranchesForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchBranchesForGeneration (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                          const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                          const GGS_uint & in_mEndOfBranchLocationIndex,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesForGeneration (const GGS_switchBranchesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GGS_switchBranchesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchBranchesForGeneration (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchBranchesForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSwitchConstantList" ":") ;
  mObject.mProperty_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtractedAssociatedValuesForGeneration" ":") ;
  mObject.mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranchLocationIndex" ":") ;
  mObject.mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructions" ":") ;
  mObject.mProperty_mInstructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration::GGS_switchBranchesForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration::GGS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_switchBranchesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_switchBranchesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::enterElement (const GGS_switchBranchesForGeneration_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::class_func_listWithValue (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                           const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                           const GGS_uint & inOperand2,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand3
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_switchBranchesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_switchBranchesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                 const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                 const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (in_mSwitchConstantList,
                                                                 in_mExtractedAssociatedValuesForGeneration,
                                                                 in_mEndOfBranchLocationIndex,
                                                                 in_mInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::addAssign_operation (const GGS__5B_lstring_5D_ & inOperand0,
                                                           const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                           const GGS_uint & inOperand2,
                                                           const GGS_semanticInstructionListForGeneration & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_append (const GGS__5B_lstring_5D_ inOperand0,
                                                     const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                     const GGS_uint inOperand2,
                                                     const GGS_semanticInstructionListForGeneration inOperand3,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_insertAtIndex (const GGS__5B_lstring_5D_ inOperand0,
                                                            const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                            const GGS_uint inOperand2,
                                                            const GGS_semanticInstructionListForGeneration inOperand3,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_removeAtIndex (GGS__5B_lstring_5D_ & outOperand0,
                                                            GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                            GGS_uint & outOperand2,
                                                            GGS_semanticInstructionListForGeneration & outOperand3,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
      outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
      outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = p->mObject.mProperty_mInstructions ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_popFirst (GGS__5B_lstring_5D_ & outOperand0,
                                                       GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                       GGS_uint & outOperand2,
                                                       GGS_semanticInstructionListForGeneration & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_popLast (GGS__5B_lstring_5D_ & outOperand0,
                                                      GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                      GGS_uint & outOperand2,
                                                      GGS_semanticInstructionListForGeneration & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::method_first (GGS__5B_lstring_5D_ & outOperand0,
                                                    GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                    GGS_uint & outOperand2,
                                                    GGS_semanticInstructionListForGeneration & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::method_last (GGS__5B_lstring_5D_ & outOperand0,
                                                   GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                   GGS_uint & outOperand2,
                                                   GGS_semanticInstructionListForGeneration & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::add_operation (const GGS_switchBranchesForGeneration & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result = GGS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result = GGS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result = GGS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::plusAssign_operation (const GGS_switchBranchesForGeneration inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMSwitchConstantListAtIndex (GGS__5B_lstring_5D_ inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSwitchConstantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_switchBranchesForGeneration::getter_mSwitchConstantListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GGS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mSwitchConstantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GGS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_switchBranchesForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GGS_extractedAssociatedValuesForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GGS_uint inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchBranchesForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMInstructionsAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_switchBranchesForGeneration::getter_mInstructionsAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mInstructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchBranchesForGeneration::cEnumerator_switchBranchesForGeneration (const GGS_switchBranchesForGeneration & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element cEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ cEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration cEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_switchBranchesForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration cEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mInstructions ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ("switchBranchesForGeneration",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchBranchesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration result ;
  const GGS_switchBranchesForGeneration * p = (const GGS_switchBranchesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionForGeneration_2E_weak::objectCompare (const GGS_switchInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak & GGS_switchInstructionForGeneration_2E_weak::operator = (const GGS_switchInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (const GGS_switchInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration_2E_weak::bang_switchInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionForGeneration) ;
      result = GGS_switchInstructionForGeneration ((cPtr_switchInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ("switchInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  const GGS_switchInstructionForGeneration_2E_weak * p = (const GGS_switchInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionAST_2E_weak::objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak & GGS_typeMethodCallInstructionAST_2E_weak::operator = (const GGS_typeMethodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (const GGS_typeMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak GGS_typeMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST_2E_weak::bang_typeMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionAST) ;
      result = GGS_typeMethodCallInstructionAST ((cPtr_typeMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ("typeMethodCallInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeMethodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeMethodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak GGS_typeMethodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeMethodCallInstructionAST_2E_weak result ;
  const GGS_typeMethodCallInstructionAST_2E_weak * p = (const GGS_typeMethodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeMethodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_typeMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak & GGS_typeMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_typeMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (const GGS_typeMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration GGS_typeMethodCallInstructionForGeneration_2E_weak::bang_typeMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionForGeneration) ;
      result = GGS_typeMethodCallInstructionForGeneration ((cPtr_typeMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ("typeMethodCallInstructionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_typeMethodCallInstructionForGeneration_2E_weak * p = (const GGS_typeMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak & GGS_localVariableDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
      result = GGS_localVariableDeclarationWithAssignmentAST ((cPtr_localVariableDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationWithAssignmentAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ("localVariableDeclarationWithAssignmentAST.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationNoAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak & GGS_localVariableDeclarationNoAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationNoAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (const GGS_localVariableDeclarationNoAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
      result = GGS_localVariableDeclarationNoAssignmentAST ((cPtr_localVariableDeclarationNoAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationNoAssignmentAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ("localVariableDeclarationNoAssignmentAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationNoAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationNoAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationNoAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mVariableType.printNonNullClassInstanceProperties ("mVariableType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration::objectCompare (const GGS_localVariableDeclarationForGeneration & inOperand) const {
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

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationForGeneration_init_21__21_ (in_mVariableType, in_mCppVariableName, inCompiler) ;
  const GGS_localVariableDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::
localVariableDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                    const GGS_string & in_mCppVariableName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                                     const GGS_string & in_mCppVariableName
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (in_mVariableType, in_mCppVariableName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localVariableDeclarationForGeneration::readProperty_mVariableType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mVariableType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localVariableDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                        const GGS_string & in_mCppVariableName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableDeclarationForGeneration:") ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  const GGS_localVariableDeclarationForGeneration * p = (const GGS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration_2E_weak::objectCompare (const GGS_localVariableDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak & GGS_localVariableDeclarationForGeneration_2E_weak::operator = (const GGS_localVariableDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (const GGS_localVariableDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration_2E_weak::bang_localVariableDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationForGeneration) ;
      result = GGS_localVariableDeclarationForGeneration ((cPtr_localVariableDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ("localVariableDeclarationForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  const GGS_localVariableDeclarationForGeneration_2E_weak * p = (const GGS_localVariableDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST::objectCompare (const GGS_warningInstructionAST & inOperand) const {
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

GGS_warningInstructionAST::GGS_warningInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionAST & in_mLocationExpression,
                      const GGS_semanticExpressionAST & in_mMessageExpression,
                      const GGS_fixitListAST & in_mFixitListAST,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionAST (inCompiler COMMA_THERE)) ;
  object->warningInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST, inCompiler) ;
  const GGS_warningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::
warningInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_semanticExpressionAST & in_mLocationExpression,
                                            const GGS_semanticExpressionAST & in_mMessageExpression,
                                            const GGS_fixitListAST & in_mFixitListAST,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST::GGS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_semanticExpressionAST & in_mLocationExpression,
                                                                     const GGS_semanticExpressionAST & in_mMessageExpression,
                                                                     const GGS_fixitListAST & in_mFixitListAST
                                                                     COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_warningInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionAST & in_mLocationExpression,
                                                        const GGS_semanticExpressionAST & in_mMessageExpression,
                                                        const GGS_fixitListAST & in_mFixitListAST
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@warningInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST result ;
  const GGS_warningInstructionAST * p = (const GGS_warningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST_2E_weak::objectCompare (const GGS_warningInstructionAST_2E_weak & inOperand) const {
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

GGS_warningInstructionAST_2E_weak::GGS_warningInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak & GGS_warningInstructionAST_2E_weak::operator = (const GGS_warningInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak::GGS_warningInstructionAST_2E_weak (const GGS_warningInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak GGS_warningInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_warningInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST_2E_weak::bang_warningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionAST) ;
      result = GGS_warningInstructionAST ((cPtr_warningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ("warningInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak GGS_warningInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST_2E_weak result ;
  const GGS_warningInstructionAST_2E_weak * p = (const GGS_warningInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionForGeneration_2E_weak::objectCompare (const GGS_warningInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak & GGS_warningInstructionForGeneration_2E_weak::operator = (const GGS_warningInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (const GGS_warningInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration_2E_weak::bang_warningInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionForGeneration) ;
      result = GGS_warningInstructionForGeneration ((cPtr_warningInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ("warningInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  const GGS_warningInstructionForGeneration_2E_weak * p = (const GGS_warningInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readAccessWithInstructionAST_2E_weak::objectCompare (const GGS_readAccessWithInstructionAST_2E_weak & inOperand) const {
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

GGS_readAccessWithInstructionAST_2E_weak::GGS_readAccessWithInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak & GGS_readAccessWithInstructionAST_2E_weak::operator = (const GGS_readAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak::GGS_readAccessWithInstructionAST_2E_weak (const GGS_readAccessWithInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak GGS_readAccessWithInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readAccessWithInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST GGS_readAccessWithInstructionAST_2E_weak::bang_readAccessWithInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readAccessWithInstructionAST) ;
      result = GGS_readAccessWithInstructionAST ((cPtr_readAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readAccessWithInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2E_weak ("readAccessWithInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readAccessWithInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readAccessWithInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readAccessWithInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak GGS_readAccessWithInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_readAccessWithInstructionAST_2E_weak result ;
  const GGS_readAccessWithInstructionAST_2E_weak * p = (const GGS_readAccessWithInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readAccessWithInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readWriteAccessWithInstructionAST_2E_weak::objectCompare (const GGS_readWriteAccessWithInstructionAST_2E_weak & inOperand) const {
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

GGS_readWriteAccessWithInstructionAST_2E_weak::GGS_readWriteAccessWithInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak & GGS_readWriteAccessWithInstructionAST_2E_weak::operator = (const GGS_readWriteAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak::GGS_readWriteAccessWithInstructionAST_2E_weak (const GGS_readWriteAccessWithInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak GGS_readWriteAccessWithInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readWriteAccessWithInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST GGS_readWriteAccessWithInstructionAST_2E_weak::bang_readWriteAccessWithInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readWriteAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteAccessWithInstructionAST) ;
      result = GGS_readWriteAccessWithInstructionAST ((cPtr_readWriteAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readWriteAccessWithInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2E_weak ("readWriteAccessWithInstructionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readWriteAccessWithInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readWriteAccessWithInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readWriteAccessWithInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak GGS_readWriteAccessWithInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_readWriteAccessWithInstructionAST_2E_weak result ;
  const GGS_readWriteAccessWithInstructionAST_2E_weak * p = (const GGS_readWriteAccessWithInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readWriteAccessWithInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readOnlyWithInstructionForGeneration_2E_weak::objectCompare (const GGS_readOnlyWithInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_readOnlyWithInstructionForGeneration_2E_weak::GGS_readOnlyWithInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak & GGS_readOnlyWithInstructionForGeneration_2E_weak::operator = (const GGS_readOnlyWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak::GGS_readOnlyWithInstructionForGeneration_2E_weak (const GGS_readOnlyWithInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak GGS_readOnlyWithInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readOnlyWithInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration GGS_readOnlyWithInstructionForGeneration_2E_weak::bang_readOnlyWithInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readOnlyWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readOnlyWithInstructionForGeneration) ;
      result = GGS_readOnlyWithInstructionForGeneration ((cPtr_readOnlyWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readOnlyWithInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2E_weak ("readOnlyWithInstructionForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readOnlyWithInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readOnlyWithInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readOnlyWithInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak GGS_readOnlyWithInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_readOnlyWithInstructionForGeneration_2E_weak result ;
  const GGS_readOnlyWithInstructionForGeneration_2E_weak * p = (const GGS_readOnlyWithInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readOnlyWithInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readOnlyWithInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readWriteWithInstructionForGeneration_2E_weak::objectCompare (const GGS_readWriteWithInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_readWriteWithInstructionForGeneration_2E_weak::GGS_readWriteWithInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak & GGS_readWriteWithInstructionForGeneration_2E_weak::operator = (const GGS_readWriteWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak::GGS_readWriteWithInstructionForGeneration_2E_weak (const GGS_readWriteWithInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak GGS_readWriteWithInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readWriteWithInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration GGS_readWriteWithInstructionForGeneration_2E_weak::bang_readWriteWithInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readWriteWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteWithInstructionForGeneration) ;
      result = GGS_readWriteWithInstructionForGeneration ((cPtr_readWriteWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readWriteWithInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2E_weak ("readWriteWithInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readWriteWithInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readWriteWithInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readWriteWithInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak GGS_readWriteWithInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_readWriteWithInstructionForGeneration_2E_weak result ;
  const GGS_readWriteWithInstructionForGeneration_2E_weak * p = (const GGS_readWriteWithInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readWriteWithInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteWithInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction_2E_weak::objectCompare (const GGS_nonterminalCallInstruction_2E_weak & inOperand) const {
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

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak & GGS_nonterminalCallInstruction_2E_weak::operator = (const GGS_nonterminalCallInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (const GGS_nonterminalCallInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::bang_nonterminalCallInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalCallInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalCallInstruction) ;
      result = GGS_nonterminalCallInstruction ((cPtr_nonterminalCallInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalCallInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ("nonterminalCallInstruction.weak",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalCallInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalCallInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalCallInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  const GGS_nonterminalCallInstruction_2E_weak * p = (const GGS_nonterminalCallInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalCallInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration::objectCompare (const GGS_nonterminalInstructionForGeneration & inOperand) const {
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

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mNonterminalName,
                          const GGS_string & in_mLabelName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_nonterminalInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->nonterminalInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_nonterminalInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::
nonterminalInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mNonterminalName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_string & in_mNonterminalName,
                                                                                                 const GGS_string & in_mLabelName,
                                                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                 const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_nonterminalInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_nonterminalInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mNonterminalName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@nonterminalInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nonterminalInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @nonterminalInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration result ;
  const GGS_nonterminalInstructionForGeneration * p = (const GGS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration_2E_weak::objectCompare (const GGS_nonterminalInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak & GGS_nonterminalInstructionForGeneration_2E_weak::operator = (const GGS_nonterminalInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (const GGS_nonterminalInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::bang_nonterminalInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalInstructionForGeneration) ;
      result = GGS_nonterminalInstructionForGeneration ((cPtr_nonterminalInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ("nonterminalInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  const GGS_nonterminalInstructionForGeneration_2E_weak * p = (const GGS_nonterminalInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.printNonNullClassInstanceProperties ("mEndOf_repeated_instructions_branch") ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mEndOf_5F_repeat_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_repeat_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction::objectCompare (const GGS_repeatInstruction & inOperand) const {
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

GGS_repeatInstruction::GGS_repeatInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                          const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                          const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                          const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_repeatInstruction * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstruction (inCompiler COMMA_THERE)) ;
  object->repeatInstruction_init_21__21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction, inCompiler) ;
  const GGS_repeatInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::
repeatInstruction_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                            const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                            const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                            const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction::GGS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                             const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                             const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                             const GGS_location & in_mEndOf_5F_repeat_5F_instruction
                                                             COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeat_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeat_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GGS_location & in_mEndOf_5F_repeat_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstruction (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, mProperty_mRepeatBranchList, mProperty_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @repeatInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction result ;
  const GGS_repeatInstruction * p = (const GGS_repeatInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction_2E_weak::objectCompare (const GGS_repeatInstruction_2E_weak & inOperand) const {
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

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak & GGS_repeatInstruction_2E_weak::operator = (const GGS_repeatInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (const GGS_repeatInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::bang_repeatInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstruction) ;
      result = GGS_repeatInstruction ((cPtr_repeatInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @repeatInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ("repeatInstruction.weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  const GGS_repeatInstruction_2E_weak * p = (const GGS_repeatInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_m_5F_repeated_5F_instructionList.printNonNullClassInstanceProperties ("m_repeated_instructionList") ;
    mProperty_mEndOfRepeatedInstructions.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructions") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration::objectCompare (const GGS_repeatInstructionForGeneration & inOperand) const {
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

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_string & in_mSyntaxComponentName,
                              const GGS_uint & in_mChoiceIndex,
                              const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                              const GGS_location & in_mEndOfRepeatedInstructions,
                              const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGeneration_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_repeatInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::
repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_string & in_mSyntaxComponentName,
                                                             const GGS_uint & in_mChoiceIndex,
                                                             const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructions,
                                                             const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mChoiceIndex,
                                                                                       const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                                       const GGS_location & in_mEndOfRepeatedInstructions,
                                                                                       const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_repeatInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_m_5F_repeated_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_m_5F_repeated_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstructionForGeneration::readProperty_mEndOfRepeatedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mEndOfRepeatedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GGS_location & in_mEndOfRepeatedInstructions,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_m_5F_repeated_5F_instructionList, mProperty_mEndOfRepeatedInstructions, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration result ;
  const GGS_repeatInstructionForGeneration * p = (const GGS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration_2E_weak::objectCompare (const GGS_repeatInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak & GGS_repeatInstructionForGeneration_2E_weak::operator = (const GGS_repeatInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (const GGS_repeatInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::bang_repeatInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGeneration) ;
      result = GGS_repeatInstructionForGeneration ((cPtr_repeatInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ("repeatInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  const GGS_repeatInstructionForGeneration_2E_weak * p = (const GGS_repeatInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mEndOf_5F_select_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_select_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction::objectCompare (const GGS_selectInstruction & inOperand) const {
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

GGS_selectInstruction::GGS_selectInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                  const GGS_location & in_mEndOf_5F_select_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstruction * object = nullptr ;
  macroMyNew (object, cPtr_selectInstruction (inCompiler COMMA_THERE)) ;
  object->selectInstruction_init_21__21__21_ (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction, inCompiler) ;
  const GGS_selectInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::
selectInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                    const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                    const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction::GGS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                             const GGS_location & in_mEndOf_5F_select_5F_instruction
                                                             COMMA_LOCATION_ARGS) {
  GGS_selectInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstruction (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_selectInstruction::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_selectInstruction::readProperty_mEndOf_5F_select_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mEndOf_5F_select_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GGS_location & in_mEndOf_5F_select_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstruction (mProperty_mInstructionLocation, mProperty_mSelectBranchList, mProperty_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction result ;
  const GGS_selectInstruction * p = (const GGS_selectInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction_2E_weak::objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const {
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

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak & GGS_selectInstruction_2E_weak::operator = (const GGS_selectInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (const GGS_selectInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstruction) ;
      result = GGS_selectInstruction ((cPtr_selectInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ("selectInstruction.weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  const GGS_selectInstruction_2E_weak * p = (const GGS_selectInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration::objectCompare (const GGS_selectInstructionForGeneration & inOperand) const {
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

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSyntaxComponentName,
                      const GGS_uint & in_mChoiceIndex,
                      const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_selectInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::
selectInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_string & in_mSyntaxComponentName,
                                                     const GGS_uint & in_mChoiceIndex,
                                                     const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mChoiceIndex,
                                                                                       const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_selectInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration result ;
  const GGS_selectInstructionForGeneration * p = (const GGS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration_2E_weak::objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak & GGS_selectInstructionForGeneration_2E_weak::operator = (const GGS_selectInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (const GGS_selectInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGeneration) ;
      result = GGS_selectInstructionForGeneration ((cPtr_selectInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ("selectInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  const GGS_selectInstructionForGeneration_2E_weak * p = (const GGS_selectInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak & GGS_terminalCheckInstructionAST_2E_weak::operator = (const GGS_terminalCheckInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (const GGS_terminalCheckInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionAST) ;
      result = GGS_terminalCheckInstructionAST ((cPtr_terminalCheckInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  const GGS_terminalCheckInstructionAST_2E_weak * p = (const GGS_terminalCheckInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mStartLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mStartLocation.printNonNullClassInstanceProperties ("mStartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractSyntaxInstructionForGrammarAnalysis::readProperty_mStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    return p->mProperty_mStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mStartLocation () {
  mProperty_mStartLocation = in_mStartLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractSyntaxInstructionForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractSyntaxInstructionForGrammarAnalysis.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak & GGS_terminalCheckInstructionForGeneration_2E_weak::operator = (const GGS_terminalCheckInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (const GGS_terminalCheckInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionForGeneration) ;
      result = GGS_terminalCheckInstructionForGeneration ((cPtr_terminalCheckInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  const GGS_terminalCheckInstructionForGeneration_2E_weak * p = (const GGS_terminalCheckInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseLoopInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mWhileExpression (),
mProperty_mEndOfWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseLoopInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOfWhileExpression.printNonNullClassInstanceProperties ("mEndOfWhileExpression") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstruction::objectCompare (const GGS_parseLoopInstruction & inOperand) const {
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

GGS_parseLoopInstruction::GGS_parseLoopInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_semanticExpressionAST & in_mVariantExpression,
                                  const GGS_location & in_mEndOfVariantExpression,
                                  const GGS_semanticExpressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOfWhileExpression,
                                  const GGS_syntaxInstructionList & in_mDoInstructionList,
                                  const GGS_location & in_mEndOfInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_parseLoopInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseLoopInstruction (inCompiler COMMA_THERE)) ;
  object->parseLoopInstruction_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mWhileExpression, in_mEndOfWhileExpression, in_mDoInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_parseLoopInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::
parseLoopInstruction_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mVariantExpression,
                                                       const GGS_location & in_mEndOfVariantExpression,
                                                       const GGS_semanticExpressionAST & in_mWhileExpression,
                                                       const GGS_location & in_mEndOfWhileExpression,
                                                       const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                       const GGS_location & in_mEndOfInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOfWhileExpression = in_mEndOfWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction::GGS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                   const GGS_location & in_mEndOfVariantExpression,
                                                                   const GGS_semanticExpressionAST & in_mWhileExpression,
                                                                   const GGS_location & in_mEndOfWhileExpression,
                                                                   const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                                   const GGS_location & in_mEndOfInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseLoopInstruction (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mWhileExpression, in_mEndOfWhileExpression, in_mDoInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseLoopInstruction::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseLoopInstruction::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseLoopInstruction::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mVariantExpression,
                                                      const GGS_location & in_mEndOfVariantExpression,
                                                      const GGS_semanticExpressionAST & in_mWhileExpression,
                                                      const GGS_location & in_mEndOfWhileExpression,
                                                      const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                      const GGS_location & in_mEndOfInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mWhileExpression (),
mProperty_mEndOfWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOfWhileExpression = in_mEndOfWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

void cPtr_parseLoopInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@parseLoopInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseLoopInstruction (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mWhileExpression, mProperty_mEndOfWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction ("parseLoopInstruction",
                                                                            & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction result ;
  const GGS_parseLoopInstruction * p = (const GGS_parseLoopInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstruction_2E_weak::objectCompare (const GGS_parseLoopInstruction_2E_weak & inOperand) const {
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

GGS_parseLoopInstruction_2E_weak::GGS_parseLoopInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak & GGS_parseLoopInstruction_2E_weak::operator = (const GGS_parseLoopInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak::GGS_parseLoopInstruction_2E_weak (const GGS_parseLoopInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak GGS_parseLoopInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseLoopInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction_2E_weak::bang_parseLoopInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseLoopInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstruction) ;
      result = GGS_parseLoopInstruction ((cPtr_parseLoopInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction_2E_weak ("parseLoopInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak GGS_parseLoopInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction_2E_weak result ;
  const GGS_parseLoopInstruction_2E_weak * p = (const GGS_parseLoopInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstructionForGeneration_2E_weak::objectCompare (const GGS_parseLoopInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseLoopInstructionForGeneration_2E_weak::GGS_parseLoopInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak & GGS_parseLoopInstructionForGeneration_2E_weak::operator = (const GGS_parseLoopInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak::GGS_parseLoopInstructionForGeneration_2E_weak (const GGS_parseLoopInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak GGS_parseLoopInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseLoopInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration GGS_parseLoopInstructionForGeneration_2E_weak::bang_parseLoopInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseLoopInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstructionForGeneration) ;
      result = GGS_parseLoopInstructionForGeneration ((cPtr_parseLoopInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2E_weak ("parseLoopInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak GGS_parseLoopInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstructionForGeneration_2E_weak result ;
  const GGS_parseLoopInstructionForGeneration_2E_weak * p = (const GGS_parseLoopInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mParseRewindBranchList.printNonNullClassInstanceProperties ("mParseRewindBranchList") ;
    mProperty_mEndOfParseDoInstruction.printNonNullClassInstanceProperties ("mEndOfParseDoInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstruction::objectCompare (const GGS_parseRewindInstruction & inOperand) const {
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

GGS_parseRewindInstruction::GGS_parseRewindInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                  const GGS_location & in_mEndOfParseDoInstruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_parseRewindInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseRewindInstruction (inCompiler COMMA_THERE)) ;
  object->parseRewindInstruction_init_21__21__21_ (in_mInstructionLocation, in_mParseRewindBranchList, in_mEndOfParseDoInstruction, inCompiler) ;
  const GGS_parseRewindInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::
parseRewindInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                         const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                         const GGS_location & in_mEndOfParseDoInstruction,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction::GGS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                                       const GGS_location & in_mEndOfParseDoInstruction
                                                                       COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseRewindInstruction (in_mInstructionLocation, in_mParseRewindBranchList, in_mEndOfParseDoInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_parseRewindInstruction::readProperty_mParseRewindBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mParseRewindBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseRewindInstruction::readProperty_mEndOfParseDoInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mEndOfParseDoInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GGS_location & in_mInstructionLocation,
                                                          const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GGS_location & in_mEndOfParseDoInstruction
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@parseRewindInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mProperty_mInstructionLocation, mProperty_mParseRewindBranchList, mProperty_mEndOfParseDoInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction result ;
  const GGS_parseRewindInstruction * p = (const GGS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstruction_2E_weak::objectCompare (const GGS_parseRewindInstruction_2E_weak & inOperand) const {
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

GGS_parseRewindInstruction_2E_weak::GGS_parseRewindInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak & GGS_parseRewindInstruction_2E_weak::operator = (const GGS_parseRewindInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak::GGS_parseRewindInstruction_2E_weak (const GGS_parseRewindInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak GGS_parseRewindInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseRewindInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction_2E_weak::bang_parseRewindInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseRewindInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstruction) ;
      result = GGS_parseRewindInstruction ((cPtr_parseRewindInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction_2E_weak ("parseRewindInstruction.weak",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak GGS_parseRewindInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction_2E_weak result ;
  const GGS_parseRewindInstruction_2E_weak * p = (const GGS_parseRewindInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstructionForGeneration::objectCompare (const GGS_parseRewindInstructionForGeneration & inOperand) const {
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

GGS_parseRewindInstructionForGeneration::GGS_parseRewindInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_parseRewindInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_parseRewindInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->parseRewindInstructionForGeneration_init_21__21_ (in_mInstructionLocation, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_parseRewindInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::
parseRewindInstructionForGeneration_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration::GGS_parseRewindInstructionForGeneration (const cPtr_parseRewindInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_parseRewindInstructionForGeneration (in_mInstructionLocation, in_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_parseRewindInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_parseRewindInstructionForGeneration * p = (cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

void cPtr_parseRewindInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@parseRewindInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ("parseRewindInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration result ;
  const GGS_parseRewindInstructionForGeneration * p = (const GGS_parseRewindInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstructionForGeneration_2E_weak::objectCompare (const GGS_parseRewindInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseRewindInstructionForGeneration_2E_weak::GGS_parseRewindInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak & GGS_parseRewindInstructionForGeneration_2E_weak::operator = (const GGS_parseRewindInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak::GGS_parseRewindInstructionForGeneration_2E_weak (const GGS_parseRewindInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak GGS_parseRewindInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration_2E_weak::bang_parseRewindInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseRewindInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstructionForGeneration) ;
      result = GGS_parseRewindInstructionForGeneration ((cPtr_parseRewindInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2E_weak ("parseRewindInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak GGS_parseRewindInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration_2E_weak result ;
  const GGS_parseRewindInstructionForGeneration_2E_weak * p = (const GGS_parseRewindInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseWhenInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseWhenInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWhenExpression.printNonNullClassInstanceProperties ("mWhenExpression") ;
    mProperty_mEndOfWhenExpression.printNonNullClassInstanceProperties ("mEndOfWhenExpression") ;
    mProperty_mWhenInstructionList.printNonNullClassInstanceProperties ("mWhenInstructionList") ;
    mProperty_mEndOfWhenInstructionList.printNonNullClassInstanceProperties ("mEndOfWhenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstruction::objectCompare (const GGS_parseWhenInstruction & inOperand) const {
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

GGS_parseWhenInstruction::GGS_parseWhenInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_semanticExpressionAST & in_mWhenExpression,
                                  const GGS_location & in_mEndOfWhenExpression,
                                  const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                  const GGS_location & in_mEndOfWhenInstructionList,
                                  const GGS_syntaxInstructionList & in_mElseInstructionList,
                                  const GGS_location & in_mEndOfElseInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_parseWhenInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseWhenInstruction (inCompiler COMMA_THERE)) ;
  object->parseWhenInstruction_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mWhenExpression, in_mEndOfWhenExpression, in_mWhenInstructionList, in_mEndOfWhenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, inCompiler) ;
  const GGS_parseWhenInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::
parseWhenInstruction_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mWhenExpression,
                                                       const GGS_location & in_mEndOfWhenExpression,
                                                       const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                       const GGS_location & in_mEndOfWhenInstructionList,
                                                       const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                       const GGS_location & in_mEndOfElseInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction::GGS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mWhenExpression,
                                                                   const GGS_location & in_mEndOfWhenExpression,
                                                                   const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                                   const GGS_location & in_mEndOfWhenInstructionList,
                                                                   const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                                   const GGS_location & in_mEndOfElseInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseWhenInstruction (in_mInstructionLocation, in_mWhenExpression, in_mEndOfWhenExpression, in_mWhenInstructionList, in_mEndOfWhenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseWhenInstruction::readProperty_mWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mWhenExpression,
                                                      const GGS_location & in_mEndOfWhenExpression,
                                                      const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GGS_location & in_mEndOfWhenInstructionList,
                                                      const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GGS_location & in_mEndOfElseInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@parseWhenInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mEndOfWhenExpression, mProperty_mWhenInstructionList, mProperty_mEndOfWhenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                                                            & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction result ;
  const GGS_parseWhenInstruction * p = (const GGS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstruction_2E_weak::objectCompare (const GGS_parseWhenInstruction_2E_weak & inOperand) const {
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

GGS_parseWhenInstruction_2E_weak::GGS_parseWhenInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak & GGS_parseWhenInstruction_2E_weak::operator = (const GGS_parseWhenInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak::GGS_parseWhenInstruction_2E_weak (const GGS_parseWhenInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak GGS_parseWhenInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseWhenInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction_2E_weak::bang_parseWhenInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseWhenInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstruction) ;
      result = GGS_parseWhenInstruction ((cPtr_parseWhenInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction_2E_weak ("parseWhenInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak GGS_parseWhenInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction_2E_weak result ;
  const GGS_parseWhenInstruction_2E_weak * p = (const GGS_parseWhenInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstructionForGeneration_2E_weak::objectCompare (const GGS_parseWhenInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseWhenInstructionForGeneration_2E_weak::GGS_parseWhenInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak & GGS_parseWhenInstructionForGeneration_2E_weak::operator = (const GGS_parseWhenInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak::GGS_parseWhenInstructionForGeneration_2E_weak (const GGS_parseWhenInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak GGS_parseWhenInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseWhenInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration GGS_parseWhenInstructionForGeneration_2E_weak::bang_parseWhenInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseWhenInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstructionForGeneration) ;
      result = GGS_parseWhenInstructionForGeneration ((cPtr_parseWhenInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2E_weak ("parseWhenInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak GGS_parseWhenInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstructionForGeneration_2E_weak result ;
  const GGS_parseWhenInstructionForGeneration_2E_weak * p = (const GGS_parseWhenInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST::objectCompare (const GGS_syntaxSendInstructionAST & inOperand) const {
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

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syntaxSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syntaxSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->syntaxSendInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_syntaxSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::
syntaxSendInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_semanticExpressionAST & in_mExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (const cPtr_syntaxSendInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_semanticExpressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_syntaxSendInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_syntaxSendInstructionAST * p = (cPtr_syntaxSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_semanticExpressionAST & in_mExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

void cPtr_syntaxSendInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxSendInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ("syntaxSendInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  const GGS_syntaxSendInstructionAST * p = (const GGS_syntaxSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST_2E_weak::objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak & GGS_syntaxSendInstructionAST_2E_weak::operator = (const GGS_syntaxSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (const GGS_syntaxSendInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionAST) ;
      result = GGS_syntaxSendInstructionAST ((cPtr_syntaxSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstructionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ("syntaxSendInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  const GGS_syntaxSendInstructionAST_2E_weak * p = (const GGS_syntaxSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak & GGS_syntaxSendInstructionForGeneration_2E_weak::operator = (const GGS_syntaxSendInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (const GGS_syntaxSendInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionForGeneration) ;
      result = GGS_syntaxSendInstructionForGeneration ((cPtr_syntaxSendInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstructionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ("syntaxSendInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  const GGS_syntaxSendInstructionForGeneration_2E_weak * p = (const GGS_syntaxSendInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument_inPosfix */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (cPtr_semanticInstructionForGeneration * inObject,
                                                const GGS_string constin_inPosfix,
                                                GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_appendSyntaxSignature  (constin_inPosfix, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration /* constinArgument_inTestedInstruction */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                const GGS_semanticInstructionForGeneration in_inTestedInstruction,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_compareInstructionSyntaxSignature (in_inTestedInstruction, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxInstructionListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxInstructionListForGrammarAnalysis : public cCollectionElement {
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxInstructionListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxInstructionListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxInstructionListForGrammarAnalysis (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxInstructionListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::enterElement (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inValue,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::class_func_listWithValue (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::addAssign_operation (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_append (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popFirst (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popLast (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::method_first (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::method_last (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::plusAssign_operation (const GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_setMInstructionAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxInstructionListForGrammarAnalysis::cEnumerator_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element cEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis cEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  const GGS_syntaxInstructionListForGrammarAnalysis * p = (const GGS_syntaxInstructionListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@productionRuleListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_productionRuleListForGrammarAnalysis : public cCollectionElement {
  public: GGS_productionRuleListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                   const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                   const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                   const GGS_uint & in_mProductionIndex
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                  const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                  const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                  const GGS_uint & in_mProductionIndex
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeftNonterminalSymbol, inElement.mProperty_mLeftNonterminalSymbolIndex, inElement.mProperty_mInstructionList, inElement.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_productionRuleListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_productionRuleListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_productionRuleListForGrammarAnalysis (mObject.mProperty_mLeftNonterminalSymbol, mObject.mProperty_mLeftNonterminalSymbolIndex, mObject.mProperty_mInstructionList, mObject.mProperty_mProductionIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_productionRuleListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeftNonterminalSymbol" ":") ;
  mObject.mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeftNonterminalSymbolIndex" ":") ;
  mObject.mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductionIndex" ":") ;
  mObject.mProperty_mProductionIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::enterElement (const GGS_productionRuleListForGrammarAnalysis_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                             const GGS_uint & inOperand1,
                                                                                                             const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                             const GGS_uint & inOperand3
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                          const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                          const GGS_uint & in_mProductionIndex
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (in_mLeftNonterminalSymbol,
                                                                          in_mLeftNonterminalSymbolIndex,
                                                                          in_mInstructionList,
                                                                          in_mProductionIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::addAssign_operation (const GGS_lstring & inOperand0,
                                                                    const GGS_uint & inOperand1,
                                                                    const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                    const GGS_uint & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_append (const GGS_lstring inOperand0,
                                                              const GGS_uint inOperand1,
                                                              const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                              const GGS_uint inOperand3,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                     const GGS_uint inOperand1,
                                                                     const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                     const GGS_uint inOperand3,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                     GGS_uint & outOperand1,
                                                                     GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                     GGS_uint & outOperand3,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
      outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mProductionIndex ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_popFirst (GGS_lstring & outOperand0,
                                                                GGS_uint & outOperand1,
                                                                GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                GGS_uint & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_popLast (GGS_lstring & outOperand0,
                                                               GGS_uint & outOperand1,
                                                               GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                               GGS_uint & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::method_first (GGS_lstring & outOperand0,
                                                             GGS_uint & outOperand1,
                                                             GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                             GGS_uint & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::method_last (GGS_lstring & outOperand0,
                                                            GGS_uint & outOperand1,
                                                            GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                            GGS_uint & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::plusAssign_operation (const GGS_productionRuleListForGrammarAnalysis inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbol = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbol ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolIndexAtIndex (GGS_uint inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbolIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMProductionIndexAtIndex (GGS_uint inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductionIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_productionRuleListForGrammarAnalysis::cEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element cEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis cEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionIndex ;
}




//--------------------------------------------------------------------------------------------------
//
//     @productionRuleListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_productionRuleListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_productionRuleListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis result ;
  const GGS_productionRuleListForGrammarAnalysis * p = (const GGS_productionRuleListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_productionRuleListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

