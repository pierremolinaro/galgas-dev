#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendPrimitiveTypeDeclaration (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & /* ioArgument_ioHeader */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (cPtr_semanticDeclarationForGeneration * inObject,
                                                            GGS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendPrimitiveTypePreDeclaration (io_ioHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_getImplementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_getImplementationCppFileName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasCppHeaderFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isPredefined (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind callExtensionGetter_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_headerKind result ;
  if (nullptr != inObject) {
    result = inObject->getter_headerKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticDeclarationListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListForGeneration : public cCollectionElement {
  public: GGS_semanticDeclarationListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                   const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_string & in_infoMessage,
                                                                                                                  const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_infoMessage, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_infoMessage, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListForGeneration (mObject.mProperty_infoMessage, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("infoMessage" ":") ;
  mObject.mProperty_infoMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration::GGS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::enterElement (const GGS_semanticDeclarationListForGeneration_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_semanticDeclarationForGeneration & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_infoMessage,
                                                                          const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (in_infoMessage,
                                                                          in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                    const GGS_semanticDeclarationForGeneration & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_semanticDeclarationForGeneration inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_semanticDeclarationForGeneration inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_semanticDeclarationForGeneration & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
      outOperand0 = p->mObject.mProperty_infoMessage ;
      outOperand1 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_semanticDeclarationForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_semanticDeclarationForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_semanticDeclarationForGeneration & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_semanticDeclarationForGeneration & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::add_operation (const GGS_semanticDeclarationListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationListForGeneration result = GGS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::plusAssign_operation (const GGS_semanticDeclarationListForGeneration inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setInfoMessageAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_infoMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_semanticDeclarationListForGeneration::getter_infoMessageAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_infoMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticDeclarationListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration GGS_semanticDeclarationListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GGS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @semanticDeclarationListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticDeclarationListForGeneration::DownEnumerator_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element DownEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration DownEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticDeclarationListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticDeclarationListForGeneration::UpEnumerator_semanticDeclarationListForGeneration (const GGS_semanticDeclarationListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration_2E_element UpEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration UpEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ("semanticDeclarationListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListForGeneration GGS_semanticDeclarationListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationListForGeneration result ;
  const GGS_semanticDeclarationListForGeneration * p = (const GGS_semanticDeclarationListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@signatureForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_signatureForGrammarAnalysis : public cCollectionElement {
  public: GGS_signatureForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                          const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingModeForGrammarAnalysis, in_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, inElement.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_signatureForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_signatureForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_signatureForGrammarAnalysis (mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, mObject.mProperty_mGalgasTypeNameForGrammarAnalysis COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_signatureForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingModeForGrammarAnalysis" ":") ;
  mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGalgasTypeNameForGrammarAnalysis" ":") ;
  mObject.mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis::GGS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::enterElement (const GGS_signatureForGrammarAnalysis_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::class_func_listWithValue (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                           const GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 in_mGalgasTypeNameForGrammarAnalysis COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::addAssign_operation (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                           const GGS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_append (const GGS_formalArgumentPassingModeAST inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_insertAtIndex (const GGS_formalArgumentPassingModeAST inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_removeAtIndex (GGS_formalArgumentPassingModeAST & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
      outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popFirst (GGS_formalArgumentPassingModeAST & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_popLast (GGS_formalArgumentPassingModeAST & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_first (GGS_formalArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::method_last (GGS_formalArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::add_operation (const GGS_signatureForGrammarAnalysis & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result = GGS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::plusAssign_operation (const GGS_signatureForGrammarAnalysis inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                                     GGS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_signatureForGrammarAnalysis::getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis::setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_signatureForGrammarAnalysis::getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @signatureForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_signatureForGrammarAnalysis::DownEnumerator_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element DownEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST DownEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @signatureForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_signatureForGrammarAnalysis::UpEnumerator_signatureForGrammarAnalysis (const GGS_signatureForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element UpEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST UpEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}




//--------------------------------------------------------------------------------------------------
//     @signatureForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ("signatureForGrammarAnalysis",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_signatureForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_signatureForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_signatureForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_signatureForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis result ;
  const GGS_signatureForGrammarAnalysis * p = (const GGS_signatureForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_signatureForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inValue
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalParametersList (inValue.mProperty_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                                  const GGS_signatureForGrammarAnalysis & in_mFormalParametersList
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParametersList (in_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (mProperty_lkey, mProperty_mFormalParametersList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParametersList" ":") ;
  mProperty_mFormalParametersList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis::GGS_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis & GGS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalParametersList = p->mProperty_mFormalParametersList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::enterElement (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                           const GGS_signatureForGrammarAnalysis & inArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::add_operation (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result = *this ;
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParametersList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                        GGS_signatureForGrammarAnalysis inArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey = "the rule label '%K' is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GGS_lstring inKey,
                                                                        GGS_signatureForGrammarAnalysis & outArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                                       inCompiler,
                                                                                                                                                       kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey
                                                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mFormalParametersList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GGS_string & inKey,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  GGS_signatureForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    result = p->mProperty_mFormalParametersList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GGS_signatureForGrammarAnalysis inAttributeValue,
                                                                                             GGS_string inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    p->mProperty_mFormalParametersList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                              const GGS_string & inKey
                                                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * result = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mFormalParametersList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return p->mProperty_mFormalParametersList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalSymbolLabelMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mFormalParametersList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return p->mProperty_mFormalParametersList ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalSymbolLabelMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalSymbolLabelMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalSymbolLabelMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalSymbolLabelMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mNonTerminalIndex (inValue.mProperty_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (inValue.mProperty_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                        const GGS_uint & in_mNonTerminalIndex,
                                                                                                        const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mNonTerminalIndex (in_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (in_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (mProperty_lkey, mProperty_mNonTerminalIndex, mProperty_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonTerminalSymbolMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalIndex" ":") ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalSymbolParametersMap" ":") ;
  mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis::GGS_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis & GGS_nonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_nonTerminalSymbolMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = p->mProperty_mNonTerminalIndex ;
      element.mProperty_mNonterminalSymbolParametersMap = p->mProperty_mNonterminalSymbolParametersMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::enterElement (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GGS_lstring & inKey,
                                                                      const GGS_uint & inArgument0,
                                                                      const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::add_operation (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result = *this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mNonTerminalIndex (HERE), enumerator.current_mNonterminalSymbolParametersMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                   GGS_uint inArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey = "the '<%K>' non terminal symbol is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::method_searchKey (GGS_lstring inKey,
                                                                   GGS_uint & outArgument0,
                                                                   GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
    outArgument1 = p->mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonterminalSymbolParametersMapForKey (const GGS_string & inKey,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonterminalSymbolParametersMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inAttributeValue,
                                                                                    GGS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonTerminalIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonterminalSymbolParametersMapForKey (GGS_nonterminalSymbolLabelMapForGrammarAnalysis inAttributeValue,
                                                                                                  GGS_string inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonterminalSymbolParametersMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis * GGS_nonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                    const GGS_string & inKey
                                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex, p->mProperty_mNonterminalSymbolParametersMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis DownEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GGS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex, p->mProperty_mNonterminalSymbolParametersMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonterminalSymbolParametersMap ;
}


//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ("nonTerminalSymbolMapForGrammarAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_nonTerminalSymbolMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis result ;
  const GGS_nonTerminalSymbolMapForGrammarAnalysis * p = (const GGS_nonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalToAddList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonTerminalToAddList : public cCollectionElement {
  public: GGS_nonTerminalToAddList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                   const GGS_uint & in_mNonTerminalToAddCount
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_string & in_mSyntaxComponentName,
                                                                                  const GGS_uint & in_mNonTerminalToAddCount
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GGS_nonTerminalToAddList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonTerminalToAddList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonTerminalToAddList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonTerminalToAddList (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonTerminalToAddCount COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonTerminalToAddList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalToAddCount" ":") ;
  mObject.mProperty_mNonTerminalToAddCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList::GGS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::enterElement (const GGS_nonTerminalToAddList_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                             const GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_nonTerminalToAddList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_nonTerminalToAddList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_string & in_mSyntaxComponentName,
                                                          const GGS_uint & in_mNonTerminalToAddCount
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (in_mSyntaxComponentName,
                                                          in_mNonTerminalToAddCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::addAssign_operation (const GGS_string & inOperand0,
                                                    const GGS_uint & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_append (const GGS_string inOperand0,
                                              const GGS_uint inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_insertAtIndex (const GGS_string inOperand0,
                                                     const GGS_uint inOperand1,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_removeAtIndex (GGS_string & outOperand0,
                                                     GGS_uint & outOperand1,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
      outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
      outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popFirst (GGS_string & outOperand0,
                                                GGS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_popLast (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_first (GGS_string & outOperand0,
                                             GGS_uint & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::method_last (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::add_operation (const GGS_nonTerminalToAddList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalToAddList result = GGS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::plusAssign_operation (const GGS_nonTerminalToAddList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMSyntaxComponentNameAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonTerminalToAddList::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList::setter_setMNonTerminalToAddCountAtIndex (GGS_uint inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonTerminalToAddCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalToAddList::getter_mNonTerminalToAddCountAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalToAddList
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalToAddList::DownEnumerator_nonTerminalToAddList (const GGS_nonTerminalToAddList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element DownEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalToAddList
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalToAddList::UpEnumerator_nonTerminalToAddList (const GGS_nonTerminalToAddList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element UpEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}




//--------------------------------------------------------------------------------------------------
//     @nonTerminalToAddList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ("nonTerminalToAddList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalToAddList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalToAddList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalToAddList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList GGS_nonTerminalToAddList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonTerminalToAddList result ;
  const GGS_nonTerminalToAddList * p = (const GGS_nonTerminalToAddList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalToAddList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalCheckAssignementList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalCheckAssignementList : public cCollectionElement {
  public: GGS_terminalCheckAssignementList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                           const GGS_string & in_mTargetVarCppName,
                                                           const GGS_string & in_mSourceLexicalAttributeName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_string & in_mTypeName,
                                                                                                  const GGS_string & in_mTargetVarCppName,
                                                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GGS_terminalCheckAssignementList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mTargetVarCppName, inElement.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalCheckAssignementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalCheckAssignementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalCheckAssignementList (mObject.mProperty_mTypeName, mObject.mProperty_mTargetVarCppName, mObject.mProperty_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalCheckAssignementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetVarCppName" ":") ;
  mObject.mProperty_mTargetVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceLexicalAttributeName" ":") ;
  mObject.mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList::GGS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::enterElement (const GGS_terminalCheckAssignementList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                             const GGS_string & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_terminalCheckAssignementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalCheckAssignementList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_string & in_mTypeName,
                                                                  const GGS_string & in_mTargetVarCppName,
                                                                  const GGS_string & in_mSourceLexicalAttributeName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (in_mTypeName,
                                                                  in_mTargetVarCppName,
                                                                  in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::addAssign_operation (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_append (const GGS_string inOperand0,
                                                      const GGS_string inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_insertAtIndex (const GGS_string inOperand0,
                                                             const GGS_string inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_removeAtIndex (GGS_string & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
      outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popFirst (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_popLast (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_first (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::method_last (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::add_operation (const GGS_terminalCheckAssignementList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckAssignementList result = GGS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::plusAssign_operation (const GGS_terminalCheckAssignementList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMTargetVarCppNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mTargetVarCppNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTargetVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignementList::setter_setMSourceLexicalAttributeNameAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceLexicalAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckAssignementList::getter_mSourceLexicalAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalCheckAssignementList::DownEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element DownEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalCheckAssignementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalCheckAssignementList::UpEnumerator_terminalCheckAssignementList (const GGS_terminalCheckAssignementList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList_2E_element UpEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignementList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckAssignementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckAssignementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckAssignementList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalCheckAssignementList result ;
  const GGS_terminalCheckAssignementList * p = (const GGS_terminalCheckAssignementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckAssignementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration::objectCompare (const GGS_syntaxInstructionForGeneration & inOperand) const {
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

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration::GGS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_syntaxInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration result ;
  const GGS_syntaxInstructionForGeneration * p = (const GGS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak & GGS_syntaxInstructionForGeneration_2E_weak::operator = (const GGS_syntaxInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak::GGS_syntaxInstructionForGeneration_2E_weak (const GGS_syntaxInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration GGS_syntaxInstructionForGeneration_2E_weak::bang_syntaxInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionForGeneration) ;
      result = GGS_syntaxInstructionForGeneration ((cPtr_syntaxInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ("syntaxInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionForGeneration_2E_weak GGS_syntaxInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionForGeneration_2E_weak result ;
  const GGS_syntaxInstructionForGeneration_2E_weak * p = (const GGS_syntaxInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@filewrapperTemplateListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListForGeneration : public cCollectionElement {
  public: GGS_filewrapperTemplateListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                   const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                   const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                  const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                  const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplateFormalInputParameters, inElement.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListForGeneration (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplateFormalInputParameters, mObject.mProperty_mTemplateInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateName" ":") ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateFormalInputParameters" ":") ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateInstructionListForGeneration" ":") ;
  mObject.mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration::GGS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::enterElement (const GGS_filewrapperTemplateListForGeneration_2E_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                             const GGS_templateInstructionListForGeneration & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mFilewrapperTemplateName,
                                                                          const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                          const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (in_mFilewrapperTemplateName,
                                                                          in_mFilewrapperTemplateFormalInputParameters,
                                                                          in_mTemplateInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                    const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                    const GGS_templateInstructionListForGeneration & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_append (const GGS_string inOperand0,
                                                              const GGS_formalInputParameterListForGeneration inOperand1,
                                                              const GGS_templateInstructionListForGeneration inOperand2,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS_formalInputParameterListForGeneration inOperand1,
                                                                     const GGS_templateInstructionListForGeneration inOperand2,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS_formalInputParameterListForGeneration & outOperand1,
                                                                     GGS_templateInstructionListForGeneration & outOperand2,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
      outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
      outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                GGS_formalInputParameterListForGeneration & outOperand1,
                                                                GGS_templateInstructionListForGeneration & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                               GGS_formalInputParameterListForGeneration & outOperand1,
                                                               GGS_templateInstructionListForGeneration & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_first (GGS_string & outOperand0,
                                                             GGS_formalInputParameterListForGeneration & outOperand1,
                                                             GGS_templateInstructionListForGeneration & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::method_last (GGS_string & outOperand0,
                                                            GGS_formalInputParameterListForGeneration & outOperand1,
                                                            GGS_templateInstructionListForGeneration & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::add_operation (const GGS_filewrapperTemplateListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateListForGeneration result = GGS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::plusAssign_operation (const GGS_filewrapperTemplateListForGeneration inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GGS_formalInputParameterListForGeneration inOperand,
                                                                                                           GGS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_formalInputParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration::setter_setMTemplateInstructionListForGenerationAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                                       GGS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTemplateInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_filewrapperTemplateListForGeneration::getter_mTemplateInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @filewrapperTemplateListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_filewrapperTemplateListForGeneration::DownEnumerator_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element DownEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration DownEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration DownEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @filewrapperTemplateListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_filewrapperTemplateListForGeneration::UpEnumerator_filewrapperTemplateListForGeneration (const GGS_filewrapperTemplateListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element UpEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration UpEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration UpEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ("filewrapperTemplateListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_filewrapperTemplateListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperTemplateListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration result ;
  const GGS_filewrapperTemplateListForGeneration * p = (const GGS_filewrapperTemplateListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_31_ (io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GGS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                const GGS_string constin_inOutputDirectory,
                                                GGS_stringset & io_ioInclusionSet,
                                                GGS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_32_ (constin_inOutputDirectory, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationForGeneration::getter_appendTypeGenericImplementation (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outImplementation ; // Returned variable
  result_outImplementation = GGS_string::makeEmptyString () ;
//---
  return result_outImplementation ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendTypeGenericImplementation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_string & outArgument_outImplementation,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (cPtr_semanticDeclarationForGeneration * inObject,
                                                       const GGS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GGS_stringset & io_ioInclusionSet,
                                                       GGS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  out_outImplementation.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificImplementation (constin_inUnifiedTypeMap, io_ioInclusionSet, out_outImplementation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificFiles (const GGS_string /* constinArgument_inProductDirectory */,
                                                                        GGS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                        GGS_stringlist & /* ioArgument_ioObjcAppProductFileList */,
                                                                        GGS_stringlist & /* ioArgument_ioSwiftAppProductFileList */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (cPtr_semanticDeclarationForGeneration * inObject,
                                              const GGS_string constin_inProductDirectory,
                                              GGS_stringset & io_ioAllProductFileSet,
                                              GGS_stringlist & io_ioObjcAppProductFileList,
                                              GGS_stringlist & io_ioSwiftAppProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificFiles (constin_inProductDirectory, io_ioAllProductFileSet, io_ioObjcAppProductFileList, io_ioSwiftAppProductFileList, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localConstantList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localConstantList : public cCollectionElement {
  public: GGS_localConstantList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                const GGS_lstring & in_mName,
                                                const GGS_bool & in_mNoWarningIfUnused,
                                                const GGS_string & in_mCppName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_lstring & in_mName,
                                                                            const GGS_bool & in_mNoWarningIfUnused,
                                                                            const GGS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GGS_localConstantList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mNoWarningIfUnused, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mNoWarningIfUnused, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNoWarningIfUnused" ":") ;
  mObject.mProperty_mNoWarningIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList::GGS_localConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::enterElement (const GGS_localConstantList_2E_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                       const GGS_lstring & inOperand1,
                                                                       const GGS_bool & inOperand2,
                                                                       const GGS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_localConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_unifiedTypeMapEntry & in_mType,
                                                       const GGS_lstring & in_mName,
                                                       const GGS_bool & in_mNoWarningIfUnused,
                                                       const GGS_string & in_mCppName
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType,
                                                       in_mName,
                                                       in_mNoWarningIfUnused,
                                                       in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                 const GGS_lstring & inOperand1,
                                                 const GGS_bool & inOperand2,
                                                 const GGS_string & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                           const GGS_lstring inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_string inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_string inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  GGS_string & outOperand3,
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
    cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localConstantList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
      outOperand3 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_bool & outOperand2,
                                             GGS_string & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_bool & outOperand2,
                                            GGS_string & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                          GGS_lstring & outOperand1,
                                          GGS_bool & outOperand2,
                                          GGS_string & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                         GGS_lstring & outOperand1,
                                         GGS_bool & outOperand2,
                                         GGS_string & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::add_operation (const GGS_localConstantList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_localConstantList result = GGS_localConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::plusAssign_operation (const GGS_localConstantList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localConstantList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localConstantList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMNoWarningIfUnusedAtIndex (GGS_bool inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNoWarningIfUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localConstantList::getter_mNoWarningIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mNoWarningIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localConstantList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localConstantList::DownEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element DownEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localConstantList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localConstantList::UpEnumerator_localConstantList (const GGS_localConstantList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element UpEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localConstantList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList GGS_localConstantList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantList result ;
  const GGS_localConstantList * p = (const GGS_localConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localInitializedVariableList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public: GGS_localInitializedVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                           const GGS_lstring & in_mName,
                                                           const GGS_string & in_mCppName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                  const GGS_lstring & in_mName,
                                                                                                  const GGS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GGS_localInitializedVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localInitializedVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList::GGS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::enterElement (const GGS_localInitializedVariableList_2E_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_string & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_localInitializedVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_localInitializedVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_unifiedTypeMapEntry & in_mType,
                                                                  const GGS_lstring & in_mName,
                                                                  const GGS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType,
                                                                  in_mName,
                                                                  in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::addAssign_operation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                            const GGS_lstring & inOperand1,
                                                            const GGS_string & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_string inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_string inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_string & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mName ;
      outOperand2 = p->mObject.mProperty_mCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_string & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::add_operation (const GGS_localInitializedVariableList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_localInitializedVariableList result = GGS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::plusAssign_operation (const GGS_localInitializedVariableList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localInitializedVariableList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localInitializedVariableList::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localInitializedVariableList::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

DownEnumerator_localInitializedVariableList::DownEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element DownEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @localInitializedVariableList
//--------------------------------------------------------------------------------------------------

UpEnumerator_localInitializedVariableList::UpEnumerator_localInitializedVariableList (const GGS_localInitializedVariableList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element UpEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @localInitializedVariableList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList GGS_localInitializedVariableList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList result ;
  const GGS_localInitializedVariableList * p = (const GGS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (cPtr_semanticDeclarationAST * inObject,
                                                  GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GGS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInGraph (io_ioSemanticTypePrecedenceGraph, io_ioEquatableExtensionMap, io_ioExtensionInitializerForBuildingContext, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (cPtr_semanticDeclarationAST * inObject,
                                                            GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                            const GGS_extensionInitializerForBuildingContext constin_inExtensionInitializerMapForBuildingContext,
                                                            const GGS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                            const GGS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                            const GGS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            GGS_semanticContext & io_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInSemanticContext (io_ioEquatableExtensionMap, constin_inExtensionInitializerMapForBuildingContext, constin_inExtensionMethodMapForBuildingContext, constin_inExtensionGetterMapForBuildingContext, constin_inExtensionSetterMapForBuildingContext, io_ioTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GGS_lstringlist & io_ioUsefulnessRootEntities,
                                           GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GGS_string constin_inProductDirectory,
                                           const GGS_semanticContext constin_inSemanticContext,
                                           GGS_unifiedTypeMap & io_ioTypeMap,
                                           const GGS_predefinedTypes constin_inPredefinedTypes,
                                           GGS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin_inSemanticContext, io_ioTypeMap, constin_inPredefinedTypes, io_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap::cMapElement_propertyIndexMap (const GGS_propertyIndexMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mPropertyTypeIndex (inValue.mProperty_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap::cMapElement_propertyIndexMap (const GGS_lstring & inKey,
                                                            const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mPropertyTypeIndex (in_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyIndexMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyIndexMap (mProperty_lkey, mProperty_mPropertyTypeIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyIndexMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeIndex" ":") ;
  mProperty_mPropertyTypeIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap & GGS_propertyIndexMap::operator = (const GGS_propertyIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertyIndexMap * p = (cMapElement_propertyIndexMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertyIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyIndexMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mPropertyTypeIndex = p->mProperty_mPropertyTypeIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_mapWithMapToOverride (const GGS_propertyIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::enterElement (const GGS_propertyIndexMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_unifiedTypeMapEntry & inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::add_operation (const GGS_propertyIndexMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result = *this ;
  UpEnumerator_propertyIndexMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mPropertyTypeIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyIndexMap_searchKey = "the '%K' attribute is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::method_searchKey (GGS_lstring inKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_propertyIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    outArgument0 = p->mProperty_mPropertyTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    result = p->mProperty_mPropertyTypeIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyIndexMap * p = (cMapElement_propertyIndexMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    p->mProperty_mPropertyTypeIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap * GGS_propertyIndexMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * result = (cMapElement_propertyIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyIndexMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyIndexMap::DownEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element DownEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return GGS_propertyIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mPropertyTypeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return p->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyIndexMap::UpEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element UpEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return GGS_propertyIndexMap_2E_element (p->mProperty_lkey, p->mProperty_mPropertyTypeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return p->mProperty_mPropertyTypeIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  const GGS_propertyIndexMap * p = (const GGS_propertyIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GGS_nonterminalLabelMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSignatureForGeneration (inValue.mProperty_mSignatureForGeneration),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mEndOfArgumentLocation (inValue.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GGS_lstring & inKey,
                                                                  const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                  const GGS_formalParameterSignature & in_mSignature,
                                                                  const GGS_location & in_mEndOfArgumentLocation
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignatureForGeneration (in_mSignatureForGeneration),
mProperty_mSignature (in_mSignature),
mProperty_mEndOfArgumentLocation (in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalLabelMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalLabelMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalLabelMap (mProperty_lkey, mProperty_mSignatureForGeneration, mProperty_mSignature, mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalLabelMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap & GGS_nonterminalLabelMap::operator = (const GGS_nonterminalLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalLabelMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSignatureForGeneration = p->mProperty_mSignatureForGeneration ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mEndOfArgumentLocation = p->mProperty_mEndOfArgumentLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GGS_nonterminalLabelMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::enterElement (const GGS_nonterminalLabelMap_2E_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::addAssign_operation (const GGS_lstring & inKey,
                                                   const GGS_formalParameterListForGeneration & inArgument0,
                                                   const GGS_formalParameterSignature & inArgument1,
                                                   const GGS_location & inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::add_operation (const GGS_nonterminalLabelMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result = *this ;
  UpEnumerator_nonterminalLabelMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSignatureForGeneration (HERE), enumerator.current_mSignature (HERE), enumerator.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_formalParameterListForGeneration inArgument0,
                                                GGS_formalParameterSignature inArgument1,
                                                GGS_location inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalLabelMap_searchKey = "the '%K' nonterminal label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::method_searchKey (GGS_lstring inKey,
                                                GGS_formalParameterListForGeneration & outArgument0,
                                                GGS_formalParameterSignature & outArgument1,
                                                GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_nonterminalLabelMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    outArgument0 = p->mProperty_mSignatureForGeneration ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_nonterminalLabelMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GGS_formalParameterListForGeneration inAttributeValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignatureForGeneration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForKey (GGS_formalParameterSignature inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GGS_location inAttributeValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mEndOfArgumentLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap * GGS_nonterminalLabelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * result = (cMapElement_nonterminalLabelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalLabelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalLabelMap::DownEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element DownEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return GGS_nonterminalLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mSignatureForGeneration, p->mProperty_mSignature, p->mProperty_mEndOfArgumentLocation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalLabelMap::UpEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element UpEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return GGS_nonterminalLabelMap_2E_element (p->mProperty_lkey, p->mProperty_mSignatureForGeneration, p->mProperty_mSignature, p->mProperty_mEndOfArgumentLocation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mEndOfArgumentLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  const GGS_nonterminalLabelMap * p = (const GGS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GGS_nonterminalMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLabelMap (inValue.mProperty_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GGS_lstring & inKey,
                                                        const GGS_nonterminalLabelMap & in_mLabelMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelMap (in_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalMap (mProperty_lkey, mProperty_mLabelMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelMap" ":") ;
  mProperty_mLabelMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap::GGS_nonterminalMap (const GGS_nonterminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap & GGS_nonterminalMap::operator = (const GGS_nonterminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_nonterminalMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLabelMap = p->mProperty_mLabelMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::class_func_mapWithMapToOverride (const GGS_nonterminalMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::enterElement (const GGS_nonterminalMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_nonterminalLabelMap & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::add_operation (const GGS_nonterminalMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_nonterminalMap result = *this ;
  UpEnumerator_nonterminalMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_insertKey (GGS_lstring inKey,
                                           GGS_nonterminalLabelMap inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalMap_searchKey = "the '%K' nonterminal is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::method_searchKey (GGS_lstring inKey,
                                           GGS_nonterminalLabelMap & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_nonterminalMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalMap::getter_mLabelMapForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) attributes ;
  GGS_nonterminalLabelMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    result = p->mProperty_mLabelMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap::setter_setMLabelMapForKey (GGS_nonterminalLabelMap inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    p->mProperty_mLabelMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap * GGS_nonterminalMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * result = (cMapElement_nonterminalMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalMap::DownEnumerator_nonterminalMap (const GGS_nonterminalMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element DownEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return GGS_nonterminalMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap DownEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalMap::UpEnumerator_nonterminalMap (const GGS_nonterminalMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element UpEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return GGS_nonterminalMap_2E_element (p->mProperty_lkey, p->mProperty_mLabelMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap UpEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return p->mProperty_mLabelMap ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_nonterminalMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_nonterminalMap result ;
  const GGS_nonterminalMap * p = (const GGS_nonterminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleLabelImplementationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public: GGS_ruleLabelImplementationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                          const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GGS_formalParameterSignature & in_mSignature,
                                                          const GGS_location & in_mEndOfArgumentLocation,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_lstring & in_mLabelName,
                                                                                                const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GGS_formalParameterSignature & in_mSignature,
                                                                                                const GGS_location & in_mEndOfArgumentLocation,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GGS_ruleLabelImplementationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mSignatureForGeneration, inElement.mProperty_mSignature, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mProperty_mLabelName, mObject.mProperty_mSignatureForGeneration, mObject.mProperty_mSignature, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleLabelImplementationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mObject.mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mObject.mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionListForGeneration" ":") ;
  mObject.mProperty_mInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList::GGS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::enterElement (const GGS_ruleLabelImplementationList_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                                                           const GGS_formalParameterSignature & inOperand2,
                                                                                           const GGS_location & inOperand3,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_ruleLabelImplementationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleLabelImplementationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mLabelName,
                                                                 const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                 const GGS_formalParameterSignature & in_mSignature,
                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName,
                                                                 in_mSignatureForGeneration,
                                                                 in_mSignature,
                                                                 in_mEndOfArgumentLocation,
                                                                 in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                           const GGS_formalParameterListForGeneration & inOperand1,
                                                           const GGS_formalParameterSignature & inOperand2,
                                                           const GGS_location & inOperand3,
                                                           const GGS_semanticInstructionListForGeneration & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_formalParameterListForGeneration inOperand1,
                                                     const GGS_formalParameterSignature inOperand2,
                                                     const GGS_location inOperand3,
                                                     const GGS_semanticInstructionListForGeneration inOperand4,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_formalParameterListForGeneration inOperand1,
                                                            const GGS_formalParameterSignature inOperand2,
                                                            const GGS_location inOperand3,
                                                            const GGS_semanticInstructionListForGeneration inOperand4,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_formalParameterListForGeneration & outOperand1,
                                                            GGS_formalParameterSignature & outOperand2,
                                                            GGS_location & outOperand3,
                                                            GGS_semanticInstructionListForGeneration & outOperand4,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
      outOperand0 = p->mObject.mProperty_mLabelName ;
      outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
      outOperand2 = p->mObject.mProperty_mSignature ;
      outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
      outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_formalParameterListForGeneration & outOperand1,
                                                       GGS_formalParameterSignature & outOperand2,
                                                       GGS_location & outOperand3,
                                                       GGS_semanticInstructionListForGeneration & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_formalParameterListForGeneration & outOperand1,
                                                      GGS_formalParameterSignature & outOperand2,
                                                      GGS_location & outOperand3,
                                                      GGS_semanticInstructionListForGeneration & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_first (GGS_lstring & outOperand0,
                                                    GGS_formalParameterListForGeneration & outOperand1,
                                                    GGS_formalParameterSignature & outOperand2,
                                                    GGS_location & outOperand3,
                                                    GGS_semanticInstructionListForGeneration & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::method_last (GGS_lstring & outOperand0,
                                                   GGS_formalParameterListForGeneration & outOperand1,
                                                   GGS_formalParameterSignature & outOperand2,
                                                   GGS_location & outOperand3,
                                                   GGS_semanticInstructionListForGeneration & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::add_operation (const GGS_ruleLabelImplementationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationList result = GGS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::plusAssign_operation (const GGS_ruleLabelImplementationList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMLabelNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ruleLabelImplementationList::getter_mLabelNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureForGenerationAtIndex (GGS_formalParameterListForGeneration inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignatureForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_ruleLabelImplementationList::getter_mSignatureForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMSignatureAtIndex (GGS_formalParameterSignature inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_ruleLabelImplementationList::getter_mSignatureAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMEndOfArgumentLocationAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ruleLabelImplementationList::getter_mEndOfArgumentLocationAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList::setter_setMInstructionListForGenerationAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ruleLabelImplementationList::getter_mInstructionListForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleLabelImplementationList::DownEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element DownEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration DownEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleLabelImplementationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleLabelImplementationList::UpEnumerator_ruleLabelImplementationList (const GGS_ruleLabelImplementationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element UpEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration UpEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleLabelImplementationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleLabelImplementationList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList result ;
  const GGS_ruleLabelImplementationList * p = (const GGS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GGS_ruleDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                  const GGS_uint & in_mRuleIndex,
                                                  const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_string & in_mNonterminalName,
                                                                                const GGS_uint & in_mRuleIndex,
                                                                                const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GGS_ruleDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleIndex" ":") ;
  mObject.mProperty_mRuleIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelImplementationList" ":") ;
  mObject.mProperty_mLabelImplementationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList::GGS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::enterElement (const GGS_ruleDeclarationList_2E_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_ruleLabelImplementationList & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_ruleDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_string & in_mNonterminalName,
                                                         const GGS_uint & in_mRuleIndex,
                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName,
                                                         in_mRuleIndex,
                                                         in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::addAssign_operation (const GGS_string & inOperand0,
                                                   const GGS_uint & inOperand1,
                                                   const GGS_ruleLabelImplementationList & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_append (const GGS_string inOperand0,
                                             const GGS_uint inOperand1,
                                             const GGS_ruleLabelImplementationList inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_uint inOperand1,
                                                    const GGS_ruleLabelImplementationList inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_uint & outOperand1,
                                                    GGS_ruleLabelImplementationList & outOperand2,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mNonterminalName ;
      outOperand1 = p->mObject.mProperty_mRuleIndex ;
      outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_ruleLabelImplementationList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_popLast (GGS_string & outOperand0,
                                              GGS_uint & outOperand1,
                                              GGS_ruleLabelImplementationList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_first (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_ruleLabelImplementationList & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::method_last (GGS_string & outOperand0,
                                           GGS_uint & outOperand1,
                                           GGS_ruleLabelImplementationList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::add_operation (const GGS_ruleDeclarationList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_ruleDeclarationList result = GGS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::plusAssign_operation (const GGS_ruleDeclarationList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GGS_uint inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mRuleIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GGS_ruleLabelImplementationList inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelImplementationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList GGS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GGS_ruleLabelImplementationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mLabelImplementationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ruleDeclarationList::DownEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element DownEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList DownEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ruleDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ruleDeclarationList::UpEnumerator_ruleDeclarationList (const GGS_ruleDeclarationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element UpEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList UpEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}




//--------------------------------------------------------------------------------------------------
//     @ruleDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_ruleDeclarationList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ruleDeclarationList result ;
  const GGS_ruleDeclarationList * p = (const GGS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (cPtr_syntaxInstructionAST * inObject,
                                                   const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                   GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GGS_analysisContext constin_inAnalysisContext,
                                                   GGS_unifiedTypeMap & io_ioTypeMap,
                                                   const GGS_bool constin_inHasTranslateFeature,
                                                   const GGS_terminalMap constin_inTerminalMap,
                                                   const GGS_string constin_inLexiqueName,
                                                   const GGS_nonterminalMap constin_inNonterminalMap,
                                                   const GGS_string constin_inComponentName,
                                                   const GGS_stringset constin_inIndexNameSet,
                                                   GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   GGS_localVarManager & io_ioVariableMap,
                                                   GGS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_analyzeSyntaxInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (cPtr_abstractInputParameter * inObject,
                                                const GGS_analysisContext constin_inAnalysisContext,
                                                GGS_unifiedTypeMap & io_ioTypeMap,
                                                const GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GGS_string constin_inLexicalAttributeName,
                                                GGS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GGS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    inObject->method_analyzeInputParameter (constin_inAnalysisContext, io_ioTypeMap, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GGS_analysisContext constin_inAnalysisContext,
                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                     const GGS_bool constin_inHasTranslateFeature,
                                     GGS_localVarManager & io_ioVariableMap,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GGS_string constin_inAccessMethodName,
                                       GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       GGS_string & io_ioGeneratedCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_generateCode (constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration::objectCompare (const GGS_syntaxDeclarationForGeneration & inOperand) const {
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

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (void) :
GGS_semanticDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mSyntaxComponentName,
                                  const GGS_string & in_mLexiqueName,
                                  const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                  const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                  const GGS_uint & in_mSelectMethodCount,
                                  const GGS_bool & in_mHasIndexing,
                                  const GGS_bool & in_mHasTranslateFeature,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_syntaxDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_syntaxDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationMap, in_mRuleDeclarationList, in_mSelectMethodCount, in_mHasIndexing, in_mHasTranslateFeature, inCompiler) ;
  const GGS_syntaxDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::
syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                                 const GGS_string & in_mLexiqueName,
                                                                 const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                 const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                 const GGS_uint & in_mSelectMethodCount,
                                                                 const GGS_bool & in_mHasIndexing,
                                                                 const GGS_bool & in_mHasTranslateFeature,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::class_func_new (const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_string & in_mLexiqueName,
                                                                                       const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                                       const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                                       const GGS_uint & in_mSelectMethodCount,
                                                                                       const GGS_bool & in_mHasIndexing,
                                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxDeclarationForGeneration (in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationMap, in_mRuleDeclarationList, in_mSelectMethodCount, in_mHasIndexing, in_mHasTranslateFeature,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_syntaxDeclarationForGeneration::readProperty_mNonterminalDeclarationMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalMap () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mNonterminalDeclarationMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList GGS_syntaxDeclarationForGeneration::readProperty_mRuleDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ruleDeclarationList () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mRuleDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxDeclarationForGeneration::readProperty_mSelectMethodCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSelectMethodCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_string & in_mLexiqueName,
                                                                          const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                          const GGS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                          const GGS_uint & in_mSelectMethodCount,
                                                                          const GGS_bool & in_mHasIndexing,
                                                                          const GGS_bool & in_mHasTranslateFeature,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

void cPtr_syntaxDeclarationForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxDeclarationForGeneration:") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectMethodCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxDeclarationForGeneration (mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationMap, mProperty_mRuleDeclarationList, mProperty_mSelectMethodCount, mProperty_mHasIndexing, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationMap.printNonNullClassInstanceProperties ("mNonterminalDeclarationMap") ;
    mProperty_mRuleDeclarationList.printNonNullClassInstanceProperties ("mRuleDeclarationList") ;
    mProperty_mSelectMethodCount.printNonNullClassInstanceProperties ("mSelectMethodCount") ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ("syntaxDeclarationForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration result ;
  const GGS_syntaxDeclarationForGeneration * p = (const GGS_syntaxDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration_2E_weak::objectCompare (const GGS_syntaxDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak & GGS_syntaxDeclarationForGeneration_2E_weak::operator = (const GGS_syntaxDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (const GGS_syntaxDeclarationForGeneration & inSource) :
GGS_semanticDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak GGS_syntaxDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration_2E_weak::bang_syntaxDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxDeclarationForGeneration) ;
      result = GGS_syntaxDeclarationForGeneration ((cPtr_syntaxDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ("syntaxDeclarationForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak GGS_syntaxDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration_2E_weak result ;
  const GGS_syntaxDeclarationForGeneration_2E_weak * p = (const GGS_syntaxDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@usefulEntitiesGraph' graph
//
//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph::GGS_usefulEntitiesGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::setter_addNode (GGS_lstring inKey,
                                              GGS_lstring inArgument_0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_topologicalSort (GGS_lstringlist & outSortedList,
                                                      GGS_lstringlist & outSortedKeyList,
                                                      GGS_lstringlist & outUnsortedList,
                                                      GGS_lstringlist & outUnsortedKeyList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GGS_lstringlist & outSortedList,
                                                                GGS_lstringlist & outSortedKeyList,
                                                                GGS_lstringlist & outUnsortedList,
                                                                GGS_lstringlist & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_lstringlist (sortedList) ;
  outUnsortedList = GGS_lstringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_circularities (GGS_lstringlist & outInfoList,
                                                    GGS_lstringlist & outKeyList
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GGS_lstringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GGS_lstringlist & outInfoList,
                                                             GGS_lstringlist & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                           const GGS_stringset & inKeysToExclude,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                     const GGS_stringset & inNodesToExclude,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_usefulEntitiesGraph resultingGraph ;
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
//     @usefulEntitiesGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_usefulEntitiesGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_usefulEntitiesGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_usefulEntitiesGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_usefulEntitiesGraph GGS_usefulEntitiesGraph::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_usefulEntitiesGraph result ;
  const GGS_usefulEntitiesGraph * p = (const GGS_usefulEntitiesGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_usefulEntitiesGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("usefulEntitiesGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap::cMapElement_uselessEntityLocationMap (const GGS_uselessEntityLocationMap_2E_element & inValue
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mUnusedEntityName (inValue.mProperty_mUnusedEntityName),
mProperty_mLocation (inValue.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap::cMapElement_uselessEntityLocationMap (const GGS_lstring & inKey,
                                                                            const GGS_string & in_mUnusedEntityName,
                                                                            const GGS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mUnusedEntityName (in_mUnusedEntityName),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_uselessEntityLocationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_uselessEntityLocationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_uselessEntityLocationMap (mProperty_lkey, mProperty_mUnusedEntityName, mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_uselessEntityLocationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUnusedEntityName" ":") ;
  mProperty_mUnusedEntityName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLocation" ":") ;
  mProperty_mLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap::GGS_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap & GGS_uselessEntityLocationMap::operator = (const GGS_uselessEntityLocationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_uselessEntityLocationMap * p = (cMapElement_uselessEntityLocationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_uselessEntityLocationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_uselessEntityLocationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mUnusedEntityName = p->mProperty_mUnusedEntityName ;
      element.mProperty_mLocation = p->mProperty_mLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::class_func_mapWithMapToOverride (const GGS_uselessEntityLocationMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::enterElement (const GGS_uselessEntityLocationMap_2E_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = nullptr ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@uselessEntityLocationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::addAssign_operation (const GGS_lstring & inKey,
                                                        const GGS_string & inArgument0,
                                                        const GGS_location & inArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = nullptr ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@uselessEntityLocationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::add_operation (const GGS_uselessEntityLocationMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_uselessEntityLocationMap result = *this ;
  UpEnumerator_uselessEntityLocationMap enumerator (inOperand) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mUnusedEntityName (HERE), enumerator.current_mLocation (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_insertKey (GGS_lstring inKey,
                                                     GGS_string inArgument0,
                                                     GGS_location inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = nullptr ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "--- %K INTERNAL ERROR ---" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uselessEntityLocationMap::getter_mUnusedEntityNameForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    result = p->mProperty_mUnusedEntityName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_uselessEntityLocationMap::getter_mLocationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) attributes ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMUnusedEntityNameForKey (GGS_string inAttributeValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_uselessEntityLocationMap * p = (cMapElement_uselessEntityLocationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    p->mProperty_mUnusedEntityName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap::setter_setMLocationForKey (GGS_location inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_uselessEntityLocationMap * p = (cMapElement_uselessEntityLocationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    p->mProperty_mLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap * GGS_uselessEntityLocationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GGS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * result = (cMapElement_uselessEntityLocationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_uselessEntityLocationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_uselessEntityLocationMap::DownEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element DownEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return GGS_uselessEntityLocationMap_2E_element (p->mProperty_lkey, p->mProperty_mUnusedEntityName, p->mProperty_mLocation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @uselessEntityLocationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_uselessEntityLocationMap::UpEnumerator_uselessEntityLocationMap (const GGS_uselessEntityLocationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element UpEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return GGS_uselessEntityLocationMap_2E_element (p->mProperty_lkey, p->mProperty_mUnusedEntityName, p->mProperty_mLocation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_uselessEntityLocationMap::current_mUnusedEntityName (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mUnusedEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap GGS_uselessEntityLocationMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap result ;
  const GGS_uselessEntityLocationMap * p = (const GGS_uselessEntityLocationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @rightShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST::objectCompare (const GGS_rightShiftExpressionAST & inOperand) const {
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

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_rightShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_rightShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->rightShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_rightShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::
rightShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_semanticExpressionAST & in_mLeftExpression,
                                          const GGS_semanticExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_rightShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @rightShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mLeftExpression,
                                                            const GGS_semanticExpressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@rightShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_rightShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_rightShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rightShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rightShiftExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST result ;
  const GGS_rightShiftExpressionAST * p = (const GGS_rightShiftExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rightShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST_2E_weak::objectCompare (const GGS_rightShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak & GGS_rightShiftExpressionAST_2E_weak::operator = (const GGS_rightShiftExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (const GGS_rightShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak GGS_rightShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_rightShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST_2E_weak::bang_rightShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_rightShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_rightShiftExpressionAST) ;
      result = GGS_rightShiftExpressionAST ((cPtr_rightShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ("rightShiftExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rightShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rightShiftExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rightShiftExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak GGS_rightShiftExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_rightShiftExpressionAST_2E_weak result ;
  const GGS_rightShiftExpressionAST_2E_weak * p = (const GGS_rightShiftExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rightShiftExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @leftShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST::objectCompare (const GGS_leftShiftExpressionAST & inOperand) const {
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

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_leftShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_leftShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->leftShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_leftShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::
leftShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                       const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                       const GGS_semanticExpressionAST & in_mRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_leftShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GGS_location & in_mOperatorLocation,
                                                          const GGS_semanticExpressionAST & in_mLeftExpression,
                                                          const GGS_semanticExpressionAST & in_mRightExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@leftShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_leftShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST result ;
  const GGS_leftShiftExpressionAST * p = (const GGS_leftShiftExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST_2E_weak::objectCompare (const GGS_leftShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak & GGS_leftShiftExpressionAST_2E_weak::operator = (const GGS_leftShiftExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (const GGS_leftShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak GGS_leftShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_leftShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST_2E_weak::bang_leftShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_leftShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftExpressionAST) ;
      result = GGS_leftShiftExpressionAST ((cPtr_leftShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ("leftShiftExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_leftShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_leftShiftExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_leftShiftExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak GGS_leftShiftExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_leftShiftExpressionAST_2E_weak result ;
  const GGS_leftShiftExpressionAST_2E_weak * p = (const GGS_leftShiftExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_leftShiftExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST::objectCompare (const GGS_addExpressionAST & inOperand) const {
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

GGS_addExpressionAST::GGS_addExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionAST (inCompiler COMMA_THERE)) ;
  object->addExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::
addExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST::GGS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST result ;
  const GGS_addExpressionAST * p = (const GGS_addExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST_2E_weak::objectCompare (const GGS_addExpressionAST_2E_weak & inOperand) const {
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

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak & GGS_addExpressionAST_2E_weak::operator = (const GGS_addExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (const GGS_addExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak GGS_addExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST_2E_weak::bang_addExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionAST) ;
      result = GGS_addExpressionAST ((cPtr_addExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ("addExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak GGS_addExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_addExpressionAST_2E_weak result ;
  const GGS_addExpressionAST_2E_weak * p = (const GGS_addExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST::objectCompare (const GGS_addExpressionNoOverflowAST & inOperand) const {
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

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->addExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::
addExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                               const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                               const GGS_semanticExpressionAST & in_mRightExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST result ;
  macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
                                                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST result ;
  const GGS_addExpressionNoOverflowAST * p = (const GGS_addExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_addExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak & GGS_addExpressionNoOverflowAST_2E_weak::operator = (const GGS_addExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (const GGS_addExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak GGS_addExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST_2E_weak::bang_addExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionNoOverflowAST) ;
      result = GGS_addExpressionNoOverflowAST ((cPtr_addExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ("addExpressionNoOverflowAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_addExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak GGS_addExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST_2E_weak result ;
  const GGS_addExpressionNoOverflowAST_2E_weak * p = (const GGS_addExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST::objectCompare (const GGS_subExpressionAST & inOperand) const {
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

GGS_subExpressionAST::GGS_subExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionAST (inCompiler COMMA_THERE)) ;
  object->subExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::
subExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST::GGS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_subExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_subExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_subExpressionAST result ;
  const GGS_subExpressionAST * p = (const GGS_subExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST_2E_weak::objectCompare (const GGS_subExpressionAST_2E_weak & inOperand) const {
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

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak & GGS_subExpressionAST_2E_weak::operator = (const GGS_subExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (const GGS_subExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak GGS_subExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST_2E_weak::bang_subExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionAST) ;
      result = GGS_subExpressionAST ((cPtr_subExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ("subExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak GGS_subExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_subExpressionAST_2E_weak result ;
  const GGS_subExpressionAST_2E_weak * p = (const GGS_subExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST::objectCompare (const GGS_subExpressionNoOverflowAST & inOperand) const {
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

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->subExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::
subExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                               const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                               const GGS_semanticExpressionAST & in_mRightExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST result ;
  macroMyNew (result.mObjectPtr, cPtr_subExpressionNoOverflowAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
                                                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST result ;
  const GGS_subExpressionNoOverflowAST * p = (const GGS_subExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_subExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak & GGS_subExpressionNoOverflowAST_2E_weak::operator = (const GGS_subExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (const GGS_subExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak GGS_subExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST_2E_weak::bang_subExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionNoOverflowAST) ;
      result = GGS_subExpressionNoOverflowAST ((cPtr_subExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ("subExpressionNoOverflowAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subExpressionNoOverflowAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subExpressionNoOverflowAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak GGS_subExpressionNoOverflowAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST_2E_weak result ;
  const GGS_subExpressionNoOverflowAST_2E_weak * p = (const GGS_subExpressionNoOverflowAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subExpressionNoOverflowAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum binaryOperator
//--------------------------------------------------------------------------------------------------

GGS_binaryOperator::GGS_binaryOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_rightShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_rightShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_leftShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_leftShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_add (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_add ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_addNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_addNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_sub (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_sub ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_subNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_subNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_and (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_and ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_or (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_or ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_xor (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_xor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_modulo_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_modulo_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_binaryOperator [15] = {
  "(not built)",
  "rightShift",
  "leftShift",
  "add",
  "addNoOverflow",
  "sub",
  "subNoOverflow",
  "operator_and",
  "operator_or",
  "operator_xor",
  "multiply_operation_no_ovf",
  "multiply_operation",
  "divide_operation",
  "divide_operation_no_ovf",
  "modulo_operation"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rightShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_leftShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_add == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAddNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sub == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSubNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_and (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_and == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_or (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_or == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_xor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_xor == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isModulo_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modulo_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperator::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @binaryOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_binaryOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @binaryOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperator ("binaryOperator",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_binaryOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  const GGS_binaryOperator * p = (const GGS_binaryOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperatorExpressionForGeneration_2E_weak::objectCompare (const GGS_binaryOperatorExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak & GGS_binaryOperatorExpressionForGeneration_2E_weak::operator = (const GGS_binaryOperatorExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (const GGS_binaryOperatorExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak GGS_binaryOperatorExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration_2E_weak::bang_binaryOperatorExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binaryOperatorExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperatorExpressionForGeneration) ;
      result = GGS_binaryOperatorExpressionForGeneration ((cPtr_binaryOperatorExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binaryOperatorExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ("binaryOperatorExpressionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_binaryOperatorExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperatorExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperatorExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak GGS_binaryOperatorExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
  const GGS_binaryOperatorExpressionForGeneration_2E_weak * p = (const GGS_binaryOperatorExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperatorExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionAST::objectCompare (const GGS_andShortExpressionAST & inOperand) const {
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

GGS_andShortExpressionAST::GGS_andShortExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_andShortExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andShortExpressionAST (inCompiler COMMA_THERE)) ;
  object->andShortExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andShortExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::
andShortExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST::GGS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                     const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                     const GGS_semanticExpressionAST & in_mRightExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_andShortExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_andShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andShortExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GGS_location & in_mOperatorLocation,
                                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

void cPtr_andShortExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@andShortExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionAST result ;
  const GGS_andShortExpressionAST * p = (const GGS_andShortExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionAST_2E_weak::objectCompare (const GGS_andShortExpressionAST_2E_weak & inOperand) const {
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

GGS_andShortExpressionAST_2E_weak::GGS_andShortExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak & GGS_andShortExpressionAST_2E_weak::operator = (const GGS_andShortExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak::GGS_andShortExpressionAST_2E_weak (const GGS_andShortExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak GGS_andShortExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andShortExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST_2E_weak::bang_andShortExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andShortExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionAST) ;
      result = GGS_andShortExpressionAST ((cPtr_andShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST_2E_weak ("andShortExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andShortExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak GGS_andShortExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionAST_2E_weak result ;
  const GGS_andShortExpressionAST_2E_weak * p = (const GGS_andShortExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpressionAST::objectCompare (const GGS_andExpressionAST & inOperand) const {
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

GGS_andExpressionAST::GGS_andExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_andExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andExpressionAST (inCompiler COMMA_THERE)) ;
  object->andExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::
andExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST::GGS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_andExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_andExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_andExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

void cPtr_andExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@andExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_andExpressionAST result ;
  const GGS_andExpressionAST * p = (const GGS_andExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpressionAST_2E_weak::objectCompare (const GGS_andExpressionAST_2E_weak & inOperand) const {
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

GGS_andExpressionAST_2E_weak::GGS_andExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak & GGS_andExpressionAST_2E_weak::operator = (const GGS_andExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak::GGS_andExpressionAST_2E_weak (const GGS_andExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak GGS_andExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST_2E_weak::bang_andExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpressionAST) ;
      result = GGS_andExpressionAST ((cPtr_andExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST_2E_weak ("andExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak GGS_andExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_andExpressionAST_2E_weak result ;
  const GGS_andExpressionAST_2E_weak * p = (const GGS_andExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionForGeneration_2E_weak::objectCompare (const GGS_andShortExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_andShortExpressionForGeneration_2E_weak::GGS_andShortExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak & GGS_andShortExpressionForGeneration_2E_weak::operator = (const GGS_andShortExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak::GGS_andShortExpressionForGeneration_2E_weak (const GGS_andShortExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak GGS_andShortExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration_2E_weak::bang_andShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionForGeneration) ;
      result = GGS_andShortExpressionForGeneration ((cPtr_andShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2E_weak ("andShortExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andShortExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak GGS_andShortExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration_2E_weak result ;
  const GGS_andShortExpressionForGeneration_2E_weak * p = (const GGS_andShortExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionAST_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak & GGS_testDynamicClassInExpressionAST_2E_weak::operator = (const GGS_testDynamicClassInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (const GGS_testDynamicClassInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak GGS_testDynamicClassInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST_2E_weak::bang_testDynamicClassInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionAST) ;
      result = GGS_testDynamicClassInExpressionAST ((cPtr_testDynamicClassInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ("testDynamicClassInExpressionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testDynamicClassInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak GGS_testDynamicClassInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST_2E_weak result ;
  const GGS_testDynamicClassInExpressionAST_2E_weak * p = (const GGS_testDynamicClassInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST_2E_weak::objectCompare (const GGS_castInExpressionAST_2E_weak & inOperand) const {
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

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak & GGS_castInExpressionAST_2E_weak::operator = (const GGS_castInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (const GGS_castInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak GGS_castInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_castInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST_2E_weak::bang_castInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_castInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionAST) ;
      result = GGS_castInExpressionAST ((cPtr_castInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ("castInExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak GGS_castInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_castInExpressionAST_2E_weak result ;
  const GGS_castInExpressionAST_2E_weak * p = (const GGS_castInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionForGeneration_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak & GGS_testDynamicClassInExpressionForGeneration_2E_weak::operator = (const GGS_testDynamicClassInExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (const GGS_testDynamicClassInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak GGS_testDynamicClassInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration_2E_weak::bang_testDynamicClassInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionForGeneration) ;
      result = GGS_testDynamicClassInExpressionForGeneration ((cPtr_testDynamicClassInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ("testDynamicClassInExpressionForGeneration.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testDynamicClassInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak GGS_testDynamicClassInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
  const GGS_testDynamicClassInExpressionForGeneration_2E_weak * p = (const GGS_testDynamicClassInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extractObjectInExpressionForGeneration_2E_weak::objectCompare (const GGS_extractObjectInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_extractObjectInExpressionForGeneration_2E_weak::GGS_extractObjectInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak & GGS_extractObjectInExpressionForGeneration_2E_weak::operator = (const GGS_extractObjectInExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak::GGS_extractObjectInExpressionForGeneration_2E_weak (const GGS_extractObjectInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak GGS_extractObjectInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration_2E_weak::bang_extractObjectInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extractObjectInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extractObjectInExpressionForGeneration) ;
      result = GGS_extractObjectInExpressionForGeneration ((cPtr_extractObjectInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extractObjectInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2E_weak ("extractObjectInExpressionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extractObjectInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractObjectInExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractObjectInExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration_2E_weak GGS_extractObjectInExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration_2E_weak result ;
  const GGS_extractObjectInExpressionForGeneration_2E_weak * p = (const GGS_extractObjectInExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractObjectInExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum comparison
//--------------------------------------------------------------------------------------------------

GGS_comparison::GGS_comparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_sameInstance (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_sameInstance ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_differentInstances (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_differentInstances ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [9] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan",
  "sameInstance",
  "differentInstances"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isSameInstance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sameInstance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isDifferentInstances (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_differentInstances == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_comparison::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @comparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_comparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @comparison generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ("comparison",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_comparison result ;
  const GGS_comparison * p = (const GGS_comparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionAST::objectCompare (const GGS_comparisonExpressionAST & inOperand) const {
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

GGS_comparisonExpressionAST::GGS_comparisonExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST::
init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                      const GGS_semanticExpressionAST & in_mLeftExpression,
                      const GGS_comparison & in_mComparison,
                      const GGS_semanticExpressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionAST (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionAST_init_21__21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GGS_comparisonExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::
comparisonExpressionAST_init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_comparison & in_mComparison,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST::GGS_comparisonExpressionAST (const cPtr_comparisonExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                                                         const GGS_comparison & in_mComparison,
                                                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionAST (in_mOperatorLocation, in_mLeftExpression, in_mComparison, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_comparisonExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_comparisonExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonExpressionAST::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_comparisonExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mLeftExpression,
                                                            const GGS_comparison & in_mComparison,
                                                            const GGS_semanticExpressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

void cPtr_comparisonExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST ("comparisonExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionAST result ;
  const GGS_comparisonExpressionAST * p = (const GGS_comparisonExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionAST_2E_weak::objectCompare (const GGS_comparisonExpressionAST_2E_weak & inOperand) const {
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

GGS_comparisonExpressionAST_2E_weak::GGS_comparisonExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak & GGS_comparisonExpressionAST_2E_weak::operator = (const GGS_comparisonExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak::GGS_comparisonExpressionAST_2E_weak (const GGS_comparisonExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak GGS_comparisonExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST_2E_weak::bang_comparisonExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonExpressionAST) ;
      result = GGS_comparisonExpressionAST ((cPtr_comparisonExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST_2E_weak ("comparisonExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak GGS_comparisonExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionAST_2E_weak result ;
  const GGS_comparisonExpressionAST_2E_weak * p = (const GGS_comparisonExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionForGeneration_2E_weak::objectCompare (const GGS_comparisonExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_comparisonExpressionForGeneration_2E_weak::GGS_comparisonExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak & GGS_comparisonExpressionForGeneration_2E_weak::operator = (const GGS_comparisonExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak::GGS_comparisonExpressionForGeneration_2E_weak (const GGS_comparisonExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak GGS_comparisonExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration_2E_weak::bang_comparisonExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonExpressionForGeneration) ;
      result = GGS_comparisonExpressionForGeneration ((cPtr_comparisonExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2E_weak ("comparisonExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak GGS_comparisonExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration_2E_weak result ;
  const GGS_comparisonExpressionForGeneration_2E_weak * p = (const GGS_comparisonExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actualOutputArgumentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualOutputArgumentList : public cCollectionElement {
  public: GGS_actualOutputArgumentList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_actualOutputArgumentList (const GGS_lstring & in_mActualSelector,
                                                       const GGS_semanticExpressionAST & in_mExpression,
                                                       const GGS_location & in_mEndOfExpressionLocation
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualOutputArgumentList (const GGS_actualOutputArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualOutputArgumentList::cCollectionElement_actualOutputArgumentList (const GGS_lstring & in_mActualSelector,
                                                                                          const GGS_semanticExpressionAST & in_mExpression,
                                                                                          const GGS_location & in_mEndOfExpressionLocation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mExpression, in_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualOutputArgumentList::cCollectionElement_actualOutputArgumentList (const GGS_actualOutputArgumentList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualOutputArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualOutputArgumentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualOutputArgumentList (mObject.mProperty_mActualSelector, mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualOutputArgumentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualSelector" ":") ;
  mObject.mProperty_mActualSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfExpressionLocation" ":") ;
  mObject.mProperty_mEndOfExpressionLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList::GGS_actualOutputArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList::GGS_actualOutputArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_actualOutputArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_actualOutputArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::enterElement (const GGS_actualOutputArgumentList_2E_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualOutputArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_semanticExpressionAST & inOperand1,
                                                                                     const GGS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_actualOutputArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_actualOutputArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_actualOutputArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mActualSelector,
                                                              const GGS_semanticExpressionAST & in_mExpression,
                                                              const GGS_location & in_mEndOfExpressionLocation
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualOutputArgumentList (in_mActualSelector,
                                                              in_mExpression,
                                                              in_mEndOfExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::addAssign_operation (const GGS_lstring & inOperand0,
                                                        const GGS_semanticExpressionAST & inOperand1,
                                                        const GGS_location & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualOutputArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_semanticExpressionAST inOperand1,
                                                  const GGS_location inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualOutputArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_semanticExpressionAST inOperand1,
                                                         const GGS_location inOperand2,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualOutputArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_semanticExpressionAST & outOperand1,
                                                         GGS_location & outOperand2,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
      outOperand0 = p->mObject.mProperty_mActualSelector ;
      outOperand1 = p->mObject.mProperty_mExpression ;
      outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_semanticExpressionAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_semanticExpressionAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::method_first (GGS_lstring & outOperand0,
                                                 GGS_semanticExpressionAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::method_last (GGS_lstring & outOperand0,
                                                GGS_semanticExpressionAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::add_operation (const GGS_actualOutputArgumentList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actualOutputArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualOutputArgumentList result = GGS_actualOutputArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_actualOutputArgumentList result = GGS_actualOutputArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_actualOutputArgumentList result = GGS_actualOutputArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::plusAssign_operation (const GGS_actualOutputArgumentList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_setMActualSelectorAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_actualOutputArgumentList::getter_mActualSelectorAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    result = p->mObject.mProperty_mActualSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_setMExpressionAtIndex (GGS_semanticExpressionAST inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_actualOutputArgumentList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  GGS_semanticExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList::setter_setMEndOfExpressionLocationAtIndex (GGS_location inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpressionLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_actualOutputArgumentList::getter_mEndOfExpressionLocationAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualOutputArgumentList * p = (cCollectionElement_actualOutputArgumentList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
    result = p->mObject.mProperty_mEndOfExpressionLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @actualOutputArgumentList
//--------------------------------------------------------------------------------------------------

DownEnumerator_actualOutputArgumentList::DownEnumerator_actualOutputArgumentList (const GGS_actualOutputArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element DownEnumerator_actualOutputArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actualOutputArgumentList::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST DownEnumerator_actualOutputArgumentList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_actualOutputArgumentList::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mEndOfExpressionLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actualOutputArgumentList
//--------------------------------------------------------------------------------------------------

UpEnumerator_actualOutputArgumentList::UpEnumerator_actualOutputArgumentList (const GGS_actualOutputArgumentList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element UpEnumerator_actualOutputArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actualOutputArgumentList::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST UpEnumerator_actualOutputArgumentList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_actualOutputArgumentList::current_mEndOfExpressionLocation (LOCATION_ARGS) const {
  const cCollectionElement_actualOutputArgumentList * p = (const cCollectionElement_actualOutputArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualOutputArgumentList) ;
  return p->mObject.mProperty_mEndOfExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @actualOutputArgumentList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList ("actualOutputArgumentList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actualOutputArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualOutputArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualOutputArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_actualOutputArgumentList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_actualOutputArgumentList result ;
  const GGS_actualOutputArgumentList * p = (const GGS_actualOutputArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualOutputArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualOutputArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST_2E_weak::objectCompare (const GGS_functionCallExpressionAST_2E_weak & inOperand) const {
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

GGS_functionCallExpressionAST_2E_weak::GGS_functionCallExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak & GGS_functionCallExpressionAST_2E_weak::operator = (const GGS_functionCallExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak::GGS_functionCallExpressionAST_2E_weak (const GGS_functionCallExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak GGS_functionCallExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionCallExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST_2E_weak::bang_functionCallExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionCallExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionCallExpressionAST) ;
      result = GGS_functionCallExpressionAST ((cPtr_functionCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST_2E_weak ("functionCallExpressionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionCallExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak GGS_functionCallExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionAST_2E_weak result ;
  const GGS_functionCallExpressionAST_2E_weak * p = (const GGS_functionCallExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionForGeneration_2E_weak::objectCompare (const GGS_functionCallExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_functionCallExpressionForGeneration_2E_weak::GGS_functionCallExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak & GGS_functionCallExpressionForGeneration_2E_weak::operator = (const GGS_functionCallExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak::GGS_functionCallExpressionForGeneration_2E_weak (const GGS_functionCallExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak GGS_functionCallExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration_2E_weak::bang_functionCallExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionCallExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionCallExpressionForGeneration) ;
      result = GGS_functionCallExpressionForGeneration ((cPtr_functionCallExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration_2E_weak ("functionCallExpressionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionCallExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak GGS_functionCallExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration_2E_weak result ;
  const GGS_functionCallExpressionForGeneration_2E_weak * p = (const GGS_functionCallExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST_2E_weak::objectCompare (const GGS_getterCallExpressionAST_2E_weak & inOperand) const {
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

GGS_getterCallExpressionAST_2E_weak::GGS_getterCallExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak & GGS_getterCallExpressionAST_2E_weak::operator = (const GGS_getterCallExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak::GGS_getterCallExpressionAST_2E_weak (const GGS_getterCallExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak GGS_getterCallExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getterCallExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST_2E_weak::bang_getterCallExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getterCallExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getterCallExpressionAST) ;
      result = GGS_getterCallExpressionAST ((cPtr_getterCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2E_weak ("getterCallExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getterCallExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak GGS_getterCallExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionAST_2E_weak result ;
  const GGS_getterCallExpressionAST_2E_weak * p = (const GGS_getterCallExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionForGeneration_2E_weak::objectCompare (const GGS_getterCallExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_getterCallExpressionForGeneration_2E_weak::GGS_getterCallExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak & GGS_getterCallExpressionForGeneration_2E_weak::operator = (const GGS_getterCallExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak::GGS_getterCallExpressionForGeneration_2E_weak (const GGS_getterCallExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak GGS_getterCallExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration_2E_weak::bang_getterCallExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getterCallExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getterCallExpressionForGeneration) ;
      result = GGS_getterCallExpressionForGeneration ((cPtr_getterCallExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2E_weak ("getterCallExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getterCallExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak GGS_getterCallExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration_2E_weak result ;
  const GGS_getterCallExpressionForGeneration_2E_weak * p = (const GGS_getterCallExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST_2E_weak::objectCompare (const GGS_initializerCallAST_2E_weak & inOperand) const {
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

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak & GGS_initializerCallAST_2E_weak::operator = (const GGS_initializerCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak::GGS_initializerCallAST_2E_weak (const GGS_initializerCallAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak GGS_initializerCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST_2E_weak::bang_initializerCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallAST) ;
      result = GGS_initializerCallAST ((cPtr_initializerCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ("initializerCallAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_initializerCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST_2E_weak GGS_initializerCallAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_initializerCallAST_2E_weak result ;
  const GGS_initializerCallAST_2E_weak * p = (const GGS_initializerCallAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration_2E_weak::objectCompare (const GGS_initializerCallForGeneration_2E_weak & inOperand) const {
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

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak & GGS_initializerCallForGeneration_2E_weak::operator = (const GGS_initializerCallForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak::GGS_initializerCallForGeneration_2E_weak (const GGS_initializerCallForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak GGS_initializerCallForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerCallForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration_2E_weak::bang_initializerCallForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerCallForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerCallForGeneration) ;
      result = GGS_initializerCallForGeneration ((cPtr_initializerCallForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ("initializerCallForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_initializerCallForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration_2E_weak GGS_initializerCallForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_initializerCallForGeneration_2E_weak result ;
  const GGS_initializerCallForGeneration_2E_weak * p = (const GGS_initializerCallForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST_2E_weak::objectCompare (const GGS_structPropertyAccessExpressionAST_2E_weak & inOperand) const {
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

GGS_structPropertyAccessExpressionAST_2E_weak::GGS_structPropertyAccessExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak & GGS_structPropertyAccessExpressionAST_2E_weak::operator = (const GGS_structPropertyAccessExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak::GGS_structPropertyAccessExpressionAST_2E_weak (const GGS_structPropertyAccessExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak GGS_structPropertyAccessExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST_2E_weak::bang_structPropertyAccessExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structPropertyAccessExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structPropertyAccessExpressionAST) ;
      result = GGS_structPropertyAccessExpressionAST ((cPtr_structPropertyAccessExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2E_weak ("structPropertyAccessExpressionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structPropertyAccessExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structPropertyAccessExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structPropertyAccessExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak GGS_structPropertyAccessExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST_2E_weak result ;
  const GGS_structPropertyAccessExpressionAST_2E_weak * p = (const GGS_structPropertyAccessExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structPropertyAccessExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyAccessExpressionForGeneration_2E_weak::objectCompare (const GGS_propertyAccessExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_propertyAccessExpressionForGeneration_2E_weak::GGS_propertyAccessExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak & GGS_propertyAccessExpressionForGeneration_2E_weak::operator = (const GGS_propertyAccessExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak::GGS_propertyAccessExpressionForGeneration_2E_weak (const GGS_propertyAccessExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak GGS_propertyAccessExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration_2E_weak::bang_propertyAccessExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_propertyAccessExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_propertyAccessExpressionForGeneration) ;
      result = GGS_propertyAccessExpressionForGeneration ((cPtr_propertyAccessExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyAccessExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration_2E_weak ("propertyAccessExpressionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak GGS_propertyAccessExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration_2E_weak result ;
  const GGS_propertyAccessExpressionForGeneration_2E_weak * p = (const GGS_propertyAccessExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subscriptReadAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionAST::objectCompare (const GGS_subscriptReadAccessExpressionAST & inOperand) const {
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

GGS_subscriptReadAccessExpressionAST::GGS_subscriptReadAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                  const GGS_actualOutputArgumentList & in_actualArgumentList,
                  const GGS_location & in_endOfArgsLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subscriptReadAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_subscriptReadAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->subscriptReadAccessExpressionAST_init_21__21__21_ (in_mExpression, in_actualArgumentList, in_endOfArgsLocation, inCompiler) ;
  const GGS_subscriptReadAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::
subscriptReadAccessExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                   const GGS_actualOutputArgumentList & in_actualArgumentList,
                                                   const GGS_location & in_endOfArgsLocation,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_actualArgumentList = in_actualArgumentList ;
  mProperty_endOfArgsLocation = in_endOfArgsLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST::GGS_subscriptReadAccessExpressionAST (const cPtr_subscriptReadAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subscriptReadAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST::class_func_new (const GGS_semanticExpressionAST & in_mExpression,
                                                                                           const GGS_actualOutputArgumentList & in_actualArgumentList,
                                                                                           const GGS_location & in_endOfArgsLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_subscriptReadAccessExpressionAST (in_mExpression, in_actualArgumentList, in_endOfArgsLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subscriptReadAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_subscriptReadAccessExpressionAST::readProperty_actualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_actualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_subscriptReadAccessExpressionAST::readProperty_endOfArgsLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_endOfArgsLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subscriptReadAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionAST::cPtr_subscriptReadAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_actualArgumentList (),
mProperty_endOfArgsLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionAST::cPtr_subscriptReadAccessExpressionAST (const GGS_semanticExpressionAST & in_mExpression,
                                                                              const GGS_actualOutputArgumentList & in_actualArgumentList,
                                                                              const GGS_location & in_endOfArgsLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_actualArgumentList (),
mProperty_endOfArgsLocation () {
  mProperty_mExpression = in_mExpression ;
  mProperty_actualArgumentList = in_actualArgumentList ;
  mProperty_endOfArgsLocation = in_endOfArgsLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subscriptReadAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ;
}

void cPtr_subscriptReadAccessExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@subscriptReadAccessExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_actualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_endOfArgsLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subscriptReadAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subscriptReadAccessExpressionAST (mProperty_mExpression, mProperty_actualArgumentList, mProperty_endOfArgsLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subscriptReadAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_actualArgumentList.printNonNullClassInstanceProperties ("actualArgumentList") ;
    mProperty_endOfArgsLocation.printNonNullClassInstanceProperties ("endOfArgsLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ("subscriptReadAccessExpressionAST",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscriptReadAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionAST result ;
  const GGS_subscriptReadAccessExpressionAST * p = (const GGS_subscriptReadAccessExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionAST_2E_weak::objectCompare (const GGS_subscriptReadAccessExpressionAST_2E_weak & inOperand) const {
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

GGS_subscriptReadAccessExpressionAST_2E_weak::GGS_subscriptReadAccessExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak & GGS_subscriptReadAccessExpressionAST_2E_weak::operator = (const GGS_subscriptReadAccessExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak::GGS_subscriptReadAccessExpressionAST_2E_weak (const GGS_subscriptReadAccessExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak GGS_subscriptReadAccessExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST_2E_weak::bang_subscriptReadAccessExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subscriptReadAccessExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subscriptReadAccessExpressionAST) ;
      result = GGS_subscriptReadAccessExpressionAST ((cPtr_subscriptReadAccessExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST_2E_weak ("subscriptReadAccessExpressionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscriptReadAccessExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak GGS_subscriptReadAccessExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionAST_2E_weak result ;
  const GGS_subscriptReadAccessExpressionAST_2E_weak * p = (const GGS_subscriptReadAccessExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_string_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_::GGS__5B_string_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_::GGS__5B_string_5D_ (const GGS__5B_string_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ & GGS__5B_string_5D_::operator = (const GGS__5B_string_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_string_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::drop (void) {
  mSharedArray.free () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::enterElement (const GGS_string & inValue,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_string_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::add_operation (const GGS__5B_string_5D_ & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
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

void GGS__5B_string_5D_::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (", ") ;
  ioString.appendSigned (mSharedArray.count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count() > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::plusAssign_operation (const GGS__5B_string_5D_ inOperand,
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

void GGS__5B_string_5D_::setter_append (const GGS_string inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_insertAtIndex (const GGS_string inValue,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_removeAtIndex (GGS_string & outValue,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    outValue = mSharedArray (idx COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_popFirst (GGS_string & outValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::setter_popLast (GGS_string & outValue,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::method_first (GGS_string & outValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_string_5D_::method_last (GGS_string & outValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS__5B_string_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
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
// Down Enumerator for @_5B_string_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_string_5D_::DownEnumerator__5B_string_5D_ (const GGS__5B_string_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator__5B_string_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_string_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_string_5D_::UpEnumerator__5B_string_5D_ (const GGS__5B_string_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator__5B_string_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[string] generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__5B_string_5D_ ("[string]",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__5B_string_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_string_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_string_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_string_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS__5B_string_5D_::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS__5B_string_5D_ result ;
  const GGS__5B_string_5D_ * p = (const GGS__5B_string_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_string_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[string]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionForGeneration_2E_weak::objectCompare (const GGS_subscriptReadAccessExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_subscriptReadAccessExpressionForGeneration_2E_weak::GGS_subscriptReadAccessExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak & GGS_subscriptReadAccessExpressionForGeneration_2E_weak::operator = (const GGS_subscriptReadAccessExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak::GGS_subscriptReadAccessExpressionForGeneration_2E_weak (const GGS_subscriptReadAccessExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak GGS_subscriptReadAccessExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration_2E_weak::bang_subscriptReadAccessExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subscriptReadAccessExpressionForGeneration) ;
      result = GGS_subscriptReadAccessExpressionForGeneration ((cPtr_subscriptReadAccessExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration_2E_weak ("subscriptReadAccessExpressionForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscriptReadAccessExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak GGS_subscriptReadAccessExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration_2E_weak result ;
  const GGS_subscriptReadAccessExpressionForGeneration_2E_weak * p = (const GGS_subscriptReadAccessExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST_2E_weak::objectCompare (const GGS_classFuncExpressionAST_2E_weak & inOperand) const {
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

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak & GGS_classFuncExpressionAST_2E_weak::operator = (const GGS_classFuncExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak::GGS_classFuncExpressionAST_2E_weak (const GGS_classFuncExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak GGS_classFuncExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST_2E_weak::bang_classFuncExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionAST) ;
      result = GGS_classFuncExpressionAST ((cPtr_classFuncExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ("classFuncExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classFuncExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST_2E_weak GGS_classFuncExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST_2E_weak result ;
  const GGS_classFuncExpressionAST_2E_weak * p = (const GGS_classFuncExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration_2E_weak::objectCompare (const GGS_classFuncExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak & GGS_classFuncExpressionForGeneration_2E_weak::operator = (const GGS_classFuncExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (const GGS_classFuncExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::bang_classFuncExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionForGeneration) ;
      result = GGS_classFuncExpressionForGeneration ((cPtr_classFuncExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ("classFuncExpressionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classFuncExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  const GGS_classFuncExpressionForGeneration_2E_weak * p = (const GGS_classFuncExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

