#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap::cMapElement_setterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_methodKind & in_mKind,
                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                              const GALGAS_bool & in_mHasCompilerArgument,
                                              const GALGAS_methodQualifier & in_mQualifier,
                                              const GALGAS_string & in_mErrorMessage
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_setterMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_setterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_setterMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_setterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_setterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_setterMap * operand = (cMapElement_setterMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap::GALGAS_setterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap::GALGAS_setterMap (const GALGAS_setterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap & GALGAS_setterMap::operator = (const GALGAS_setterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::constructor_mapWithMapToOverride (const GALGAS_setterMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_setterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_methodKind & inArgument0,
                                            const GALGAS_formalParameterSignature & inArgument1,
                                            const GALGAS_bool & inArgument2,
                                            const GALGAS_methodQualifier & inArgument3,
                                            const GALGAS_string & inArgument4,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@setterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind inArgument0,
                                         GALGAS_formalParameterSignature inArgument1,
                                         GALGAS_bool inArgument2,
                                         GALGAS_methodQualifier inArgument3,
                                         GALGAS_string inArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_setterMap_searchKey = "the '%K' setter is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_methodKind & outArgument0,
                                         GALGAS_formalParameterSignature & outArgument1,
                                         GALGAS_bool & outArgument2,
                                         GALGAS_methodQualifier & outArgument3,
                                         GALGAS_string & outArgument4,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_setterMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_setterMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mHasCompilerArgument ;
    outArgument3 = p->mAttribute_mQualifier ;
    outArgument4 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                               GALGAS_methodKind inArgument0,
                                               GALGAS_formalParameterSignature inArgument1,
                                               GALGAS_bool inArgument2,
                                               GALGAS_methodQualifier inArgument3,
                                               GALGAS_string inArgument4
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_setterMap * p = NULL ;
  macroMyNew (p, cMapElement_setterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_setterMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_setterMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_setterMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_setterMap::getter_mQualifierForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_setterMap::getter_mErrorMessageForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                              GALGAS_string inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_setterMap::setter_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_setterMap * p = (cMapElement_setterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_setterMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_setterMap * GALGAS_setterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_setterMap * result = (cMapElement_setterMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_setterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_setterMap::cEnumerator_setterMap (const GALGAS_setterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap_2D_element cEnumerator_setterMap::current (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return GALGAS_setterMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_setterMap * p = (const cMapElement_setterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_setterMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @setterMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setterMap ("setterMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_setterMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_setterMap result ;
  const GALGAS_setterMap * p = (const GALGAS_setterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap::cMapElement_instanceMethodMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_methodKind & in_mKind,
                                                              const GALGAS_formalParameterSignature & in_mParameterList,
                                                              const GALGAS_location & in_mDeclarationLocation,
                                                              const GALGAS_bool & in_mHasCompilerArgument,
                                                              const GALGAS_methodQualifier & in_mQualifier,
                                                              const GALGAS_string & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mKind (in_mKind),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mDeclarationLocation (in_mDeclarationLocation),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument),
mAttribute_mQualifier (in_mQualifier),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_instanceMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mKind.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mDeclarationLocation.isValid () && mAttribute_mHasCompilerArgument.isValid () && mAttribute_mQualifier.isValid () && mAttribute_mErrorMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_instanceMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanceMethodMap (mAttribute_lkey, mAttribute_mKind, mAttribute_mParameterList, mAttribute_mDeclarationLocation, mAttribute_mHasCompilerArgument, mAttribute_mQualifier, mAttribute_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_instanceMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mAttribute_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclarationLocation" ":" ;
  mAttribute_mDeclarationLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mQualifier" ":" ;
  mAttribute_mQualifier.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessage" ":" ;
  mAttribute_mErrorMessage.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_instanceMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanceMethodMap * operand = (cMapElement_instanceMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (operand->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDeclarationLocation.objectCompare (operand->mAttribute_mDeclarationLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mQualifier.objectCompare (operand->mAttribute_mQualifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (operand->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap::GALGAS_instanceMethodMap (const GALGAS_instanceMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap & GALGAS_instanceMethodMap::operator = (const GALGAS_instanceMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::constructor_mapWithMapToOverride (const GALGAS_instanceMethodMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_instanceMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_methodKind & inArgument0,
                                                    const GALGAS_formalParameterSignature & inArgument1,
                                                    const GALGAS_location & inArgument2,
                                                    const GALGAS_bool & inArgument3,
                                                    const GALGAS_methodQualifier & inArgument4,
                                                    const GALGAS_string & inArgument5,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanceMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_methodKind inArgument0,
                                                 GALGAS_formalParameterSignature inArgument1,
                                                 GALGAS_location inArgument2,
                                                 GALGAS_bool inArgument3,
                                                 GALGAS_methodQualifier inArgument4,
                                                 GALGAS_string inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_instanceMethodMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' instance method is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchKey = "the '%K' instance method is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_methodKind & outArgument0,
                                                 GALGAS_formalParameterSignature & outArgument1,
                                                 GALGAS_location & outArgument2,
                                                 GALGAS_bool & outArgument3,
                                                 GALGAS_methodQualifier & outArgument4,
                                                 GALGAS_string & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanceMethodMap_searchInheritedKey = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::method_searchInheritedKey (GALGAS_lstring inKey,
                                                          GALGAS_methodKind & outArgument0,
                                                          GALGAS_formalParameterSignature & outArgument1,
                                                          GALGAS_location & outArgument2,
                                                          GALGAS_bool & outArgument3,
                                                          GALGAS_methodQualifier & outArgument4,
                                                          GALGAS_string & outArgument5,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_instanceMethodMap_searchInheritedKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    outArgument0 = p->mAttribute_mKind ;
    outArgument1 = p->mAttribute_mParameterList ;
    outArgument2 = p->mAttribute_mDeclarationLocation ;
    outArgument3 = p->mAttribute_mHasCompilerArgument ;
    outArgument4 = p->mAttribute_mQualifier ;
    outArgument5 = p->mAttribute_mErrorMessage ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind GALGAS_instanceMethodMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_instanceMethodMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_instanceMethodMap::getter_mDeclarationLocationForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mDeclarationLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_instanceMethodMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier GALGAS_instanceMethodMap::getter_mQualifierForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_methodQualifier result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mQualifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_instanceMethodMap::getter_mErrorMessageForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMKindForKey (GALGAS_methodKind inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mDeclarationLocation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mQualifier = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanceMethodMap::setter_setMErrorMessageForKey (GALGAS_string inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_instanceMethodMap * p = (cMapElement_instanceMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
    p->mAttribute_mErrorMessage = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanceMethodMap * GALGAS_instanceMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_instanceMethodMap * result = (cMapElement_instanceMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanceMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instanceMethodMap::cEnumerator_instanceMethodMap (const GALGAS_instanceMethodMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap_2D_element cEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return GALGAS_instanceMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mKind, p->mAttribute_mParameterList, p->mAttribute_mDeclarationLocation, p->mAttribute_mHasCompilerArgument, p->mAttribute_mQualifier, p->mAttribute_mErrorMessage) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodKind cEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mDeclarationLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodQualifier cEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mQualifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  const cMapElement_instanceMethodMap * p = (const cMapElement_instanceMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanceMethodMap) ;
  return p->mAttribute_mErrorMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instanceMethodMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanceMethodMap ("instanceMethodMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanceMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanceMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanceMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instanceMethodMap result ;
  const GALGAS_instanceMethodMap * p = (const GALGAS_instanceMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanceMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap::cMapElement_classMethodMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_formalParameterSignature & in_mParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mHasCompilerArgument (in_mHasCompilerArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_classMethodMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mParameterList.isValid () && mAttribute_mHasCompilerArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_classMethodMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMethodMap (mAttribute_lkey, mAttribute_mParameterList, mAttribute_mHasCompilerArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_classMethodMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mAttribute_mParameterList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasCompilerArgument" ":" ;
  mAttribute_mHasCompilerArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_classMethodMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMethodMap * operand = (cMapElement_classMethodMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (operand->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasCompilerArgument.objectCompare (operand->mAttribute_mHasCompilerArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap::GALGAS_classMethodMap (const GALGAS_classMethodMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap & GALGAS_classMethodMap::operator = (const GALGAS_classMethodMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::constructor_mapWithMapToOverride (const GALGAS_classMethodMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_classMethodMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_formalParameterSignature & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMethodMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_formalParameterSignature inArgument0,
                                              GALGAS_bool inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type proc is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_classMethodMap_searchKey = "the '%K' type proc is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_formalParameterSignature & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_classMethodMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    outArgument0 = p->mAttribute_mParameterList ;
    outArgument1 = p->mAttribute_mHasCompilerArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                    GALGAS_formalParameterSignature inArgument0,
                                                    GALGAS_bool inArgument1
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_classMethodMap * p = NULL ;
  macroMyNew (p, cMapElement_classMethodMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_classMethodMap::getter_mParameterListForKey (const GALGAS_string & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_classMethodMap::getter_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    result = p->mAttribute_mHasCompilerArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::setter_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classMethodMap::setter_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_classMethodMap * p = (cMapElement_classMethodMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMethodMap) ;
    p->mAttribute_mHasCompilerArgument = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_classMethodMap * GALGAS_classMethodMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_classMethodMap * result = (cMapElement_classMethodMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMethodMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_classMethodMap::cEnumerator_classMethodMap (const GALGAS_classMethodMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap_2D_element cEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return GALGAS_classMethodMap_2D_element (p->mAttribute_lkey, p->mAttribute_mParameterList, p->mAttribute_mHasCompilerArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  const cMapElement_classMethodMap * p = (const cMapElement_classMethodMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMethodMap) ;
  return p->mAttribute_mHasCompilerArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @classMethodMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMethodMap ("classMethodMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMethodMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_classMethodMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classMethodMap result ;
  const GALGAS_classMethodMap * p = (const GALGAS_classMethodMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@enumerationDescriptorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumerationDescriptorList : public cCollectionElement {
  public : GALGAS_enumerationDescriptorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                         const GALGAS_string & in_mEnumerationName
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                                            const GALGAS_string & in_mEnumerationName
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedType, in_mEnumerationName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumerationDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumerationDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationDescriptorList (mObject.mAttribute_mEnumeratedType, mObject.mAttribute_mEnumerationName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumerationDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedType" ":" ;
  mObject.mAttribute_mEnumeratedType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationName" ":" ;
  mObject.mAttribute_mEnumerationName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumerationDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationDescriptorList * operand = (cCollectionElement_enumerationDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList::GALGAS_enumerationDescriptorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                              const GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumerationDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumeratedType,
                                                                  const GALGAS_string & in_mEnumerationName
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (in_mEnumeratedType,
                                                               in_mEnumerationName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::setter_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::setter_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
      outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
      outOperand1 = p->mObject.mAttribute_mEnumerationName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::setter_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::setter_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedType ;
    outOperand1 = p->mObject.mAttribute_mEnumerationName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::add_operation (const GALGAS_enumerationDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::plusAssign_operation (const GALGAS_enumerationDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_enumerationDescriptorList::getter_mEnumeratedTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumeratedType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumerationDescriptorList::getter_mEnumerationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mAttribute_mEnumerationName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumerationDescriptorList::cEnumerator_enumerationDescriptorList (const GALGAS_enumerationDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList_2D_element cEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumeratedType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mAttribute_mEnumerationName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @enumerationDescriptorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList ("enumerationDescriptorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList result ;
  const GALGAS_enumerationDescriptorList * p = (const GALGAS_enumerationDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum::GALGAS_predefinedTypeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_uint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_sint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_char ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_double ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_string ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_stringset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bool ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_binaryset ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_function ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_location ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_type ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_object ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_data ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_filewrapper ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_application ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_bigint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  result.mEnum = kEnum_predefined_5F_timer ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_predefinedTypeKindEnum [20] = {
  "(not built)",
  "predefined_uint",
  "predefined_uint64",
  "predefined_sint",
  "predefined_sint64",
  "predefined_char",
  "predefined_double",
  "predefined_string",
  "predefined_stringset",
  "predefined_bool",
  "predefined_binaryset",
  "predefined_function",
  "predefined_location",
  "predefined_type",
  "predefined_object",
  "predefined_data",
  "predefined_filewrapper",
  "predefined_application",
  "predefined_bigint",
  "predefined_timer"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_stringset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_stringset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_bool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bool == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_binaryset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_binaryset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_function (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_location (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_location == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_type == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_object (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_object == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_data (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_data == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_filewrapper (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_filewrapper == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_application (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_application == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::getter_isPredefined_5F_timer (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_timer == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_predefinedTypeKindEnum::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @predefinedTypeKindEnum: " << gEnumNameArrayFor_predefinedTypeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_predefinedTypeKindEnum::objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeKindEnum ("predefinedTypeKindEnum",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeKindEnum::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeKindEnum result ;
  const GALGAS_predefinedTypeKindEnum * p = (const GALGAS_predefinedTypeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum::GALGAS_typeKindEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_classType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_classType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_enumType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_enumType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_sortedListType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sortedListType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_uniqueMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_uniqueMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_mapProxyType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapProxyType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_listMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listMapType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_graphType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_graphType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_externType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_externType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_arrayType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_arrayType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::constructor_predefinedType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_predefinedType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_typeKindEnum [14] = {
  "(not built)",
  "classType",
  "enumType",
  "listType",
  "sortedListType",
  "mapType",
  "uniqueMapType",
  "mapProxyType",
  "listMapType",
  "structType",
  "graphType",
  "externType",
  "arrayType",
  "predefinedType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isUniqueMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uniqueMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isMapProxyType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapProxyType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::getter_isPredefinedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefinedType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindEnum::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @typeKindEnum: " << gEnumNameArrayFor_typeKindEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindEnum::objectCompare (const GALGAS_typeKindEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindEnum type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_typeKindEnum::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  const GALGAS_typeKindEnum * p = (const GALGAS_typeKindEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@typeKindEnum kind'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_kind (const GALGAS_typeKindEnum & inObject,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKindEnum::kNotBuilt:
    break ;
  case GALGAS_typeKindEnum::kEnum_classType:
    {
      result_outResult = GALGAS_string ("class") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("enumeration") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listType:
    {
      result_outResult = GALGAS_string ("list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_sortedListType:
    {
      result_outResult = GALGAS_string ("sorted list") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_mapType:
    {
      result_outResult = GALGAS_string ("map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_uniqueMapType:
    {
      result_outResult = GALGAS_string ("unique map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_mapProxyType:
    {
      result_outResult = GALGAS_string ("map proxy") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_listMapType:
    {
      result_outResult = GALGAS_string ("list map") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_structType:
    {
      result_outResult = GALGAS_string ("struct") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_graphType:
    {
      result_outResult = GALGAS_string ("graph") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_predefinedType:
    {
      result_outResult = GALGAS_string ("predefined") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_arrayType:
    {
      result_outResult = GALGAS_string ("array") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_externType:
    {
      result_outResult = GALGAS_string ("extern") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap::cMapElement_attributeMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeType
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAttributeType (in_mAttributeType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_attributeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_attributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_attributeMap (mAttribute_lkey, mAttribute_mAttributeType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_attributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeType" ":" ;
  mAttribute_mAttributeType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_attributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_attributeMap * operand = (cMapElement_attributeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeType.objectCompare (operand->mAttribute_mAttributeType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap::GALGAS_attributeMap (const GALGAS_attributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap & GALGAS_attributeMap::operator = (const GALGAS_attributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::constructor_mapWithMapToOverride (const GALGAS_attributeMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_attributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@attributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::setter_insertKey (GALGAS_lstring inKey,
                                            GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * p = NULL ;
  macroMyNew (p, cMapElement_attributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_attributeMap_searchKey = "the '%K' attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_attributeMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    outArgument0 = p->mAttribute_mAttributeType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeMap::getter_mAttributeTypeForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    result = p->mAttribute_mAttributeType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeMap::setter_setMAttributeTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_attributeMap * p = (cMapElement_attributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_attributeMap) ;
    p->mAttribute_mAttributeType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_attributeMap * GALGAS_attributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_attributeMap * result = (cMapElement_attributeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_attributeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_attributeMap::cEnumerator_attributeMap (const GALGAS_attributeMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap_2D_element cEnumerator_attributeMap::current (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return GALGAS_attributeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAttributeType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_attributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_attributeMap::current_mAttributeType (LOCATION_ARGS) const {
  const cMapElement_attributeMap * p = (const cMapElement_attributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_attributeMap) ;
  return p->mAttribute_mAttributeType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @attributeMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeMap ("attributeMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_attributeMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_attributeMap result ;
  const GALGAS_attributeMap * p = (const GALGAS_attributeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind::GALGAS_headerKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_noHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_noHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_oneHeader (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_oneHeader ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::constructor_twoHeaders (UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  result.mEnum = kEnum_twoHeaders ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::getter_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::getter_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::getter_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_twoHeaders == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_headerKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @headerKind: " << gEnumNameArrayFor_headerKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_headerKind::objectCompare (const GALGAS_headerKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @headerKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_headerKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  const GALGAS_headerKind * p = (const GALGAS_headerKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_headerKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap::cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mIndex,
                                                            const GALGAS_unifiedTypeMapProxyList & in_mAssociatedTypeList
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mAssociatedTypeList (in_mAssociatedTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constantIndexMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mAssociatedTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constantIndexMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantIndexMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mAssociatedTypeList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constantIndexMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedTypeList" ":" ;
  mAttribute_mAssociatedTypeList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constantIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantIndexMap * operand = (cMapElement_constantIndexMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedTypeList.objectCompare (operand->mAttribute_mAssociatedTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap::GALGAS_constantIndexMap (const GALGAS_constantIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap & GALGAS_constantIndexMap::operator = (const GALGAS_constantIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::constructor_mapWithMapToOverride (const GALGAS_constantIndexMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_constantIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_unifiedTypeMapProxyList & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_uint inArgument0,
                                                GALGAS_unifiedTypeMapProxyList inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * p = NULL ;
  macroMyNew (p, cMapElement_constantIndexMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constantIndexMap_searchKey = "the '%K' constant is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_unifiedTypeMapProxyList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_constantIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mAssociatedTypeList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constantIndexMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap::getter_mAssociatedTypeListForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) attributes ;
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    result = p->mAttribute_mAssociatedTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantIndexMap::setter_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMapProxyList inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_constantIndexMap * p = (cMapElement_constantIndexMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantIndexMap) ;
    p->mAttribute_mAssociatedTypeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantIndexMap * GALGAS_constantIndexMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantIndexMap * result = (cMapElement_constantIndexMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantIndexMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantIndexMap::cEnumerator_constantIndexMap (const GALGAS_constantIndexMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap_2D_element cEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return GALGAS_constantIndexMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mAssociatedTypeList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  const cMapElement_constantIndexMap * p = (const cMapElement_constantIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantIndexMap) ;
  return p->mAttribute_mAssociatedTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @constantIndexMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantIndexMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_constantIndexMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constantIndexMap result ;
  const GALGAS_constantIndexMap * p = (const GALGAS_constantIndexMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_bool & in_mIsConcrete,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperType,
                                                        const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                                        const GALGAS_bool & in_mSupportCollectionValue,
                                                        const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                        const GALGAS_attributeMap & in_mAttributeMap,
                                                        const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                        const GALGAS_constructorMap & in_mConstructorMap,
                                                        const GALGAS_getterMap & in_mGetterMap,
                                                        const GALGAS_setterMap & in_mSetterMap,
                                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                                        const GALGAS_uint & in_mHandledOperatorFlags,
                                                        const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                                        const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                                        const GALGAS_enumConstantList & in_mEnumConstantList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                                        const GALGAS_mapSearchMethodListAST & in_mMapProxySearchConstructorList,
                                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeForEnumeratedElement,
                                                        const GALGAS_string & in_mDefaultConstructorName,
                                                        const GALGAS_string & in_mHeaderFileName,
                                                        const GALGAS_headerKind & in_mHeaderKind
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mIsConcrete (in_mIsConcrete),
mAttribute_mSuperType (in_mSuperType),
mAttribute_mTypeKindEnum (in_mTypeKindEnum),
mAttribute_mSupportCollectionValue (in_mSupportCollectionValue),
mAttribute_mAllTypedAttributeList (in_mAllTypedAttributeList),
mAttribute_mAttributeMap (in_mAttributeMap),
mAttribute_mCurrentTypedAttributeList (in_mCurrentTypedAttributeList),
mAttribute_mConstructorMap (in_mConstructorMap),
mAttribute_mGetterMap (in_mGetterMap),
mAttribute_mSetterMap (in_mSetterMap),
mAttribute_mInstanceMethodMap (in_mInstanceMethodMap),
mAttribute_mClassMethodMap (in_mClassMethodMap),
mAttribute_mEnumerationDescriptor (in_mEnumerationDescriptor),
mAttribute_mHandledOperatorFlags (in_mHandledOperatorFlags),
mAttribute_mAddAssignOperatorArguments (in_mAddAssignOperatorArguments),
mAttribute_mEnumConstantMap (in_mEnumConstantMap),
mAttribute_mEnumConstantList (in_mEnumConstantList),
mAttribute_mMapSearchMethodList (in_mMapSearchMethodList),
mAttribute_mMapProxySearchConstructorList (in_mMapProxySearchConstructorList),
mAttribute_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile),
mAttribute_mTypeForEnumeratedElement (in_mTypeForEnumeratedElement),
mAttribute_mDefaultConstructorName (in_mDefaultConstructorName),
mAttribute_mHeaderFileName (in_mHeaderFileName),
mAttribute_mHeaderKind (in_mHeaderKind) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mIsConcrete.isValid () && mAttribute_mSuperType.isValid () && mAttribute_mTypeKindEnum.isValid () && mAttribute_mSupportCollectionValue.isValid () && mAttribute_mAllTypedAttributeList.isValid () && mAttribute_mAttributeMap.isValid () && mAttribute_mCurrentTypedAttributeList.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mGetterMap.isValid () && mAttribute_mSetterMap.isValid () && mAttribute_mInstanceMethodMap.isValid () && mAttribute_mClassMethodMap.isValid () && mAttribute_mEnumerationDescriptor.isValid () && mAttribute_mHandledOperatorFlags.isValid () && mAttribute_mAddAssignOperatorArguments.isValid () && mAttribute_mEnumConstantMap.isValid () && mAttribute_mEnumConstantList.isValid () && mAttribute_mMapSearchMethodList.isValid () && mAttribute_mMapProxySearchConstructorList.isValid () && mAttribute_mGenerateHeaderInSeparateFile.isValid () && mAttribute_mTypeForEnumeratedElement.isValid () && mAttribute_mDefaultConstructorName.isValid () && mAttribute_mHeaderFileName.isValid () && mAttribute_mHeaderKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mIsConcrete, mAttribute_mSuperType, mAttribute_mTypeKindEnum, mAttribute_mSupportCollectionValue, mAttribute_mAllTypedAttributeList, mAttribute_mAttributeMap, mAttribute_mCurrentTypedAttributeList, mAttribute_mConstructorMap, mAttribute_mGetterMap, mAttribute_mSetterMap, mAttribute_mInstanceMethodMap, mAttribute_mClassMethodMap, mAttribute_mEnumerationDescriptor, mAttribute_mHandledOperatorFlags, mAttribute_mAddAssignOperatorArguments, mAttribute_mEnumConstantMap, mAttribute_mEnumConstantList, mAttribute_mMapSearchMethodList, mAttribute_mMapProxySearchConstructorList, mAttribute_mGenerateHeaderInSeparateFile, mAttribute_mTypeForEnumeratedElement, mAttribute_mDefaultConstructorName, mAttribute_mHeaderFileName, mAttribute_mHeaderKind COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConcrete" ":" ;
  mAttribute_mIsConcrete.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperType" ":" ;
  mAttribute_mSuperType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKindEnum" ":" ;
  mAttribute_mTypeKindEnum.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSupportCollectionValue" ":" ;
  mAttribute_mSupportCollectionValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAllTypedAttributeList" ":" ;
  mAttribute_mAllTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeMap" ":" ;
  mAttribute_mAttributeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCurrentTypedAttributeList" ":" ;
  mAttribute_mCurrentTypedAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstructorMap" ":" ;
  mAttribute_mConstructorMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGetterMap" ":" ;
  mAttribute_mGetterMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSetterMap" ":" ;
  mAttribute_mSetterMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstanceMethodMap" ":" ;
  mAttribute_mInstanceMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassMethodMap" ":" ;
  mAttribute_mClassMethodMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumerationDescriptor" ":" ;
  mAttribute_mEnumerationDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandledOperatorFlags" ":" ;
  mAttribute_mHandledOperatorFlags.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddAssignOperatorArguments" ":" ;
  mAttribute_mAddAssignOperatorArguments.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantMap" ":" ;
  mAttribute_mEnumConstantMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mAttribute_mEnumConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapSearchMethodList" ":" ;
  mAttribute_mMapSearchMethodList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMapProxySearchConstructorList" ":" ;
  mAttribute_mMapProxySearchConstructorList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGenerateHeaderInSeparateFile" ":" ;
  mAttribute_mGenerateHeaderInSeparateFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeForEnumeratedElement" ":" ;
  mAttribute_mTypeForEnumeratedElement.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultConstructorName" ":" ;
  mAttribute_mDefaultConstructorName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderFileName" ":" ;
  mAttribute_mHeaderFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderKind" ":" ;
  mAttribute_mHeaderKind.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (operand->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConcrete.objectCompare (operand->mAttribute_mIsConcrete) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSuperType.objectCompare (operand->mAttribute_mSuperType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeKindEnum.objectCompare (operand->mAttribute_mTypeKindEnum) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSupportCollectionValue.objectCompare (operand->mAttribute_mSupportCollectionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAllTypedAttributeList.objectCompare (operand->mAttribute_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeMap.objectCompare (operand->mAttribute_mAttributeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCurrentTypedAttributeList.objectCompare (operand->mAttribute_mCurrentTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorMap.objectCompare (operand->mAttribute_mConstructorMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGetterMap.objectCompare (operand->mAttribute_mGetterMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSetterMap.objectCompare (operand->mAttribute_mSetterMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstanceMethodMap.objectCompare (operand->mAttribute_mInstanceMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mClassMethodMap.objectCompare (operand->mAttribute_mClassMethodMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationDescriptor.objectCompare (operand->mAttribute_mEnumerationDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHandledOperatorFlags.objectCompare (operand->mAttribute_mHandledOperatorFlags) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddAssignOperatorArguments.objectCompare (operand->mAttribute_mAddAssignOperatorArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantMap.objectCompare (operand->mAttribute_mEnumConstantMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantList.objectCompare (operand->mAttribute_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapSearchMethodList.objectCompare (operand->mAttribute_mMapSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapProxySearchConstructorList.objectCompare (operand->mAttribute_mMapProxySearchConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGenerateHeaderInSeparateFile.objectCompare (operand->mAttribute_mGenerateHeaderInSeparateFile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeForEnumeratedElement.objectCompare (operand->mAttribute_mTypeForEnumeratedElement) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultConstructorName.objectCompare (operand->mAttribute_mDefaultConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderFileName.objectCompare (operand->mAttribute_mHeaderFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderKind.objectCompare (operand->mAttribute_mHeaderKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap (kMapAutomatonNoIssue, "") {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                                                              *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_bool inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                              GALGAS_typeKindEnum inArgument3,
                                              GALGAS_bool inArgument4,
                                              GALGAS_typedPropertyList inArgument5,
                                              GALGAS_attributeMap inArgument6,
                                              GALGAS_typedPropertyList inArgument7,
                                              GALGAS_constructorMap inArgument8,
                                              GALGAS_getterMap inArgument9,
                                              GALGAS_setterMap inArgument10,
                                              GALGAS_instanceMethodMap inArgument11,
                                              GALGAS_classMethodMap inArgument12,
                                              GALGAS_enumerationDescriptorList inArgument13,
                                              GALGAS_uint inArgument14,
                                              GALGAS_functionSignature inArgument15,
                                              GALGAS_constantIndexMap inArgument16,
                                              GALGAS_enumConstantList inArgument17,
                                              GALGAS_mapSearchMethodListAST inArgument18,
                                              GALGAS_mapSearchMethodListAST inArgument19,
                                              GALGAS_bool inArgument20,
                                              GALGAS_unifiedTypeMap_2D_proxy inArgument21,
                                              GALGAS_string inArgument22,
                                              GALGAS_string inArgument23,
                                              GALGAS_headerKind inArgument24,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10, inArgument11, inArgument12, inArgument13, inArgument14, inArgument15, inArgument16, inArgument17, inArgument18, inArgument19, inArgument20, inArgument21, inArgument22, inArgument23, inArgument24 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' type has been already declared in %L" ;
  insertInSharedMap (attributes,
                     inCompiler,
                     0,
                     NULL,
                     kInsertErrorMessage
                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '@%K' type is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_bool & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              GALGAS_typeKindEnum & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_typedPropertyList & outArgument5,
                                              GALGAS_attributeMap & outArgument6,
                                              GALGAS_typedPropertyList & outArgument7,
                                              GALGAS_constructorMap & outArgument8,
                                              GALGAS_getterMap & outArgument9,
                                              GALGAS_setterMap & outArgument10,
                                              GALGAS_instanceMethodMap & outArgument11,
                                              GALGAS_classMethodMap & outArgument12,
                                              GALGAS_enumerationDescriptorList & outArgument13,
                                              GALGAS_uint & outArgument14,
                                              GALGAS_functionSignature & outArgument15,
                                              GALGAS_constantIndexMap & outArgument16,
                                              GALGAS_enumConstantList & outArgument17,
                                              GALGAS_mapSearchMethodListAST & outArgument18,
                                              GALGAS_mapSearchMethodListAST & outArgument19,
                                              GALGAS_bool & outArgument20,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument21,
                                              GALGAS_string & outArgument22,
                                              GALGAS_string & outArgument23,
                                              GALGAS_headerKind & outArgument24,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
    outArgument10.drop () ;
    outArgument11.drop () ;
    outArgument12.drop () ;
    outArgument13.drop () ;
    outArgument14.drop () ;
    outArgument15.drop () ;
    outArgument16.drop () ;
    outArgument17.drop () ;
    outArgument18.drop () ;
    outArgument19.drop () ;
    outArgument20.drop () ;
    outArgument21.drop () ;
    outArgument22.drop () ;
    outArgument23.drop () ;
    outArgument24.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mAttribute_mIsPredefined ;
    outArgument1 = p->mAttribute_mIsConcrete ;
    outArgument2 = p->mAttribute_mSuperType ;
    outArgument3 = p->mAttribute_mTypeKindEnum ;
    outArgument4 = p->mAttribute_mSupportCollectionValue ;
    outArgument5 = p->mAttribute_mAllTypedAttributeList ;
    outArgument6 = p->mAttribute_mAttributeMap ;
    outArgument7 = p->mAttribute_mCurrentTypedAttributeList ;
    outArgument8 = p->mAttribute_mConstructorMap ;
    outArgument9 = p->mAttribute_mGetterMap ;
    outArgument10 = p->mAttribute_mSetterMap ;
    outArgument11 = p->mAttribute_mInstanceMethodMap ;
    outArgument12 = p->mAttribute_mClassMethodMap ;
    outArgument13 = p->mAttribute_mEnumerationDescriptor ;
    outArgument14 = p->mAttribute_mHandledOperatorFlags ;
    outArgument15 = p->mAttribute_mAddAssignOperatorArguments ;
    outArgument16 = p->mAttribute_mEnumConstantMap ;
    outArgument17 = p->mAttribute_mEnumConstantList ;
    outArgument18 = p->mAttribute_mMapSearchMethodList ;
    outArgument19 = p->mAttribute_mMapProxySearchConstructorList ;
    outArgument20 = p->mAttribute_mGenerateHeaderInSeparateFile ;
    outArgument21 = p->mAttribute_mTypeForEnumeratedElement ;
    outArgument22 = p->mAttribute_mDefaultConstructorName ;
    outArgument23 = p->mAttribute_mHeaderFileName ;
    outArgument24 = p->mAttribute_mHeaderKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_mIsConcreteForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mIsConcrete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::getter_mSuperTypeForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSuperType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum GALGAS_unifiedTypeMap::getter_mTypeKindEnumForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKindEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKindEnum ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_mSupportCollectionValueForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSupportCollectionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::getter_mAllTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAllTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap GALGAS_unifiedTypeMap::getter_mAttributeMapForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_attributeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAttributeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::getter_mCurrentTypedAttributeListForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typedPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mCurrentTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_unifiedTypeMap::getter_mConstructorMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constructorMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mConstructorMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap GALGAS_unifiedTypeMap::getter_mGetterMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_getterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mGetterMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_unifiedTypeMap::getter_mSetterMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_setterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mSetterMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap::getter_mInstanceMethodMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_instanceMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mInstanceMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap GALGAS_unifiedTypeMap::getter_mClassMethodMapForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_classMethodMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mClassMethodMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap::getter_mEnumerationDescriptorForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumerationDescriptorList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumerationDescriptor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMap::getter_mHandledOperatorFlagsForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHandledOperatorFlags ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_unifiedTypeMap::getter_mAddAssignOperatorArgumentsForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mAddAssignOperatorArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap GALGAS_unifiedTypeMap::getter_mEnumConstantMapForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_constantIndexMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_unifiedTypeMap::getter_mEnumConstantListForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_enumConstantList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumConstantList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::getter_mMapSearchMethodListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::getter_mMapProxySearchConstructorListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mMapProxySearchConstructorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::getter_mGenerateHeaderInSeparateFileForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mGenerateHeaderInSeparateFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::getter_mTypeForEnumeratedElementForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeForEnumeratedElement ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::getter_mDefaultConstructorNameForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mDefaultConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_unifiedTypeMap::getter_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind GALGAS_unifiedTypeMap::getter_mHeaderKindForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_headerKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mHeaderKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsPredefined = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMIsConcreteForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mIsConcrete = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMSuperTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSuperType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMTypeKindEnumForKey (GALGAS_typeKindEnum inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeKindEnum = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMSupportCollectionValueForKey (GALGAS_bool inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSupportCollectionValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMAllTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAllTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMAttributeMapForKey (GALGAS_attributeMap inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAttributeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMCurrentTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mCurrentTypedAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mConstructorMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMGetterMapForKey (GALGAS_getterMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mGetterMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMSetterMapForKey (GALGAS_setterMap inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mSetterMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMInstanceMethodMapForKey (GALGAS_instanceMethodMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mInstanceMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMClassMethodMapForKey (GALGAS_classMethodMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mClassMethodMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMEnumerationDescriptorForKey (GALGAS_enumerationDescriptorList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumerationDescriptor = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMHandledOperatorFlagsForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHandledOperatorFlags = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMAddAssignOperatorArgumentsForKey (GALGAS_functionSignature inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mAddAssignOperatorArguments = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMEnumConstantMapForKey (GALGAS_constantIndexMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMEnumConstantListForKey (GALGAS_enumConstantList inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumConstantList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMMapSearchMethodListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapSearchMethodList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMMapProxySearchConstructorListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mMapProxySearchConstructorList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMGenerateHeaderInSeparateFileForKey (GALGAS_bool inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mGenerateHeaderInSeparateFile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMTypeForEnumeratedElementForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeForEnumeratedElement = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMDefaultConstructorNameForKey (GALGAS_string inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mDefaultConstructorName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderFileName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::setter_setMHeaderKindForKey (GALGAS_headerKind inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mHeaderKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mIsConcrete (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mIsConcrete ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mSuperType (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSuperType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindEnum cEnumerator_unifiedTypeMap::current_mTypeKindEnum (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeKindEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mSupportCollectionValue (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSupportCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mAllTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAllTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeMap cEnumerator_unifiedTypeMap::current_mAttributeMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cEnumerator_unifiedTypeMap::current_mCurrentTypedAttributeList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mCurrentTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap cEnumerator_unifiedTypeMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getterMap cEnumerator_unifiedTypeMap::current_mGetterMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mGetterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap cEnumerator_unifiedTypeMap::current_mSetterMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mSetterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap cEnumerator_unifiedTypeMap::current_mInstanceMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mInstanceMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classMethodMap cEnumerator_unifiedTypeMap::current_mClassMethodMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mClassMethodMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList cEnumerator_unifiedTypeMap::current_mEnumerationDescriptor (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumerationDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_unifiedTypeMap::current_mHandledOperatorFlags (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHandledOperatorFlags ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_unifiedTypeMap::current_mAddAssignOperatorArguments (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mAddAssignOperatorArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantIndexMap cEnumerator_unifiedTypeMap::current_mEnumConstantMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList cEnumerator_unifiedTypeMap::current_mEnumConstantList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapSearchMethodList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cEnumerator_unifiedTypeMap::current_mMapProxySearchConstructorList (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mMapProxySearchConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_unifiedTypeMap::current_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mGenerateHeaderInSeparateFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_unifiedTypeMap::current_mTypeForEnumeratedElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeForEnumeratedElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mDefaultConstructorName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mDefaultConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_unifiedTypeMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_headerKind cEnumerator_unifiedTypeMap::current_mHeaderKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mHeaderKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_predefinedTypeAST::objectCompare (const GALGAS_predefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_predefinedTypeAST::getter_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_predefinedTypeAST * p = (const cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    result = p->mAttribute_mPredefinedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_predefinedTypeAST::getter_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_predefinedTypeKindEnum result ;
  if (NULL != mObjectPtr) {
    const cPtr_predefinedTypeAST * p = (const cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum cPtr_predefinedTypeAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @predefinedTypeAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mPredefinedTypeName (in_mPredefinedTypeName),
mAttribute_mKind (in_mKind) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @predefinedTypeAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeAST GALGAS_predefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_predefinedTypeAST result ;
  const GALGAS_predefinedTypeAST * p = (const GALGAS_predefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_predefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_applicationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationPredefinedTypeAST * p = (const cPtr_applicationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_applicationPredefinedTypeAST::objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_applicationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @applicationPredefinedTypeAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@applicationPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @applicationPredefinedTypeAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationPredefinedTypeAST GALGAS_applicationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_applicationPredefinedTypeAST result ;
  const GALGAS_applicationPredefinedTypeAST * p = (const GALGAS_applicationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_applicationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("applicationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bigintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bigintPredefinedTypeAST * p = (const cPtr_bigintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bigintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bigintPredefinedTypeAST::objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bigintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @bigintPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@bigintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bigintPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintPredefinedTypeAST GALGAS_bigintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bigintPredefinedTypeAST result ;
  const GALGAS_bigintPredefinedTypeAST * p = (const GALGAS_bigintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectPredefinedTypeAST * p = (const cPtr_objectPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectPredefinedTypeAST::objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (const cPtr_objectPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_objectPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @objectPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectPredefinedTypeAST::cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

void cPtr_objectPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@objectPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @objectPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST ("objectPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectPredefinedTypeAST GALGAS_objectPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_objectPredefinedTypeAST result ;
  const GALGAS_objectPredefinedTypeAST * p = (const GALGAS_objectPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperPredefinedTypeAST * p = (const cPtr_filewrapperPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperPredefinedTypeAST::objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                          const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @filewrapperPredefinedTypeAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

void cPtr_filewrapperPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@filewrapperPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @filewrapperPredefinedTypeAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ("filewrapperPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperPredefinedTypeAST GALGAS_filewrapperPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperPredefinedTypeAST result ;
  const GALGAS_filewrapperPredefinedTypeAST * p = (const GALGAS_filewrapperPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_binarysetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binarysetPredefinedTypeAST * p = (const cPtr_binarysetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binarysetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_binarysetPredefinedTypeAST::objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binarysetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @binarysetPredefinedTypeAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@binarysetPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @binarysetPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetPredefinedTypeAST GALGAS_binarysetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binarysetPredefinedTypeAST result ;
  const GALGAS_binarysetPredefinedTypeAST * p = (const GALGAS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolPredefinedTypeAST * p = (const cPtr_boolPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolPredefinedTypeAST::objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @boolPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @boolPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolPredefinedTypeAST GALGAS_boolPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolPredefinedTypeAST result ;
  const GALGAS_boolPredefinedTypeAST * p = (const GALGAS_boolPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uintPredefinedTypeAST * p = (const cPtr_uintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uintPredefinedTypeAST::objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @uintPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @uintPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  const GALGAS_uintPredefinedTypeAST * p = (const GALGAS_uintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_PredefinedTypeAST * p = (const cPtr_uint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @uint64PredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

void cPtr_uint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@uint64PredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @uint64PredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  const GALGAS_uint_36__34_PredefinedTypeAST * p = (const GALGAS_uint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sintPredefinedTypeAST * p = (const cPtr_sintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sintPredefinedTypeAST::objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sintPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @sintPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sintPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sintPredefinedTypeAST GALGAS_sintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sintPredefinedTypeAST result ;
  const GALGAS_sintPredefinedTypeAST * p = (const GALGAS_sintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_PredefinedTypeAST * p = (const cPtr_sint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_PredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sint_36__34_PredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sint64PredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

void cPtr_sint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sint64PredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_PredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sint64PredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ("sint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  const GALGAS_sint_36__34_PredefinedTypeAST * p = (const GALGAS_sint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_charPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_charPredefinedTypeAST * p = (const cPtr_charPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_charPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_charPredefinedTypeAST::objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_charPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @charPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@charPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @charPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_charPredefinedTypeAST GALGAS_charPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_charPredefinedTypeAST result ;
  const GALGAS_charPredefinedTypeAST * p = (const GALGAS_charPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_charPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("charPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_doublePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doublePredefinedTypeAST * p = (const cPtr_doublePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doublePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_doublePredefinedTypeAST::objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doublePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @doublePredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

void cPtr_doublePredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@doublePredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_doublePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @doublePredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_doublePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doublePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  const GALGAS_doublePredefinedTypeAST * p = (const GALGAS_doublePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doublePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringPredefinedTypeAST * p = (const cPtr_stringPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringPredefinedTypeAST::objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @stringPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

void cPtr_stringPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@stringPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @stringPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringPredefinedTypeAST ("stringPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  const GALGAS_stringPredefinedTypeAST * p = (const GALGAS_stringPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_locationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_locationPredefinedTypeAST * p = (const cPtr_locationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_locationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_locationPredefinedTypeAST::objectCompare (const GALGAS_locationPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (const cPtr_locationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_locationPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_locationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @locationPredefinedTypeAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_locationPredefinedTypeAST::cPtr_locationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_locationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

void cPtr_locationPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@locationPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_locationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_locationPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @locationPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationPredefinedTypeAST ("locationPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_locationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_locationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  const GALGAS_locationPredefinedTypeAST * p = (const GALGAS_locationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringsetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringsetPredefinedTypeAST * p = (const cPtr_stringsetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringsetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringsetPredefinedTypeAST::objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringsetPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringsetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @stringsetPredefinedTypeAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringsetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

void cPtr_stringsetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@stringsetPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringsetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringsetPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @stringsetPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ("stringsetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringsetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringsetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringsetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  const GALGAS_stringsetPredefinedTypeAST * p = (const GALGAS_stringsetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringsetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPredefinedTypeAST * p = (const cPtr_functionPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionPredefinedTypeAST::objectCompare (const GALGAS_functionPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (const cPtr_functionPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @functionPredefinedTypeAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionPredefinedTypeAST::cPtr_functionPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

void cPtr_functionPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPredefinedTypeAST ("functionPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  const GALGAS_functionPredefinedTypeAST * p = (const GALGAS_functionPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typePredefinedTypeAST * p = (const cPtr_typePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typePredefinedTypeAST::objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typePredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @typePredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

void cPtr_typePredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@typePredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typePredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typePredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePredefinedTypeAST ("typePredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  const GALGAS_typePredefinedTypeAST * p = (const GALGAS_typePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_dataPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dataPredefinedTypeAST * p = (const cPtr_dataPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dataPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_dataPredefinedTypeAST::objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dataPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @dataPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

void cPtr_dataPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dataPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_dataPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @dataPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  const GALGAS_dataPredefinedTypeAST * p = (const GALGAS_dataPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_timerPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_timerPredefinedTypeAST * p = (const cPtr_timerPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_timerPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_timerPredefinedTypeAST::objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                              const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_timerPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @timerPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_string & in_mPredefinedTypeName,
                                                          const GALGAS_predefinedTypeKindEnum & in_mKind
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

void cPtr_timerPredefinedTypeAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@timerPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_timerPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @timerPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  const GALGAS_timerPredefinedTypeAST * p = (const GALGAS_timerPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timerPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@predefinedTypeAST getConstructorMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getConstructorMap> gExtensionMethodTable_predefinedTypeAST_getConstructorMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getConstructorMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getConstructorMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getConstructorMap (const cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_constructorMap & out_outConstructorMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outConstructorMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getConstructorMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getConstructorMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getConstructorMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getConstructorMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getConstructorMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outConstructorMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_constructorMap & outArgument_outConstructorMap,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outConstructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 434)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionMethod_predefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getConstructorMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getConstructorMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getConstructorMap (defineExtensionMethod_predefinedTypeAST_getConstructorMap,
                                                                freeExtensionMethod_predefinedTypeAST_getConstructorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getGetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getGetterMap> gExtensionMethodTable_predefinedTypeAST_getGetterMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getGetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getGetterMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getGetterMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getGetterMap (const cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_getterMap & out_outGetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outGetterMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getGetterMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getGetterMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getGetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getGetterMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getGetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getGetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outGetterMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                            GALGAS_getterMap & outArgument_outGetterMap,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGetterMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 442)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                     extensionMethod_predefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getGetterMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getGetterMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getGetterMap (defineExtensionMethod_predefinedTypeAST_getGetterMap,
                                                           freeExtensionMethod_predefinedTypeAST_getGetterMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@predefinedTypeAST getSetterMap'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getSetterMap> gExtensionMethodTable_predefinedTypeAST_getSetterMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getSetterMap (const int32_t inClassIndex,
                                        extensionMethodSignature_predefinedTypeAST_getSetterMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getSetterMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getSetterMap (const cPtr_predefinedTypeAST * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_setterMap & out_outSetterMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outSetterMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getSetterMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getSetterMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getSetterMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getSetterMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getSetterMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getSetterMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outSetterMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                            GALGAS_setterMap & outArgument_outSetterMap,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 450)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                     extensionMethod_predefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getSetterMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getSetterMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getSetterMap (defineExtensionMethod_predefinedTypeAST_getSetterMap,
                                                           freeExtensionMethod_predefinedTypeAST_getSetterMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@predefinedTypeAST getInstanceMethodMap'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap> gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getInstanceMethodMap (const int32_t inClassIndex,
                                                extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getInstanceMethodMap (const cPtr_predefinedTypeAST * inObject,
                                               GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                               GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getInstanceMethodMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                    GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 458)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                             extensionMethod_predefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getInstanceMethodMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getInstanceMethodMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_predefinedTypeAST_getInstanceMethodMap,
                                                                   freeExtensionMethod_predefinedTypeAST_getInstanceMethodMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@predefinedTypeAST getClassMethodMap'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getClassMethodMap> gExtensionMethodTable_predefinedTypeAST_getClassMethodMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getClassMethodMap (const int32_t inClassIndex,
                                             extensionMethodSignature_predefinedTypeAST_getClassMethodMap inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getClassMethodMap (const cPtr_predefinedTypeAST * inObject,
                                            GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                            GALGAS_classMethodMap & out_outClassMethodMap,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getClassMethodMap f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getClassMethodMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getClassMethodMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypes.galgas", 466)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionMethod_predefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getClassMethodMap (void) {
  gExtensionMethodTable_predefinedTypeAST_getClassMethodMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getClassMethodMap (defineExtensionMethod_predefinedTypeAST_getClassMethodMap,
                                                                freeExtensionMethod_predefinedTypeAST_getClassMethodMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@predefinedTypeAST getSupportedOperatorFlags'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags> gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSupportedOperatorFlags (const int32_t inClassIndex,
                                                     enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags inGetter) {
  gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags f = NULL ;
    if (classIndex < gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
      f = gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.count ()) {
           f = gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_predefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = GALGAS_uint ((uint32_t) 0U) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                  extensionGetter_predefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags (void) {
  gExtensionGetterTable_predefinedTypeAST_getSupportedOperatorFlags.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_predefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags,
                                                                        freeExtensionGetter_predefinedTypeAST_getSupportedOperatorFlags) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@predefinedTypeAST getAddAssignArgumentList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList> gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getAddAssignArgumentList (const int32_t inClassIndex,
                                                    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getAddAssignArgumentList (const cPtr_predefinedTypeAST * inObject,
                                                   GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                                   GALGAS_functionSignature & out_outAddAssignArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getAddAssignArgumentList f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                        GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 481)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                                 extensionMethod_predefinedTypeAST_getAddAssignArgumentList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getAddAssignArgumentList (void) {
  gExtensionMethodTable_predefinedTypeAST_getAddAssignArgumentList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_predefinedTypeAST_getAddAssignArgumentList,
                                                                       freeExtensionMethod_predefinedTypeAST_getAddAssignArgumentList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@predefinedTypeAST getEnumerationList'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_predefinedTypeAST_getEnumerationList> gExtensionMethodTable_predefinedTypeAST_getEnumerationList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_getEnumerationList (const int32_t inClassIndex,
                                              extensionMethodSignature_predefinedTypeAST_getEnumerationList inMethod) {
  gExtensionMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_getEnumerationList (const cPtr_predefinedTypeAST * inObject,
                                             GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                             GALGAS_enumerationDescriptorList & out_outEnumerationList,
                                             GALGAS_string & out_outEnumeratedType,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumeratedType.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_predefinedTypeAST_getEnumerationList f = NULL ;
    if (classIndex < gExtensionMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
      f = gExtensionMethodTable_predefinedTypeAST_getEnumerationList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_predefinedTypeAST_getEnumerationList.count ()) {
           f = gExtensionMethodTable_predefinedTypeAST_getEnumerationList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_predefinedTypeAST_getEnumerationList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumeratedType, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                  GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                  GALGAS_string & outArgument_outEnumeratedType,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypes.galgas", 495)) ;
  outArgument_outEnumeratedType = GALGAS_string::makeEmptyString () ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                           extensionMethod_predefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_predefinedTypeAST_getEnumerationList (void) {
  gExtensionMethodTable_predefinedTypeAST_getEnumerationList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_getEnumerationList (defineExtensionMethod_predefinedTypeAST_getEnumerationList,
                                                                 freeExtensionMethod_predefinedTypeAST_getEnumerationList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension Getter '@location sourceFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_sourceFile (const GALGAS_location & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_location temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_isNowhere (SOURCE_FILE ("semanticContext.galgas", 19)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult = GALGAS_string ("SOURCE_FILE (\"\", 0)") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_location temp_2 = inObject ;
    const GALGAS_location temp_3 = inObject ;
    result_outResult = GALGAS_string ("SOURCE_FILE (").add_operation (temp_2.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("semanticContext.galgas", 22)).getter_utf_38_Representation (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (temp_3.getter_line (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).getter_string (SOURCE_FILE ("semanticContext.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 22)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@location commaSourceFile'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_commaSourceFile (const GALGAS_location & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_location temp_0 = inObject ;
  result_outResult = GALGAS_string (" COMMA_").add_operation (extensionGetter_sourceFile (temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 29)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext> gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInstructionInSemanticContext (const int32_t inClassIndex,
                                                             extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext inMethod) {
  gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_semanticInstructionAST_enterInstructionInSemanticContext (void) {
  gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_enterInstructionInSemanticContext (NULL,
                                                                                     freeExtensionMethod_semanticInstructionAST_enterInstructionInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                            GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticInstructionAST_enterInstructionInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticInstructionAST_enterInstructionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext> gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterExpressionInSemanticContext (const int32_t inClassIndex,
                                                            extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext inMethod) {
  gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_semanticExpressionAST_enterExpressionInSemanticContext (void) {
  gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticExpressionAST_enterExpressionInSemanticContext (NULL,
                                                                                   freeExtensionMethod_semanticExpressionAST_enterExpressionInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionAST_enterExpressionInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionAST_enterExpressionInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInstructionListInSemanticContext (const GALGAS_semanticInstructionListAST inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_semanticInstructionListAST temp_0 = inObject ;
  cEnumerator_semanticInstructionListAST enumerator_3573 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3573.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionInSemanticContext ((const cPtr_semanticInstructionAST *) enumerator_3573.current_mInstruction (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 58)) ;
    enumerator_3573.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@actualOutputExpressionList enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInSemanticContext (const GALGAS_actualOutputExpressionList inObject,
                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actualOutputExpressionList temp_0 = inObject ;
  cEnumerator_actualOutputExpressionList enumerator_3880 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3880.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_3880.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 68)) ;
    enumerator_3880.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarLabelMap::cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_formalParameterSignature & in_mLabelSignature
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLabelSignature (in_mLabelSignature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_grammarLabelMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_grammarLabelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarLabelMap (mAttribute_lkey, mAttribute_mLabelSignature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_grammarLabelMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelSignature" ":" ;
  mAttribute_mLabelSignature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_grammarLabelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarLabelMap * operand = (cMapElement_grammarLabelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelSignature.objectCompare (operand->mAttribute_mLabelSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap::GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap & GALGAS_grammarLabelMap::operator = (const GALGAS_grammarLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::constructor_mapWithMapToOverride (const GALGAS_grammarLabelMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_grammarLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_formalParameterSignature & inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_formalParameterSignature inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarLabelMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_grammarLabelMap_searchKey = "the '%K' grammar label is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_formalParameterSignature & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_grammarLabelMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    outArgument0 = p->mAttribute_mLabelSignature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_grammarLabelMap::getter_mLabelSignatureForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    result = p->mAttribute_mLabelSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarLabelMap::setter_setMLabelSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarLabelMap * p = (cMapElement_grammarLabelMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
    p->mAttribute_mLabelSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarLabelMap * GALGAS_grammarLabelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_grammarLabelMap * result = (cMapElement_grammarLabelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarLabelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_grammarLabelMap::cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap_2D_element cEnumerator_grammarLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return GALGAS_grammarLabelMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLabelSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_grammarLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_grammarLabelMap::current_mLabelSignature (LOCATION_ARGS) const {
  const cMapElement_grammarLabelMap * p = (const cMapElement_grammarLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarLabelMap) ;
  return p->mAttribute_mLabelSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @grammarLabelMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarLabelMap ("grammarLabelMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarLabelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarLabelMap result ;
  const GALGAS_grammarLabelMap * p = (const GALGAS_grammarLabelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarMap::cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                                const GALGAS_grammarLabelMap & in_mLabelMap,
                                                const GALGAS_bool & in_mHasIndexing,
                                                const GALGAS_bool & in_mHasTranslateFeature
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLabelMap (in_mLabelMap),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_grammarMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLabelMap.isValid () && mAttribute_mHasIndexing.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_grammarMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_grammarMap (mAttribute_lkey, mAttribute_mLabelMap, mAttribute_mHasIndexing, mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_grammarMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLabelMap" ":" ;
  mAttribute_mLabelMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasIndexing" ":" ;
  mAttribute_mHasIndexing.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_grammarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_grammarMap * operand = (cMapElement_grammarMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelMap.objectCompare (operand->mAttribute_mLabelMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (operand->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (operand->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap::GALGAS_grammarMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap::GALGAS_grammarMap (const GALGAS_grammarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap & GALGAS_grammarMap::operator = (const GALGAS_grammarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::constructor_mapWithMapToOverride (const GALGAS_grammarMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_grammarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_grammarLabelMap & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             const GALGAS_bool & inArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@grammarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::setter_insertGrammar (GALGAS_lstring inKey,
                                              GALGAS_grammarLabelMap inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_bool inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * p = NULL ;
  macroMyNew (p, cMapElement_grammarMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' grammar has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_grammarMap_searchKey = "the '%K' grammar is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_grammarLabelMap & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          GALGAS_bool & outArgument2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_grammarMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    outArgument0 = p->mAttribute_mLabelMap ;
    outArgument1 = p->mAttribute_mHasIndexing ;
    outArgument2 = p->mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap GALGAS_grammarMap::getter_mLabelMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_grammarLabelMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mLabelMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap::getter_mHasIndexingForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarMap::getter_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::setter_setMLabelMapForKey (GALGAS_grammarLabelMap inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mLabelMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::setter_setMHasIndexingForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mHasIndexing = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_grammarMap::setter_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_grammarMap * p = (cMapElement_grammarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_grammarMap) ;
    p->mAttribute_mHasTranslateFeature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_grammarMap * GALGAS_grammarMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_grammarMap * result = (cMapElement_grammarMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_grammarMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_grammarMap::cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap_2D_element cEnumerator_grammarMap::current (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return GALGAS_grammarMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLabelMap, p->mAttribute_mHasIndexing, p->mAttribute_mHasTranslateFeature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_grammarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarLabelMap cEnumerator_grammarMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mLabelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_grammarMap::current_mHasIndexing (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_grammarMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_grammarMap * p = (const cMapElement_grammarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_grammarMap) ;
  return p->mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @grammarMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarMap ("grammarMap",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarMap GALGAS_grammarMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_grammarMap result ;
  const GALGAS_grammarMap * p = (const GALGAS_grammarMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap::cMapElement_routineMap (const GALGAS_lstring & inKey,
                                                const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                const GALGAS_bool & in_mIsInternal
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRoutineSignature (in_mRoutineSignature),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_routineMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineSignature.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_routineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_routineMap (mAttribute_lkey, mAttribute_mRoutineSignature, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_routineMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineSignature" ":" ;
  mAttribute_mRoutineSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_routineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_routineMap * operand = (cMapElement_routineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineSignature.objectCompare (operand->mAttribute_mRoutineSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_routineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap & GALGAS_routineMap::operator = (const GALGAS_routineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::constructor_mapWithMapToOverride (const GALGAS_routineMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_routineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             const GALGAS_formalParameterSignature & inArgument0,
                                             const GALGAS_bool & inArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_insertKey (GALGAS_lstring inKey,
                                          GALGAS_formalParameterSignature inArgument0,
                                          GALGAS_bool inArgument1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * p = NULL ;
  macroMyNew (p, cMapElement_routineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_routineMap_searchKey = "the '%K' routine is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::method_searchKey (GALGAS_lstring inKey,
                                          GALGAS_formalParameterSignature & outArgument0,
                                          GALGAS_bool & outArgument1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_routineMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMap) ;
    outArgument0 = p->mAttribute_mRoutineSignature ;
    outArgument1 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature GALGAS_routineMap::getter_mRoutineSignatureForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mRoutineSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMRoutineSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mRoutineSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_routineMap * p = (cMapElement_routineMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_routineMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_routineMap * GALGAS_routineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_routineMap * result = (cMapElement_routineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_routineMap::cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap_2D_element cEnumerator_routineMap::current (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return GALGAS_routineMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRoutineSignature, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_routineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterSignature cEnumerator_routineMap::current_mRoutineSignature (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mRoutineSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_routineMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_routineMap * p = (const cMapElement_routineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap::cMapElement_functionMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_functionSignature & in_mFunctionSignature,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                  const GALGAS_bool & in_mIsInternal
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFunctionSignature (in_mFunctionSignature),
mAttribute_mResultType (in_mResultType),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_functionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionSignature.isValid () && mAttribute_mResultType.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_functionMap (mAttribute_lkey, mAttribute_mFunctionSignature, mAttribute_mResultType, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_functionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionSignature" ":" ;
  mAttribute_mFunctionSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_functionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_functionMap * operand = (cMapElement_functionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionSignature.objectCompare (operand->mAttribute_mFunctionSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (const GALGAS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap & GALGAS_functionMap::operator = (const GALGAS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_mapWithMapToOverride (const GALGAS_functionMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_functionSignature & inArgument0,
                                              const GALGAS_unifiedTypeMap_2D_proxy & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_functionSignature inArgument0,
                                           GALGAS_unifiedTypeMap_2D_proxy inArgument1,
                                           GALGAS_bool inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_functionMap_searchKey = "the '%K' function is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_functionSignature & outArgument0,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_functionMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mAttribute_mFunctionSignature ;
    outArgument1 = p->mAttribute_mResultType ;
    outArgument2 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_functionMap::getter_mFunctionSignatureForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mFunctionSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::setter_setMFunctionSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mFunctionSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::setter_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap * GALGAS_functionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionMap::cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GALGAS_functionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mFunctionSignature, p->mAttribute_mResultType, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_functionMap::current_mFunctionSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mFunctionSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_functionMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @functionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  const GALGAS_functionMap * p = (const GALGAS_functionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperFileMap::cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_string & in_mAbsoluteFilePath,
                                                        const GALGAS_bool & in_mIsTextFile,
                                                        const GALGAS_uint & in_mWrapperDirectoryIndex,
                                                        const GALGAS_uint & in_mWrapperFileIndex
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAbsoluteFilePath (in_mAbsoluteFilePath),
mAttribute_mIsTextFile (in_mIsTextFile),
mAttribute_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex),
mAttribute_mWrapperFileIndex (in_mWrapperFileIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_wrapperFileMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAbsoluteFilePath.isValid () && mAttribute_mIsTextFile.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () && mAttribute_mWrapperFileIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_wrapperFileMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperFileMap (mAttribute_lkey, mAttribute_mAbsoluteFilePath, mAttribute_mIsTextFile, mAttribute_mWrapperDirectoryIndex, mAttribute_mWrapperFileIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_wrapperFileMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAbsoluteFilePath" ":" ;
  mAttribute_mAbsoluteFilePath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsTextFile" ":" ;
  mAttribute_mIsTextFile.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperFileIndex" ":" ;
  mAttribute_mWrapperFileIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_wrapperFileMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperFileMap * operand = (cMapElement_wrapperFileMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAbsoluteFilePath.objectCompare (operand->mAttribute_mAbsoluteFilePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsTextFile.objectCompare (operand->mAttribute_mIsTextFile) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (operand->mAttribute_mWrapperDirectoryIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperFileIndex.objectCompare (operand->mAttribute_mWrapperFileIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap::GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap & GALGAS_wrapperFileMap::operator = (const GALGAS_wrapperFileMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::constructor_mapWithMapToOverride (const GALGAS_wrapperFileMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperFileMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_string & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_uint & inArgument2,
                                                 const GALGAS_uint & inArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperFileMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_string inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_uint inArgument2,
                                              GALGAS_uint inArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperFileMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_wrapperFileMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_string & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_uint & outArgument2,
                                              GALGAS_uint & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_wrapperFileMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    outArgument0 = p->mAttribute_mAbsoluteFilePath ;
    outArgument1 = p->mAttribute_mIsTextFile ;
    outArgument2 = p->mAttribute_mWrapperDirectoryIndex ;
    outArgument3 = p->mAttribute_mWrapperFileIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_wrapperFileMap::getter_mAbsoluteFilePathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mAbsoluteFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_wrapperFileMap::getter_mIsTextFileForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mIsTextFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap::getter_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mWrapperDirectoryIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperFileMap::getter_mWrapperFileIndexForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    result = p->mAttribute_mWrapperFileIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::setter_setMAbsoluteFilePathForKey (GALGAS_string inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mAbsoluteFilePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::setter_setMIsTextFileForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mIsTextFile = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::setter_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperFileMap::setter_setMWrapperFileIndexForKey (GALGAS_uint inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperFileMap * p = (cMapElement_wrapperFileMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
    p->mAttribute_mWrapperFileIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperFileMap * GALGAS_wrapperFileMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_wrapperFileMap * result = (cMapElement_wrapperFileMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperFileMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_wrapperFileMap::cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap_2D_element cEnumerator_wrapperFileMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return GALGAS_wrapperFileMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAbsoluteFilePath, p->mAttribute_mIsTextFile, p->mAttribute_mWrapperDirectoryIndex, p->mAttribute_mWrapperFileIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_wrapperFileMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_wrapperFileMap::current_mAbsoluteFilePath (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mAbsoluteFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_wrapperFileMap::current_mIsTextFile (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mIsTextFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mWrapperDirectoryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperFileMap::current_mWrapperFileIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperFileMap * p = (const cMapElement_wrapperFileMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperFileMap) ;
  return p->mAttribute_mWrapperFileIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @wrapperFileMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperFileMap ("wrapperFileMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperFileMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperFileMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperFileMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_wrapperFileMap result ;
  const GALGAS_wrapperFileMap * p = (const GALGAS_wrapperFileMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperFileMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperFileMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperDirectoryMap::cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                                  const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                                  const GALGAS_uint & in_mWrapperDirectoryIndex
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mRegularFileMap (in_mRegularFileMap),
mAttribute_mDirectoryMap (in_mDirectoryMap),
mAttribute_mWrapperDirectoryIndex (in_mWrapperDirectoryIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_wrapperDirectoryMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRegularFileMap.isValid () && mAttribute_mDirectoryMap.isValid () && mAttribute_mWrapperDirectoryIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_wrapperDirectoryMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperDirectoryMap (mAttribute_lkey, mAttribute_mRegularFileMap, mAttribute_mDirectoryMap, mAttribute_mWrapperDirectoryIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_wrapperDirectoryMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularFileMap" ":" ;
  mAttribute_mRegularFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDirectoryMap" ":" ;
  mAttribute_mDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWrapperDirectoryIndex" ":" ;
  mAttribute_mWrapperDirectoryIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_wrapperDirectoryMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperDirectoryMap * operand = (cMapElement_wrapperDirectoryMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegularFileMap.objectCompare (operand->mAttribute_mRegularFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDirectoryMap.objectCompare (operand->mAttribute_mDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWrapperDirectoryIndex.objectCompare (operand->mAttribute_mWrapperDirectoryIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap::GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap & GALGAS_wrapperDirectoryMap::operator = (const GALGAS_wrapperDirectoryMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::constructor_mapWithMapToOverride (const GALGAS_wrapperDirectoryMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperDirectoryMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_wrapperFileMap & inArgument0,
                                                      const GALGAS_wrapperDirectoryMap & inArgument1,
                                                      const GALGAS_uint & inArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperDirectoryMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_wrapperFileMap inArgument0,
                                                   GALGAS_wrapperDirectoryMap inArgument1,
                                                   GALGAS_uint inArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperDirectoryMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_wrapperFileMap & outArgument0,
                                                   GALGAS_wrapperDirectoryMap & outArgument1,
                                                   GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_wrapperDirectoryMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    outArgument0 = p->mAttribute_mRegularFileMap ;
    outArgument1 = p->mAttribute_mDirectoryMap ;
    outArgument2 = p->mAttribute_mWrapperDirectoryIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap::getter_mRegularFileMapForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mRegularFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::getter_mDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_wrapperDirectoryMap::getter_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    result = p->mAttribute_mWrapperDirectoryIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::setter_setMRegularFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mRegularFileMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::setter_setMDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mDirectoryMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperDirectoryMap::setter_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_wrapperDirectoryMap * p = (cMapElement_wrapperDirectoryMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
    p->mAttribute_mWrapperDirectoryIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperDirectoryMap * GALGAS_wrapperDirectoryMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperDirectoryMap * result = (cMapElement_wrapperDirectoryMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperDirectoryMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_wrapperDirectoryMap::cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap_2D_element cEnumerator_wrapperDirectoryMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return GALGAS_wrapperDirectoryMap_2D_element (p->mAttribute_lkey, p->mAttribute_mRegularFileMap, p->mAttribute_mDirectoryMap, p->mAttribute_mWrapperDirectoryIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_wrapperDirectoryMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cEnumerator_wrapperDirectoryMap::current_mRegularFileMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mRegularFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cEnumerator_wrapperDirectoryMap::current_mDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_wrapperDirectoryMap::current_mWrapperDirectoryIndex (LOCATION_ARGS) const {
  const cMapElement_wrapperDirectoryMap * p = (const cMapElement_wrapperDirectoryMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperDirectoryMap) ;
  return p->mAttribute_mWrapperDirectoryIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperDirectoryMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperDirectoryMap ("wrapperDirectoryMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperDirectoryMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperDirectoryMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperDirectoryMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_wrapperDirectoryMap result ;
  const GALGAS_wrapperDirectoryMap * p = (const GALGAS_wrapperDirectoryMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperDirectoryMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperDirectoryMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperTemplateMap::cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_functionSignature & in_mTemplateSignature,
                                                                        const GALGAS_lstring & in_mFilewrapperTemplatePath
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTemplateSignature (in_mTemplateSignature),
mAttribute_mFilewrapperTemplatePath (in_mFilewrapperTemplatePath) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_filewrapperTemplateMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTemplateSignature.isValid () && mAttribute_mFilewrapperTemplatePath.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_filewrapperTemplateMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperTemplateMap (mAttribute_lkey, mAttribute_mTemplateSignature, mAttribute_mFilewrapperTemplatePath COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_filewrapperTemplateMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTemplateSignature" ":" ;
  mAttribute_mTemplateSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplatePath" ":" ;
  mAttribute_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_filewrapperTemplateMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperTemplateMap * operand = (cMapElement_filewrapperTemplateMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateSignature.objectCompare (operand->mAttribute_mTemplateSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplatePath.objectCompare (operand->mAttribute_mFilewrapperTemplatePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap::GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap & GALGAS_filewrapperTemplateMap::operator = (const GALGAS_filewrapperTemplateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperTemplateMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_functionSignature & inArgument0,
                                                         const GALGAS_lstring & inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperTemplateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature inArgument0,
                                                      GALGAS_lstring inArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperTemplateMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper template has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey = "the '%K' filewrapper template is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_functionSignature & outArgument0,
                                                      GALGAS_lstring & outArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_filewrapperTemplateMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    outArgument0 = p->mAttribute_mTemplateSignature ;
    outArgument1 = p->mAttribute_mFilewrapperTemplatePath ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature GALGAS_filewrapperTemplateMap::getter_mTemplateSignatureForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_functionSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mAttribute_mTemplateSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperTemplateMap::getter_mFilewrapperTemplatePathForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    result = p->mAttribute_mFilewrapperTemplatePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::setter_setMTemplateSignatureForKey (GALGAS_functionSignature inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mAttribute_mTemplateSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateMap::setter_setMFilewrapperTemplatePathForKey (GALGAS_lstring inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperTemplateMap * p = (cMapElement_filewrapperTemplateMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
    p->mAttribute_mFilewrapperTemplatePath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperTemplateMap * GALGAS_filewrapperTemplateMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperTemplateMap * result = (cMapElement_filewrapperTemplateMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperTemplateMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperTemplateMap::cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap_2D_element cEnumerator_filewrapperTemplateMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return GALGAS_filewrapperTemplateMap_2D_element (p->mAttribute_lkey, p->mAttribute_mTemplateSignature, p->mAttribute_mFilewrapperTemplatePath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionSignature cEnumerator_filewrapperTemplateMap::current_mTemplateSignature (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mAttribute_mTemplateSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperTemplateMap::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cMapElement_filewrapperTemplateMap * p = (const cMapElement_filewrapperTemplateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperTemplateMap) ;
  return p->mAttribute_mFilewrapperTemplatePath ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @filewrapperTemplateMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateMap ("filewrapperTemplateMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateMap result ;
  const GALGAS_filewrapperTemplateMap * p = (const GALGAS_filewrapperTemplateMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperMap::cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mFilewrapperPath,
                                                        const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                                        const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                        const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                        const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                                        const GALGAS_bool & in_mIsInternal
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFilewrapperPath (in_mFilewrapperPath),
mAttribute_mFilewrapperExtensionList (in_mFilewrapperExtensionList),
mAttribute_mFilewrapperFileMap (in_mFilewrapperFileMap),
mAttribute_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mAttribute_mFilewrapperTemplateMap (in_mFilewrapperTemplateMap),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_filewrapperMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFilewrapperPath.isValid () && mAttribute_mFilewrapperExtensionList.isValid () && mAttribute_mFilewrapperFileMap.isValid () && mAttribute_mFilewrapperDirectoryMap.isValid () && mAttribute_mFilewrapperTemplateMap.isValid () && mAttribute_mIsInternal.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_filewrapperMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_filewrapperMap (mAttribute_lkey, mAttribute_mFilewrapperPath, mAttribute_mFilewrapperExtensionList, mAttribute_mFilewrapperFileMap, mAttribute_mFilewrapperDirectoryMap, mAttribute_mFilewrapperTemplateMap, mAttribute_mIsInternal COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_filewrapperMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperPath" ":" ;
  mAttribute_mFilewrapperPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperExtensionList" ":" ;
  mAttribute_mFilewrapperExtensionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperFileMap" ":" ;
  mAttribute_mFilewrapperFileMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperDirectoryMap" ":" ;
  mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilewrapperTemplateMap" ":" ;
  mAttribute_mFilewrapperTemplateMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsInternal" ":" ;
  mAttribute_mIsInternal.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_filewrapperMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_filewrapperMap * operand = (cMapElement_filewrapperMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperPath.objectCompare (operand->mAttribute_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperExtensionList.objectCompare (operand->mAttribute_mFilewrapperExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (operand->mAttribute_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (operand->mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateMap.objectCompare (operand->mAttribute_mFilewrapperTemplateMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (operand->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap::GALGAS_filewrapperMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap::GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap & GALGAS_filewrapperMap::operator = (const GALGAS_filewrapperMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::constructor_mapWithMapToOverride (const GALGAS_filewrapperMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_lstringlist & inArgument1,
                                                 const GALGAS_wrapperFileMap & inArgument2,
                                                 const GALGAS_wrapperDirectoryMap & inArgument3,
                                                 const GALGAS_filewrapperTemplateMap & inArgument4,
                                                 const GALGAS_bool & inArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@filewrapperMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_lstringlist inArgument1,
                                              GALGAS_wrapperFileMap inArgument2,
                                              GALGAS_wrapperDirectoryMap inArgument3,
                                              GALGAS_filewrapperTemplateMap inArgument4,
                                              GALGAS_bool inArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * p = NULL ;
  macroMyNew (p, cMapElement_filewrapperMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' filewrapper has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_filewrapperMap_searchKey = "the '%K' filewrapper is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_lstringlist & outArgument1,
                                              GALGAS_wrapperFileMap & outArgument2,
                                              GALGAS_wrapperDirectoryMap & outArgument3,
                                              GALGAS_filewrapperTemplateMap & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_filewrapperMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    outArgument0 = p->mAttribute_mFilewrapperPath ;
    outArgument1 = p->mAttribute_mFilewrapperExtensionList ;
    outArgument2 = p->mAttribute_mFilewrapperFileMap ;
    outArgument3 = p->mAttribute_mFilewrapperDirectoryMap ;
    outArgument4 = p->mAttribute_mFilewrapperTemplateMap ;
    outArgument5 = p->mAttribute_mIsInternal ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperMap::getter_mFilewrapperPathForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperMap::getter_mFilewrapperExtensionListForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperMap::getter_mFilewrapperFileMapForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperFileMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap::getter_mFilewrapperDirectoryMapForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap::getter_mFilewrapperTemplateMapForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_filewrapperTemplateMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mFilewrapperTemplateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperMap::getter_mIsInternalForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMFilewrapperPathForKey (GALGAS_lstring inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperPath = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMFilewrapperExtensionListForKey (GALGAS_lstringlist inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperExtensionList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMFilewrapperFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperFileMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMFilewrapperDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperDirectoryMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMFilewrapperTemplateMapForKey (GALGAS_filewrapperTemplateMap inAttributeValue,
                                                                     GALGAS_string inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mFilewrapperTemplateMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperMap::setter_setMIsInternalForKey (GALGAS_bool inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_filewrapperMap * p = (cMapElement_filewrapperMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_filewrapperMap) ;
    p->mAttribute_mIsInternal = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_filewrapperMap * GALGAS_filewrapperMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_filewrapperMap * result = (cMapElement_filewrapperMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_filewrapperMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_filewrapperMap::cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap_2D_element cEnumerator_filewrapperMap::current (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return GALGAS_filewrapperMap_2D_element (p->mAttribute_lkey, p->mAttribute_mFilewrapperPath, p->mAttribute_mFilewrapperExtensionList, p->mAttribute_mFilewrapperFileMap, p->mAttribute_mFilewrapperDirectoryMap, p->mAttribute_mFilewrapperTemplateMap, p->mAttribute_mIsInternal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_filewrapperMap::current_mFilewrapperPath (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_filewrapperMap::current_mFilewrapperExtensionList (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cEnumerator_filewrapperMap::current_mFilewrapperFileMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cEnumerator_filewrapperMap::current_mFilewrapperDirectoryMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateMap cEnumerator_filewrapperMap::current_mFilewrapperTemplateMap (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mFilewrapperTemplateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_filewrapperMap::current_mIsInternal (LOCATION_ARGS) const {
  const cMapElement_filewrapperMap * p = (const cMapElement_filewrapperMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_filewrapperMap) ;
  return p->mAttribute_mIsInternal ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @filewrapperMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperMap ("filewrapperMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperMap GALGAS_filewrapperMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperMap result ;
  const GALGAS_filewrapperMap * p = (const GALGAS_filewrapperMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForSemanticAnalysis::cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mBoolOptionMap (in_mBoolOptionMap),
mAttribute_mUIntOptionMap (in_mUIntOptionMap),
mAttribute_mStringOptionMap (in_mStringOptionMap),
mAttribute_mStringListOptionMap (in_mStringListOptionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionComponentMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mBoolOptionMap.isValid () && mAttribute_mUIntOptionMap.isValid () && mAttribute_mStringOptionMap.isValid () && mAttribute_mStringListOptionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionComponentMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mBoolOptionMap, mAttribute_mUIntOptionMap, mAttribute_mStringOptionMap, mAttribute_mStringListOptionMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPredefined" ":" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoolOptionMap" ":" ;
  mAttribute_mBoolOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUIntOptionMap" ":" ;
  mAttribute_mUIntOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringOptionMap" ":" ;
  mAttribute_mStringOptionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStringListOptionMap" ":" ;
  mAttribute_mStringListOptionMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_optionComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionComponentMapForSemanticAnalysis * operand = (cMapElement_optionComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (operand->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBoolOptionMap.objectCompare (operand->mAttribute_mBoolOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUIntOptionMap.objectCompare (operand->mAttribute_mUIntOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringOptionMap.objectCompare (operand->mAttribute_mStringOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringListOptionMap.objectCompare (operand->mAttribute_mStringListOptionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis::GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis & GALGAS_optionComponentMapForSemanticAnalysis::operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_optionComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_bool & inArgument0,
                                                                        const GALGAS_commandLineOptionMap & inArgument1,
                                                                        const GALGAS_commandLineOptionMap & inArgument2,
                                                                        const GALGAS_commandLineOptionMap & inArgument3,
                                                                        const GALGAS_commandLineOptionMap & inArgument4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_bool inArgument0,
                                                                     GALGAS_commandLineOptionMap inArgument1,
                                                                     GALGAS_commandLineOptionMap inArgument2,
                                                                     GALGAS_commandLineOptionMap inArgument3,
                                                                     GALGAS_commandLineOptionMap inArgument4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' option component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey = "the '%K' option component is not imported" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_bool & outArgument0,
                                                                     GALGAS_commandLineOptionMap & outArgument1,
                                                                     GALGAS_commandLineOptionMap & outArgument2,
                                                                     GALGAS_commandLineOptionMap & outArgument3,
                                                                     GALGAS_commandLineOptionMap & outArgument4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mIsPredefined ;
    outArgument1 = p->mAttribute_mBoolOptionMap ;
    outArgument2 = p->mAttribute_mUIntOptionMap ;
    outArgument3 = p->mAttribute_mStringOptionMap ;
    outArgument4 = p->mAttribute_mStringListOptionMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis::getter_mIsPredefinedForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mBoolOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mBoolOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mUIntOptionMapForKey (const GALGAS_string & inKey,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mUIntOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mStringOptionMapForKey (const GALGAS_string & inKey,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mStringOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::getter_mStringListOptionMapForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_commandLineOptionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mStringListOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIsPredefined = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mBoolOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mUIntOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                     GALGAS_string inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mStringOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionComponentMapForSemanticAnalysis::setter_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
                                                                                         GALGAS_string inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionComponentMapForSemanticAnalysis * p = (cMapElement_optionComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
    p->mAttribute_mStringListOptionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionComponentMapForSemanticAnalysis * GALGAS_optionComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_optionComponentMapForSemanticAnalysis * result = (cMapElement_optionComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionComponentMapForSemanticAnalysis::cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis_2D_element cEnumerator_optionComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return GALGAS_optionComponentMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mIsPredefined, p->mAttribute_mBoolOptionMap, p->mAttribute_mUIntOptionMap, p->mAttribute_mStringOptionMap, p->mAttribute_mStringListOptionMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_optionComponentMapForSemanticAnalysis::current_mIsPredefined (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mBoolOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mUIntOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mStringOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cEnumerator_optionComponentMapForSemanticAnalysis::current_mStringListOptionMap (LOCATION_ARGS) const {
  const cMapElement_optionComponentMapForSemanticAnalysis * p = (const cMapElement_optionComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mStringListOptionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionComponentMapForSemanticAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ("optionComponentMapForSemanticAnalysis",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentMapForSemanticAnalysis result ;
  const GALGAS_optionComponentMapForSemanticAnalysis * p = (const GALGAS_optionComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexiqueComponentMapForSemanticAnalysis::cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                                        const GALGAS_terminalMap & in_mTerminalMap,
                                                                                                        const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                                                        const GALGAS_lstring & in_mIndexingDirectory
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTerminalMap (in_mTerminalMap),
mAttribute_mIndexingListAST (in_mIndexingListAST),
mAttribute_mIndexingDirectory (in_mIndexingDirectory) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexiqueComponentMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTerminalMap.isValid () && mAttribute_mIndexingListAST.isValid () && mAttribute_mIndexingDirectory.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexiqueComponentMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexiqueComponentMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mTerminalMap, mAttribute_mIndexingListAST, mAttribute_mIndexingDirectory COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexiqueComponentMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalMap" ":" ;
  mAttribute_mTerminalMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingListAST" ":" ;
  mAttribute_mIndexingListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexingDirectory" ":" ;
  mAttribute_mIndexingDirectory.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexiqueComponentMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * operand = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalMap.objectCompare (operand->mAttribute_mTerminalMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingListAST.objectCompare (operand->mAttribute_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingDirectory.objectCompare (operand->mAttribute_mIndexingDirectory) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis::GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis & GALGAS_lexiqueComponentMapForSemanticAnalysis::operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inMapToOverride
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                         const GALGAS_terminalMap & inArgument0,
                                                                         const GALGAS_indexingListAST & inArgument1,
                                                                         const GALGAS_lstring & inArgument2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexiqueComponentMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                      GALGAS_terminalMap inArgument0,
                                                                      GALGAS_indexingListAST inArgument1,
                                                                      GALGAS_lstring inArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_lexiqueComponentMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of the '%K' lexique component: it has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey = "the '%K' lexique component is not imported" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                      GALGAS_terminalMap & outArgument0,
                                                                      GALGAS_indexingListAST & outArgument1,
                                                                      GALGAS_lstring & outArgument2,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mTerminalMap ;
    outArgument1 = p->mAttribute_mIndexingListAST ;
    outArgument2 = p->mAttribute_mIndexingDirectory ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mTerminalMapForKey (const GALGAS_string & inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_terminalMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mTerminalMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingListASTForKey (const GALGAS_string & inKey,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_indexingListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIndexingListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis::getter_mIndexingDirectoryForKey (const GALGAS_string & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    result = p->mAttribute_mIndexingDirectory ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMTerminalMapForKey (GALGAS_terminalMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mTerminalMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingListASTForKey (GALGAS_indexingListAST inAttributeValue,
                                                                                      GALGAS_string inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIndexingListAST = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexiqueComponentMapForSemanticAnalysis::setter_setMIndexingDirectoryForKey (GALGAS_lstring inAttributeValue,
                                                                                        GALGAS_string inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
    p->mAttribute_mIndexingDirectory = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexiqueComponentMapForSemanticAnalysis * GALGAS_lexiqueComponentMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                       const GALGAS_string & inKey
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexiqueComponentMapForSemanticAnalysis * result = (cMapElement_lexiqueComponentMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexiqueComponentMapForSemanticAnalysis::cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element cEnumerator_lexiqueComponentMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mTerminalMap, p->mAttribute_mIndexingListAST, p->mAttribute_mIndexingDirectory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mTerminalMap (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mTerminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingListAST (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexiqueComponentMapForSemanticAnalysis::current_mIndexingDirectory (LOCATION_ARGS) const {
  const cMapElement_lexiqueComponentMapForSemanticAnalysis * p = (const cMapElement_lexiqueComponentMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexiqueComponentMapForSemanticAnalysis) ;
  return p->mAttribute_mIndexingDirectory ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexiqueComponentMapForSemanticAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ("lexiqueComponentMapForSemanticAnalysis",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentMapForSemanticAnalysis result ;
  const GALGAS_lexiqueComponentMapForSemanticAnalysis * p = (const GALGAS_lexiqueComponentMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_syntaxComponentMap::cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lstring & in_mLexiqueName,
                                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                const GALGAS_bool & in_mHasTranslateFeature
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mAttribute_mRuleList (in_mRuleList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_syntaxComponentMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexiqueName.isValid () && mAttribute_mNonterminalDeclarationList.isValid () && mAttribute_mRuleList.isValid () && mAttribute_mHasTranslateFeature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_syntaxComponentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_syntaxComponentMap (mAttribute_lkey, mAttribute_mLexiqueName, mAttribute_mNonterminalDeclarationList, mAttribute_mRuleList, mAttribute_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_syntaxComponentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexiqueName" ":" ;
  mAttribute_mLexiqueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalDeclarationList" ":" ;
  mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRuleList" ":" ;
  mAttribute_mRuleList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasTranslateFeature" ":" ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_syntaxComponentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_syntaxComponentMap * operand = (cMapElement_syntaxComponentMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (operand->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (operand->mAttribute_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRuleList.objectCompare (operand->mAttribute_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (operand->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap::GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap & GALGAS_syntaxComponentMap::operator = (const GALGAS_syntaxComponentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::constructor_mapWithMapToOverride (const GALGAS_syntaxComponentMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lstring & inArgument0,
                                                     const GALGAS_nonterminalDeclarationListAST & inArgument1,
                                                     const GALGAS_syntaxRuleListAST & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@syntaxComponentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lstring inArgument0,
                                                  GALGAS_nonterminalDeclarationListAST inArgument1,
                                                  GALGAS_syntaxRuleListAST inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * p = NULL ;
  macroMyNew (p, cMapElement_syntaxComponentMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' syntax component has already been parsed" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_syntaxComponentMap_searchKey = "the '%K' syntax component is not parsed" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lstring & outArgument0,
                                                  GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                  GALGAS_syntaxRuleListAST & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_syntaxComponentMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    outArgument0 = p->mAttribute_mLexiqueName ;
    outArgument1 = p->mAttribute_mNonterminalDeclarationList ;
    outArgument2 = p->mAttribute_mRuleList ;
    outArgument3 = p->mAttribute_mHasTranslateFeature ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_syntaxComponentMap::getter_mLexiqueNameForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap::getter_mNonterminalDeclarationListForKey (const GALGAS_string & inKey,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap::getter_mRuleListForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_syntaxRuleListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_syntaxComponentMap::getter_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::setter_setMLexiqueNameForKey (GALGAS_lstring inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mLexiqueName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::setter_setMNonterminalDeclarationListForKey (GALGAS_nonterminalDeclarationListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mNonterminalDeclarationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::setter_setMRuleListForKey (GALGAS_syntaxRuleListAST inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mRuleList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxComponentMap::setter_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_syntaxComponentMap * p = (cMapElement_syntaxComponentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
    p->mAttribute_mHasTranslateFeature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_syntaxComponentMap * GALGAS_syntaxComponentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_syntaxComponentMap * result = (cMapElement_syntaxComponentMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_syntaxComponentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_syntaxComponentMap::cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap_2D_element cEnumerator_syntaxComponentMap::current (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return GALGAS_syntaxComponentMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexiqueName, p->mAttribute_mNonterminalDeclarationList, p->mAttribute_mRuleList, p->mAttribute_mHasTranslateFeature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxComponentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_syntaxComponentMap::current_mLexiqueName (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cEnumerator_syntaxComponentMap::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cEnumerator_syntaxComponentMap::current_mRuleList (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_syntaxComponentMap::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cMapElement_syntaxComponentMap * p = (const cMapElement_syntaxComponentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_syntaxComponentMap) ;
  return p->mAttribute_mHasTranslateFeature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syntaxComponentMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentMap ("syntaxComponentMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxComponentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxComponentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentMap result ;
  const GALGAS_syntaxComponentMap * p = (const GALGAS_syntaxComponentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxComponentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForType::cMapElement_extensionMethodMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalParameterList (in_mFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMethodMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMethodMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForType (mAttribute_lkey, mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMethodMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMethodMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForType * operand = (cMapElement_extensionMethodMapForType *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalParameterList.objectCompare (operand->mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType::GALGAS_extensionMethodMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType::GALGAS_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType & GALGAS_extensionMethodMapForType::operator = (const GALGAS_extensionMethodMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_formalParameterListAST & inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_formalParameterListAST inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionMethodMapForType::getter_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    result = p->mAttribute_mFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForType::setter_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForType * p = (cMapElement_extensionMethodMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
    p->mAttribute_mFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForType * GALGAS_extensionMethodMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForType * result = (cMapElement_extensionMethodMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMethodMapForType::cEnumerator_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType_2D_element cEnumerator_extensionMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return GALGAS_extensionMethodMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_extensionMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForType * p = (const cMapElement_extensionMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForType) ;
  return p->mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionMethodMapForType type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForType ("extensionMethodMapForType",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForType result ;
  const GALGAS_extensionMethodMapForType * p = (const GALGAS_extensionMethodMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForBuildingContext::cMapElement_extensionMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mExtensionMethodMapForType (in_mExtensionMethodMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionMethodMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionMethodMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionMethodMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForBuildingContext (mAttribute_lkey, mAttribute_mExtensionMethodMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionMethodMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionMethodMapForType" ":" ;
  mAttribute_mExtensionMethodMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionMethodMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForBuildingContext * operand = (cMapElement_extensionMethodMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionMethodMapForType.objectCompare (operand->mAttribute_mExtensionMethodMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext::GALGAS_extensionMethodMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext::GALGAS_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext & GALGAS_extensionMethodMapForBuildingContext::operator = (const GALGAS_extensionMethodMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionMethodMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionMethodMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionMethodMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mExtensionMethodMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType GALGAS_extensionMethodMapForBuildingContext::getter_mExtensionMethodMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  GALGAS_extensionMethodMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    result = p->mAttribute_mExtensionMethodMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionMethodMapForBuildingContext::setter_setMExtensionMethodMapForTypeForKey (GALGAS_extensionMethodMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionMethodMapForBuildingContext * p = (cMapElement_extensionMethodMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
    p->mAttribute_mExtensionMethodMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionMethodMapForBuildingContext * GALGAS_extensionMethodMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForBuildingContext * result = (cMapElement_extensionMethodMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionMethodMapForBuildingContext::cEnumerator_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext_2D_element cEnumerator_extensionMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return GALGAS_extensionMethodMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mExtensionMethodMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForType cEnumerator_extensionMethodMapForBuildingContext::current_mExtensionMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForBuildingContext * p = (const cMapElement_extensionMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForBuildingContext) ;
  return p->mAttribute_mExtensionMethodMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionMethodMapForBuildingContext type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ("extensionMethodMapForBuildingContext",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionMethodMapForBuildingContext GALGAS_extensionMethodMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForBuildingContext result ;
  const GALGAS_extensionMethodMapForBuildingContext * p = (const GALGAS_extensionMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForType::cMapElement_extensionSetterMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalParameterList (in_mFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionSetterMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionSetterMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForType (mAttribute_lkey, mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionSetterMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionSetterMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForType * operand = (cMapElement_extensionSetterMapForType *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalParameterList.objectCompare (operand->mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType::GALGAS_extensionSetterMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType::GALGAS_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType & GALGAS_extensionSetterMapForType::operator = (const GALGAS_extensionSetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_formalParameterListAST & inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_formalParameterListAST inArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_extensionSetterMapForType::getter_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    result = p->mAttribute_mFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForType::setter_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForType * p = (cMapElement_extensionSetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
    p->mAttribute_mFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForType * GALGAS_extensionSetterMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForType * result = (cMapElement_extensionSetterMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionSetterMapForType::cEnumerator_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType_2D_element cEnumerator_extensionSetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return GALGAS_extensionSetterMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionSetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_extensionSetterMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForType * p = (const cMapElement_extensionSetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForType) ;
  return p->mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionSetterMapForType type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForType ("extensionSetterMapForType",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForType result ;
  const GALGAS_extensionSetterMapForType * p = (const GALGAS_extensionSetterMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForBuildingContext::cMapElement_extensionSetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mExtensionSetterMapForType (in_mExtensionSetterMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionSetterMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionSetterMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionSetterMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForBuildingContext (mAttribute_lkey, mAttribute_mExtensionSetterMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionSetterMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionSetterMapForType" ":" ;
  mAttribute_mExtensionSetterMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionSetterMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForBuildingContext * operand = (cMapElement_extensionSetterMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionSetterMapForType.objectCompare (operand->mAttribute_mExtensionSetterMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext::GALGAS_extensionSetterMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext::GALGAS_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext & GALGAS_extensionSetterMapForBuildingContext::operator = (const GALGAS_extensionSetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionSetterMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionSetterMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionSetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionSetterMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mExtensionSetterMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType GALGAS_extensionSetterMapForBuildingContext::getter_mExtensionSetterMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  GALGAS_extensionSetterMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    result = p->mAttribute_mExtensionSetterMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionSetterMapForBuildingContext::setter_setMExtensionSetterMapForTypeForKey (GALGAS_extensionSetterMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionSetterMapForBuildingContext * p = (cMapElement_extensionSetterMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
    p->mAttribute_mExtensionSetterMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionSetterMapForBuildingContext * GALGAS_extensionSetterMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForBuildingContext * result = (cMapElement_extensionSetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionSetterMapForBuildingContext::cEnumerator_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext_2D_element cEnumerator_extensionSetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return GALGAS_extensionSetterMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mExtensionSetterMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionSetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForType cEnumerator_extensionSetterMapForBuildingContext::current_mExtensionSetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForBuildingContext * p = (const cMapElement_extensionSetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForBuildingContext) ;
  return p->mAttribute_mExtensionSetterMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionSetterMapForBuildingContext type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ("extensionSetterMapForBuildingContext",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionSetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionSetterMapForBuildingContext GALGAS_extensionSetterMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForBuildingContext result ;
  const GALGAS_extensionSetterMapForBuildingContext * p = (const GALGAS_extensionSetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionSetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForType::cMapElement_extensionGetterMapForType (const GALGAS_lstring & inKey,
                                                                              const GALGAS_lstring & in_mResultTypeName,
                                                                              const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mResultTypeName (in_mResultTypeName),
mAttribute_mInputFormalParameterList (in_mInputFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionGetterMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mInputFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionGetterMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForType (mAttribute_lkey, mAttribute_mResultTypeName, mAttribute_mInputFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionGetterMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultTypeName" ":" ;
  mAttribute_mResultTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInputFormalParameterList" ":" ;
  mAttribute_mInputFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionGetterMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForType * operand = (cMapElement_extensionGetterMapForType *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (operand->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputFormalParameterList.objectCompare (operand->mAttribute_mInputFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType::GALGAS_extensionGetterMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType::GALGAS_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType & GALGAS_extensionGetterMapForType::operator = (const GALGAS_extensionGetterMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForType & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_lstring & inArgument0,
                                                            const GALGAS_formalInputParameterListAST & inArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_lstring inArgument0,
                                                         GALGAS_formalInputParameterListAST inArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionGetterMapForType::getter_mResultTypeNameForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_extensionGetterMapForType::getter_mInputFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) attributes ;
  GALGAS_formalInputParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    result = p->mAttribute_mInputFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType::setter_setMResultTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                                        GALGAS_string inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mAttribute_mResultTypeName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForType::setter_setMInputFormalParameterListForKey (GALGAS_formalInputParameterListAST inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForType * p = (cMapElement_extensionGetterMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
    p->mAttribute_mInputFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForType * GALGAS_extensionGetterMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForType * result = (cMapElement_extensionGetterMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionGetterMapForType::cEnumerator_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType_2D_element cEnumerator_extensionGetterMapForType::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return GALGAS_extensionGetterMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mResultTypeName, p->mAttribute_mInputFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionGetterMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionGetterMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cEnumerator_extensionGetterMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForType * p = (const cMapElement_extensionGetterMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForType) ;
  return p->mAttribute_mInputFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @extensionGetterMapForType type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForType ("extensionGetterMapForType",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForType::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForType result ;
  const GALGAS_extensionGetterMapForType * p = (const GALGAS_extensionGetterMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForBuildingContext::cMapElement_extensionGetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mExtensionGetterMapForType (in_mExtensionGetterMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_extensionGetterMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mExtensionGetterMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_extensionGetterMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForBuildingContext (mAttribute_lkey, mAttribute_mExtensionGetterMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_extensionGetterMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtensionGetterMapForType" ":" ;
  mAttribute_mExtensionGetterMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_extensionGetterMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForBuildingContext * operand = (cMapElement_extensionGetterMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExtensionGetterMapForType.objectCompare (operand->mAttribute_mExtensionGetterMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext::GALGAS_extensionGetterMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext::GALGAS_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext & GALGAS_extensionGetterMapForBuildingContext::operator = (const GALGAS_extensionGetterMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForBuildingContext & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_extensionGetterMapForType & inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionGetterMapForType inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_extensionGetterMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_extensionGetterMapForType & outArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mExtensionGetterMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType GALGAS_extensionGetterMapForBuildingContext::getter_mExtensionGetterMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  GALGAS_extensionGetterMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    result = p->mAttribute_mExtensionGetterMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionGetterMapForBuildingContext::setter_setMExtensionGetterMapForTypeForKey (GALGAS_extensionGetterMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_extensionGetterMapForBuildingContext * p = (cMapElement_extensionGetterMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
    p->mAttribute_mExtensionGetterMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_extensionGetterMapForBuildingContext * GALGAS_extensionGetterMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForBuildingContext * result = (cMapElement_extensionGetterMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extensionGetterMapForBuildingContext::cEnumerator_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext_2D_element cEnumerator_extensionGetterMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return GALGAS_extensionGetterMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mExtensionGetterMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_extensionGetterMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForType cEnumerator_extensionGetterMapForBuildingContext::current_mExtensionGetterMapForType (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForBuildingContext * p = (const cMapElement_extensionGetterMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForBuildingContext) ;
  return p->mAttribute_mExtensionGetterMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @extensionGetterMapForBuildingContext type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ("extensionGetterMapForBuildingContext",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionGetterMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionGetterMapForBuildingContext GALGAS_extensionGetterMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForBuildingContext result ;
  const GALGAS_extensionGetterMapForBuildingContext * p = (const GALGAS_extensionGetterMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension getter '@semanticDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_semanticDeclarationAST_keyRepresentation> gExtensionGetterTable_semanticDeclarationAST_keyRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_keyRepresentation (const int32_t inClassIndex,
                                             enterExtensionGetter_semanticDeclarationAST_keyRepresentation inGetter) {
  gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_semanticDeclarationAST_keyRepresentation (void) {
  gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticDeclarationAST_keyRepresentation (NULL,
                                                                     freeExtensionGetter_semanticDeclarationAST_keyRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_semanticDeclarationAST_keyRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.count ()) {
      f = gExtensionGetterTable_semanticDeclarationAST_keyRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.count ()) {
           f = gExtensionGetterTable_semanticDeclarationAST_keyRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_semanticDeclarationAST_keyRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@semanticDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext> gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext inMethod) {
  gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_semanticDeclarationAST_enterInSemanticContext (void) {
  gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticDeclarationAST_enterInSemanticContext (NULL,
                                                                          freeExtensionMethod_semanticDeclarationAST_enterInSemanticContext) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                 const GALGAS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                 const GALGAS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                 const GALGAS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                 GALGAS_semanticContext & io_ioSemanticContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticDeclarationAST_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticDeclarationAST_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inExtensionMethodMapForBuildingContext, constin_inExtensionGetterMapForBuildingContext, constin_inExtensionSetterMapForBuildingContext, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension Getter '@predefinedTypeKindEnum defaultConstructorName'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_defaultConstructorName (const GALGAS_predefinedTypeKindEnum & inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const GALGAS_predefinedTypeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outName = GALGAS_string ("default") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outName = GALGAS_string ("emptyBinarySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outName = GALGAS_string ("emptySet") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outName = GALGAS_string ("emptyData") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outName = GALGAS_string ("nowhere") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outName = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outName = GALGAS_string ("zero") ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outName = GALGAS_string ("start") ;
    }
    break ;
  }
//---
  return result_outName ;
}




//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperExtensionMap::cMapElement_wrapperExtensionMap (const GALGAS_lstring & inKey
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_wrapperExtensionMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_wrapperExtensionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_wrapperExtensionMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_wrapperExtensionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_wrapperExtensionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_wrapperExtensionMap * operand = (cMapElement_wrapperExtensionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap::GALGAS_wrapperExtensionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap::GALGAS_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap & GALGAS_wrapperExtensionMap::operator = (const GALGAS_wrapperExtensionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::constructor_mapWithMapToOverride (const GALGAS_wrapperExtensionMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_wrapperExtensionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@wrapperExtensionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_wrapperExtensionMap::setter_insertKey (GALGAS_lstring inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * p = NULL ;
  macroMyNew (p, cMapElement_wrapperExtensionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_wrapperExtensionMap * GALGAS_wrapperExtensionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_wrapperExtensionMap * result = (cMapElement_wrapperExtensionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_wrapperExtensionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_wrapperExtensionMap::cEnumerator_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap_2D_element cEnumerator_wrapperExtensionMap::current (LOCATION_ARGS) const {
  const cMapElement_wrapperExtensionMap * p = (const cMapElement_wrapperExtensionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_wrapperExtensionMap) ;
  return GALGAS_wrapperExtensionMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_wrapperExtensionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @wrapperExtensionMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_wrapperExtensionMap ("wrapperExtensionMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_wrapperExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_wrapperExtensionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_wrapperExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_wrapperExtensionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_wrapperExtensionMap result ;
  const GALGAS_wrapperExtensionMap * p = (const GALGAS_wrapperExtensionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_wrapperExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("wrapperExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        '@semanticTypePrecedenceGraph' graph                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_semanticDeclarationAST inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_topologicalSort (GALGAS_semanticDeclarationListAST & outSortedList,
                                                                 GALGAS_lstringlist & outSortedKeyList,
                                                                 GALGAS_semanticDeclarationListAST & outUnsortedList,
                                                                 GALGAS_lstringlist & outUnsortedKeyList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GALGAS_semanticDeclarationListAST (unsortedList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (sortedList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_semanticDeclarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_semanticDeclarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GALGAS_semanticDeclarationListAST (unsortedList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (sortedList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (unsortedList) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_semanticDeclarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_semanticDeclarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_semanticDeclarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_semanticDeclarationListAST (infoList) ;
  GALGAS_semanticDeclarationListAST::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inNodesToExclude,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTypePrecedenceGraph type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  const GALGAS_semanticTypePrecedenceGraph * p = (const GALGAS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

