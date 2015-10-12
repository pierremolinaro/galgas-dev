#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


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

GALGAS_setterMap GALGAS_setterMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_setterMap::modifier_insertKey (GALGAS_lstring inKey,
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

void GALGAS_setterMap::modifier_insertOrReplace (GALGAS_lstring inKey,
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

GALGAS_methodKind GALGAS_setterMap::reader_mKindForKey (const GALGAS_string & inKey,
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

GALGAS_formalParameterSignature GALGAS_setterMap::reader_mParameterListForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_setterMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
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

GALGAS_methodQualifier GALGAS_setterMap::reader_mQualifierForKey (const GALGAS_string & inKey,
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

GALGAS_string GALGAS_setterMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
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

void GALGAS_setterMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
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

void GALGAS_setterMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
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

void GALGAS_setterMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_setterMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
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

void GALGAS_setterMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_instanceMethodMap GALGAS_instanceMethodMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_instanceMethodMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_methodKind GALGAS_instanceMethodMap::reader_mKindForKey (const GALGAS_string & inKey,
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

GALGAS_formalParameterSignature GALGAS_instanceMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
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

GALGAS_location GALGAS_instanceMethodMap::reader_mDeclarationLocationForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_instanceMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
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

GALGAS_methodQualifier GALGAS_instanceMethodMap::reader_mQualifierForKey (const GALGAS_string & inKey,
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

GALGAS_string GALGAS_instanceMethodMap::reader_mErrorMessageForKey (const GALGAS_string & inKey,
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

void GALGAS_instanceMethodMap::modifier_setMKindForKey (GALGAS_methodKind inAttributeValue,
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

void GALGAS_instanceMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
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

void GALGAS_instanceMethodMap::modifier_setMDeclarationLocationForKey (GALGAS_location inAttributeValue,
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

void GALGAS_instanceMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_instanceMethodMap::modifier_setMQualifierForKey (GALGAS_methodQualifier inAttributeValue,
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

void GALGAS_instanceMethodMap::modifier_setMErrorMessageForKey (GALGAS_string inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_classMethodMap GALGAS_classMethodMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_classMethodMap::modifier_insertKey (GALGAS_lstring inKey,
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

void GALGAS_classMethodMap::modifier_insertOrReplace (GALGAS_lstring inKey,
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

GALGAS_formalParameterSignature GALGAS_classMethodMap::reader_mParameterListForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_classMethodMap::reader_mHasCompilerArgumentForKey (const GALGAS_string & inKey,
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

void GALGAS_classMethodMap::modifier_setMParameterListForKey (GALGAS_formalParameterSignature inAttributeValue,
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

void GALGAS_classMethodMap::modifier_setMHasCompilerArgumentForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
    result.addObject (attributes) ;
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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

void GALGAS_enumerationDescriptorList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

void GALGAS_enumerationDescriptorList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
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

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::operator_concat (const GALGAS_enumerationDescriptorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
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

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDescriptorList GALGAS_enumerationDescriptorList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationDescriptorList result = GALGAS_enumerationDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationDescriptorList::dotAssign_operation (const GALGAS_enumerationDescriptorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_enumerationDescriptorList::reader_mEnumeratedTypeAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_enumerationDescriptorList::reader_mEnumerationNameAtIndex (const GALGAS_uint & inIndex,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
//                                                                                                                     *
//                                   Class for element of '@typedPropertyList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typedPropertyList : public cCollectionElement {
  public : GALGAS_typedPropertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                 const GALGAS_lstring & in_mAttributeName,
                                                 const GALGAS_bool & in_mHasSetter,
                                                 const GALGAS_bool & in_mHasGetter
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

cCollectionElement_typedPropertyList::cCollectionElement_typedPropertyList (const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                                            const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_bool & in_mHasSetter,
                                                                            const GALGAS_bool & in_mHasGetter
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeProxy, in_mAttributeName, in_mHasSetter, in_mHasGetter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typedPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typedPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typedPropertyList (mObject.mAttribute_mAttributeTypeProxy, mObject.mAttribute_mAttributeName, mObject.mAttribute_mHasSetter, mObject.mAttribute_mHasGetter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typedPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeTypeProxy" ":" ;
  mObject.mAttribute_mAttributeTypeProxy.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasSetter" ":" ;
  mObject.mAttribute_mHasSetter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasGetter" ":" ;
  mObject.mAttribute_mHasGetter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typedPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typedPropertyList * operand = (cCollectionElement_typedPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typedPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList::GALGAS_typedPropertyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const GALGAS_lstring & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_bool & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typedPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAttributeTypeProxy,
                                                          const GALGAS_lstring & in_mAttributeName,
                                                          const GALGAS_bool & in_mHasSetter,
                                                          const GALGAS_bool & in_mHasGetter
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_typedPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_typedPropertyList (in_mAttributeTypeProxy,
                                                       in_mAttributeName,
                                                       in_mHasSetter,
                                                       in_mHasGetter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_bool & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_bool inOperand2,
                                                       const GALGAS_bool inOperand3,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typedPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
      outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
      outOperand2 = p->mObject.mAttribute_mHasSetter ;
      outOperand3 = p->mObject.mAttribute_mHasGetter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_bool & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_bool & outOperand3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    outOperand0 = p->mObject.mAttribute_mAttributeTypeProxy ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
    outOperand2 = p->mObject.mAttribute_mHasSetter ;
    outOperand3 = p->mObject.mAttribute_mHasGetter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::operator_concat (const GALGAS_typedPropertyList & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::add_operation (const GALGAS_typedPropertyList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result = GALGAS_typedPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typedPropertyList::dotAssign_operation (const GALGAS_typedPropertyList inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typedPropertyList::reader_mAttributeTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeTypeProxy ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedPropertyList::reader_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasSetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasSetter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typedPropertyList::reader_mHasGetterAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typedPropertyList * p = (cCollectionElement_typedPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
    result = p->mObject.mAttribute_mHasGetter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typedPropertyList::cEnumerator_typedPropertyList (const GALGAS_typedPropertyList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList_2D_element cEnumerator_typedPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_typedPropertyList::current_mAttributeTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_typedPropertyList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasSetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_typedPropertyList::current_mHasGetter (LOCATION_ARGS) const {
  const cCollectionElement_typedPropertyList * p = (const cCollectionElement_typedPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typedPropertyList) ;
  return p->mObject.mAttribute_mHasGetter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typedPropertyList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedPropertyList ("typedPropertyList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedPropertyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_typedPropertyList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typedPropertyList result ;
  const GALGAS_typedPropertyList * p = (const GALGAS_typedPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_stringset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_stringset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bool == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_binaryset (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_binaryset == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_function (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_location (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_location == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_type (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_type == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_object (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_object == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_data (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_data == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_filewrapper (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_filewrapper == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_application (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_application == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_predefined_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_predefinedTypeKindEnum::reader_isPredefined_5F_timer (UNUSED_LOCATION_ARGS) const {
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

GALGAS_bool GALGAS_typeKindEnum::reader_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isUniqueMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uniqueMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isMapProxyType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapProxyType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isArrayType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKindEnum::reader_isPredefinedType (UNUSED_LOCATION_ARGS) const {
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

GALGAS_attributeMap GALGAS_attributeMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_attributeMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeMap::reader_mAttributeTypeForKey (const GALGAS_string & inKey,
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

void GALGAS_attributeMap::modifier_setMAttributeTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_bool GALGAS_headerKind::reader_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oneHeader == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_headerKind::reader_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
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

GALGAS_constantIndexMap GALGAS_constantIndexMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_constantIndexMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_uint GALGAS_constantIndexMap::reader_mIndexForKey (const GALGAS_string & inKey,
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

GALGAS_unifiedTypeMapProxyList GALGAS_constantIndexMap::reader_mAssociatedTypeListForKey (const GALGAS_string & inKey,
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

void GALGAS_constantIndexMap::modifier_setMIndexForKey (GALGAS_uint inAttributeValue,
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

void GALGAS_constantIndexMap::modifier_setMAssociatedTypeListForKey (GALGAS_unifiedTypeMapProxyList inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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
                                                        const GALGAS_getterMap & in_mReaderMap,
                                                        const GALGAS_setterMap & in_mModifierMap,
                                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                                        const GALGAS_stringlist & in_mEnumeratorVariants,
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
mAttribute_mReaderMap (in_mReaderMap),
mAttribute_mModifierMap (in_mModifierMap),
mAttribute_mInstanceMethodMap (in_mInstanceMethodMap),
mAttribute_mClassMethodMap (in_mClassMethodMap),
mAttribute_mEnumerationDescriptor (in_mEnumerationDescriptor),
mAttribute_mEnumeratorVariants (in_mEnumeratorVariants),
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
  return mAttribute_lkey.isValid () && mAttribute_mIsPredefined.isValid () && mAttribute_mIsConcrete.isValid () && mAttribute_mSuperType.isValid () && mAttribute_mTypeKindEnum.isValid () && mAttribute_mSupportCollectionValue.isValid () && mAttribute_mAllTypedAttributeList.isValid () && mAttribute_mAttributeMap.isValid () && mAttribute_mCurrentTypedAttributeList.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mReaderMap.isValid () && mAttribute_mModifierMap.isValid () && mAttribute_mInstanceMethodMap.isValid () && mAttribute_mClassMethodMap.isValid () && mAttribute_mEnumerationDescriptor.isValid () && mAttribute_mEnumeratorVariants.isValid () && mAttribute_mHandledOperatorFlags.isValid () && mAttribute_mAddAssignOperatorArguments.isValid () && mAttribute_mEnumConstantMap.isValid () && mAttribute_mEnumConstantList.isValid () && mAttribute_mMapSearchMethodList.isValid () && mAttribute_mMapProxySearchConstructorList.isValid () && mAttribute_mGenerateHeaderInSeparateFile.isValid () && mAttribute_mTypeForEnumeratedElement.isValid () && mAttribute_mDefaultConstructorName.isValid () && mAttribute_mHeaderFileName.isValid () && mAttribute_mHeaderKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mIsPredefined, mAttribute_mIsConcrete, mAttribute_mSuperType, mAttribute_mTypeKindEnum, mAttribute_mSupportCollectionValue, mAttribute_mAllTypedAttributeList, mAttribute_mAttributeMap, mAttribute_mCurrentTypedAttributeList, mAttribute_mConstructorMap, mAttribute_mReaderMap, mAttribute_mModifierMap, mAttribute_mInstanceMethodMap, mAttribute_mClassMethodMap, mAttribute_mEnumerationDescriptor, mAttribute_mEnumeratorVariants, mAttribute_mHandledOperatorFlags, mAttribute_mAddAssignOperatorArguments, mAttribute_mEnumConstantMap, mAttribute_mEnumConstantList, mAttribute_mMapSearchMethodList, mAttribute_mMapProxySearchConstructorList, mAttribute_mGenerateHeaderInSeparateFile, mAttribute_mTypeForEnumeratedElement, mAttribute_mDefaultConstructorName, mAttribute_mHeaderFileName, mAttribute_mHeaderKind COMMA_HERE)) ;
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
  ioString << "mReaderMap" ":" ;
  mAttribute_mReaderMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModifierMap" ":" ;
  mAttribute_mModifierMap.description (ioString, inIndentation) ;
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
  ioString << "mEnumeratorVariants" ":" ;
  mAttribute_mEnumeratorVariants.description (ioString, inIndentation) ;
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
    result = mAttribute_mReaderMap.objectCompare (operand->mAttribute_mReaderMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mModifierMap.objectCompare (operand->mAttribute_mModifierMap) ;
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
    result = mAttribute_mEnumeratorVariants.objectCompare (operand->mAttribute_mEnumeratorVariants) ;
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
AC_GALGAS_uniqueMap () {
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
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_insertKey (GALGAS_lstring inKey,
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
                                                GALGAS_stringlist inArgument14,
                                                GALGAS_uint inArgument15,
                                                GALGAS_functionSignature inArgument16,
                                                GALGAS_constantIndexMap inArgument17,
                                                GALGAS_enumConstantList inArgument18,
                                                GALGAS_mapSearchMethodListAST inArgument19,
                                                GALGAS_mapSearchMethodListAST inArgument20,
                                                GALGAS_bool inArgument21,
                                                GALGAS_unifiedTypeMap_2D_proxy inArgument22,
                                                GALGAS_string inArgument23,
                                                GALGAS_string inArgument24,
                                                GALGAS_headerKind inArgument25,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9, inArgument10, inArgument11, inArgument12, inArgument13, inArgument14, inArgument15, inArgument16, inArgument17, inArgument18, inArgument19, inArgument20, inArgument21, inArgument22, inArgument23, inArgument24, inArgument25 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' type has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        0,
                        NULL,
                        kInsertErrorMessage,
                        kShadowErrorMessage
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
                                              GALGAS_stringlist & outArgument14,
                                              GALGAS_uint & outArgument15,
                                              GALGAS_functionSignature & outArgument16,
                                              GALGAS_constantIndexMap & outArgument17,
                                              GALGAS_enumConstantList & outArgument18,
                                              GALGAS_mapSearchMethodListAST & outArgument19,
                                              GALGAS_mapSearchMethodListAST & outArgument20,
                                              GALGAS_bool & outArgument21,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument22,
                                              GALGAS_string & outArgument23,
                                              GALGAS_string & outArgument24,
                                              GALGAS_headerKind & outArgument25,
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
    outArgument25.drop () ;
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
    outArgument9 = p->mAttribute_mReaderMap ;
    outArgument10 = p->mAttribute_mModifierMap ;
    outArgument11 = p->mAttribute_mInstanceMethodMap ;
    outArgument12 = p->mAttribute_mClassMethodMap ;
    outArgument13 = p->mAttribute_mEnumerationDescriptor ;
    outArgument14 = p->mAttribute_mEnumeratorVariants ;
    outArgument15 = p->mAttribute_mHandledOperatorFlags ;
    outArgument16 = p->mAttribute_mAddAssignOperatorArguments ;
    outArgument17 = p->mAttribute_mEnumConstantMap ;
    outArgument18 = p->mAttribute_mEnumConstantList ;
    outArgument19 = p->mAttribute_mMapSearchMethodList ;
    outArgument20 = p->mAttribute_mMapProxySearchConstructorList ;
    outArgument21 = p->mAttribute_mGenerateHeaderInSeparateFile ;
    outArgument22 = p->mAttribute_mTypeForEnumeratedElement ;
    outArgument23 = p->mAttribute_mDefaultConstructorName ;
    outArgument24 = p->mAttribute_mHeaderFileName ;
    outArgument25 = p->mAttribute_mHeaderKind ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsPredefinedForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_unifiedTypeMap::reader_mIsConcreteForKey (const GALGAS_string & inKey,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mSuperTypeForKey (const GALGAS_string & inKey,
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

GALGAS_typeKindEnum GALGAS_unifiedTypeMap::reader_mTypeKindEnumForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_unifiedTypeMap::reader_mSupportCollectionValueForKey (const GALGAS_string & inKey,
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

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mAllTypedAttributeListForKey (const GALGAS_string & inKey,
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

GALGAS_attributeMap GALGAS_unifiedTypeMap::reader_mAttributeMapForKey (const GALGAS_string & inKey,
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

GALGAS_typedPropertyList GALGAS_unifiedTypeMap::reader_mCurrentTypedAttributeListForKey (const GALGAS_string & inKey,
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

GALGAS_constructorMap GALGAS_unifiedTypeMap::reader_mConstructorMapForKey (const GALGAS_string & inKey,
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

GALGAS_getterMap GALGAS_unifiedTypeMap::reader_mReaderMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_getterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mReaderMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap GALGAS_unifiedTypeMap::reader_mModifierMapForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_setterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mModifierMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanceMethodMap GALGAS_unifiedTypeMap::reader_mInstanceMethodMapForKey (const GALGAS_string & inKey,
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

GALGAS_classMethodMap GALGAS_unifiedTypeMap::reader_mClassMethodMapForKey (const GALGAS_string & inKey,
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

GALGAS_enumerationDescriptorList GALGAS_unifiedTypeMap::reader_mEnumerationDescriptorForKey (const GALGAS_string & inKey,
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

GALGAS_stringlist GALGAS_unifiedTypeMap::reader_mEnumeratorVariantsForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mEnumeratorVariants ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_unifiedTypeMap::reader_mHandledOperatorFlagsForKey (const GALGAS_string & inKey,
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

GALGAS_functionSignature GALGAS_unifiedTypeMap::reader_mAddAssignOperatorArgumentsForKey (const GALGAS_string & inKey,
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

GALGAS_constantIndexMap GALGAS_unifiedTypeMap::reader_mEnumConstantMapForKey (const GALGAS_string & inKey,
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

GALGAS_enumConstantList GALGAS_unifiedTypeMap::reader_mEnumConstantListForKey (const GALGAS_string & inKey,
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

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapSearchMethodListForKey (const GALGAS_string & inKey,
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

GALGAS_mapSearchMethodListAST GALGAS_unifiedTypeMap::reader_mMapProxySearchConstructorListForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_unifiedTypeMap::reader_mGenerateHeaderInSeparateFileForKey (const GALGAS_string & inKey,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap::reader_mTypeForEnumeratedElementForKey (const GALGAS_string & inKey,
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

GALGAS_string GALGAS_unifiedTypeMap::reader_mDefaultConstructorNameForKey (const GALGAS_string & inKey,
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

GALGAS_string GALGAS_unifiedTypeMap::reader_mHeaderFileNameForKey (const GALGAS_string & inKey,
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

GALGAS_headerKind GALGAS_unifiedTypeMap::reader_mHeaderKindForKey (const GALGAS_string & inKey,
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

void GALGAS_unifiedTypeMap::modifier_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMIsConcreteForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMSuperTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMTypeKindEnumForKey (GALGAS_typeKindEnum inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMSupportCollectionValueForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMAllTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMAttributeMapForKey (GALGAS_attributeMap inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMCurrentTypedAttributeListForKey (GALGAS_typedPropertyList inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMReaderMapForKey (GALGAS_getterMap inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mReaderMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMModifierMapForKey (GALGAS_setterMap inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mModifierMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMInstanceMethodMapForKey (GALGAS_instanceMethodMap inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMClassMethodMapForKey (GALGAS_classMethodMap inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMEnumerationDescriptorForKey (GALGAS_enumerationDescriptorList inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMEnumeratorVariantsForKey (GALGAS_stringlist inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mEnumeratorVariants = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMHandledOperatorFlagsForKey (GALGAS_uint inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMAddAssignOperatorArgumentsForKey (GALGAS_functionSignature inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantMapForKey (GALGAS_constantIndexMap inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMEnumConstantListForKey (GALGAS_enumConstantList inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMMapSearchMethodListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMMapProxySearchConstructorListForKey (GALGAS_mapSearchMethodListAST inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMGenerateHeaderInSeparateFileForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMTypeForEnumeratedElementForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMDefaultConstructorNameForKey (GALGAS_string inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
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

void GALGAS_unifiedTypeMap::modifier_setMHeaderKindForKey (GALGAS_headerKind inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_getterMap cEnumerator_unifiedTypeMap::current_mReaderMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mReaderMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setterMap cEnumerator_unifiedTypeMap::current_mModifierMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mModifierMap ;
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

GALGAS_stringlist cEnumerator_unifiedTypeMap::current_mEnumeratorVariants (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mEnumeratorVariants ;
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
//                                                                                                                     *
//                                    Class for element of '@enumConstantList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumConstantList : public cCollectionElement {
  public : GALGAS_enumConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
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

cCollectionElement_enumConstantList::cCollectionElement_enumConstantList (const GALGAS_lstring & in_mConstantName,
                                                                          const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mAssociatedValueDefinitionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumConstantList (mObject.mAttribute_mConstantName, mObject.mAttribute_mAssociatedValueDefinitionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mAttribute_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValueDefinitionList" ":" ;
  mObject.mAttribute_mAssociatedValueDefinitionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumConstantList * operand = (cCollectionElement_enumConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList::GALGAS_enumConstantList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList::GALGAS_enumConstantList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS__32_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_enumConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mConstantName,
                                                         const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_enumConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumConstantList (in_mConstantName,
                                                      in_mAssociatedValueDefinitionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS__32_lstringlist & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS__32_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS__32_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
      outOperand0 = p->mObject.mAttribute_mConstantName ;
      outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS__32_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS__32_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS__32_lstringlist & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS__32_lstringlist & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    outOperand0 = p->mObject.mAttribute_mConstantName ;
    outOperand1 = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::operator_concat (const GALGAS_enumConstantList & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::add_operation (const GALGAS_enumConstantList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::reader_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantList result = GALGAS_enumConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantList::dotAssign_operation (const GALGAS_enumConstantList inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantList::reader_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS_enumConstantList::reader_mAssociatedValueDefinitionListAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumConstantList * p = (cCollectionElement_enumConstantList *) attributes.ptr () ;
  GALGAS__32_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
    result = p->mObject.mAttribute_mAssociatedValueDefinitionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumConstantList::cEnumerator_enumConstantList (const GALGAS_enumConstantList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList_2D_element cEnumerator_enumConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist cEnumerator_enumConstantList::current_mAssociatedValueDefinitionList (LOCATION_ARGS) const {
  const cCollectionElement_enumConstantList * p = (const cCollectionElement_enumConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumConstantList) ;
  return p->mObject.mAttribute_mAssociatedValueDefinitionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @enumConstantList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantList ("enumConstantList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantList GALGAS_enumConstantList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantList result ;
  const GALGAS_enumConstantList * p = (const GALGAS_enumConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GALGAS_grammarLabelMap GALGAS_grammarLabelMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_grammarLabelMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_formalParameterSignature GALGAS_grammarLabelMap::reader_mLabelSignatureForKey (const GALGAS_string & inKey,
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

void GALGAS_grammarLabelMap::modifier_setMLabelSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_grammarMap GALGAS_grammarMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_grammarMap::modifier_insertGrammar (GALGAS_lstring inKey,
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

GALGAS_grammarLabelMap GALGAS_grammarMap::reader_mLabelMapForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_grammarMap::reader_mHasIndexingForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_grammarMap::reader_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
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

void GALGAS_grammarMap::modifier_setMLabelMapForKey (GALGAS_grammarLabelMap inAttributeValue,
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

void GALGAS_grammarMap::modifier_setMHasIndexingForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_grammarMap::modifier_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_routineMap GALGAS_routineMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_routineMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_formalParameterSignature GALGAS_routineMap::reader_mRoutineSignatureForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_routineMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
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

void GALGAS_routineMap::modifier_setMRoutineSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
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

void GALGAS_routineMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_functionMap GALGAS_functionMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_functionMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_functionSignature GALGAS_functionMap::reader_mFunctionSignatureForKey (const GALGAS_string & inKey,
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

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap::reader_mResultTypeForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_functionMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
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

void GALGAS_functionMap::modifier_setMFunctionSignatureForKey (GALGAS_functionSignature inAttributeValue,
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

void GALGAS_functionMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
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

void GALGAS_functionMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_wrapperFileMap GALGAS_wrapperFileMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_wrapperFileMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_string GALGAS_wrapperFileMap::reader_mAbsoluteFilePathForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_wrapperFileMap::reader_mIsTextFileForKey (const GALGAS_string & inKey,
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

GALGAS_uint GALGAS_wrapperFileMap::reader_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
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

GALGAS_uint GALGAS_wrapperFileMap::reader_mWrapperFileIndexForKey (const GALGAS_string & inKey,
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

void GALGAS_wrapperFileMap::modifier_setMAbsoluteFilePathForKey (GALGAS_string inAttributeValue,
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

void GALGAS_wrapperFileMap::modifier_setMIsTextFileForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_wrapperFileMap::modifier_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
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

void GALGAS_wrapperFileMap::modifier_setMWrapperFileIndexForKey (GALGAS_uint inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_wrapperDirectoryMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_wrapperFileMap GALGAS_wrapperDirectoryMap::reader_mRegularFileMapForKey (const GALGAS_string & inKey,
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

GALGAS_wrapperDirectoryMap GALGAS_wrapperDirectoryMap::reader_mDirectoryMapForKey (const GALGAS_string & inKey,
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

GALGAS_uint GALGAS_wrapperDirectoryMap::reader_mWrapperDirectoryIndexForKey (const GALGAS_string & inKey,
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

void GALGAS_wrapperDirectoryMap::modifier_setMRegularFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
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

void GALGAS_wrapperDirectoryMap::modifier_setMDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
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

void GALGAS_wrapperDirectoryMap::modifier_setMWrapperDirectoryIndexForKey (GALGAS_uint inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_filewrapperTemplateMap GALGAS_filewrapperTemplateMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_filewrapperTemplateMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_functionSignature GALGAS_filewrapperTemplateMap::reader_mTemplateSignatureForKey (const GALGAS_string & inKey,
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

GALGAS_lstring GALGAS_filewrapperTemplateMap::reader_mFilewrapperTemplatePathForKey (const GALGAS_string & inKey,
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

void GALGAS_filewrapperTemplateMap::modifier_setMTemplateSignatureForKey (GALGAS_functionSignature inAttributeValue,
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

void GALGAS_filewrapperTemplateMap::modifier_setMFilewrapperTemplatePathForKey (GALGAS_lstring inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_filewrapperMap GALGAS_filewrapperMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_filewrapperMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_lstring GALGAS_filewrapperMap::reader_mFilewrapperPathForKey (const GALGAS_string & inKey,
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

GALGAS_lstringlist GALGAS_filewrapperMap::reader_mFilewrapperExtensionListForKey (const GALGAS_string & inKey,
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

GALGAS_wrapperFileMap GALGAS_filewrapperMap::reader_mFilewrapperFileMapForKey (const GALGAS_string & inKey,
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

GALGAS_wrapperDirectoryMap GALGAS_filewrapperMap::reader_mFilewrapperDirectoryMapForKey (const GALGAS_string & inKey,
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

GALGAS_filewrapperTemplateMap GALGAS_filewrapperMap::reader_mFilewrapperTemplateMapForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_filewrapperMap::reader_mIsInternalForKey (const GALGAS_string & inKey,
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

void GALGAS_filewrapperMap::modifier_setMFilewrapperPathForKey (GALGAS_lstring inAttributeValue,
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

void GALGAS_filewrapperMap::modifier_setMFilewrapperExtensionListForKey (GALGAS_lstringlist inAttributeValue,
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

void GALGAS_filewrapperMap::modifier_setMFilewrapperFileMapForKey (GALGAS_wrapperFileMap inAttributeValue,
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

void GALGAS_filewrapperMap::modifier_setMFilewrapperDirectoryMapForKey (GALGAS_wrapperDirectoryMap inAttributeValue,
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

void GALGAS_filewrapperMap::modifier_setMFilewrapperTemplateMapForKey (GALGAS_filewrapperTemplateMap inAttributeValue,
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

void GALGAS_filewrapperMap::modifier_setMIsInternalForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_optionComponentMapForSemanticAnalysis GALGAS_optionComponentMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_bool GALGAS_optionComponentMapForSemanticAnalysis::reader_mIsPredefinedForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mBoolOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mUIntOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mStringOptionMapForKey (const GALGAS_string & inKey,
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

GALGAS_commandLineOptionMap GALGAS_optionComponentMapForSemanticAnalysis::reader_mStringListOptionMapForKey (const GALGAS_string & inKey,
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMIsPredefinedForKey (GALGAS_bool inAttributeValue,
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMBoolOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMUIntOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMStringOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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

void GALGAS_optionComponentMapForSemanticAnalysis::modifier_setMStringListOptionMapForKey (GALGAS_commandLineOptionMap inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

cMapElement_optionMapForSemanticAnalysis::cMapElement_optionMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mOptionType,
                                                                                    const GALGAS_char & in_mOptionChar,
                                                                                    const GALGAS_string & in_mOptionString,
                                                                                    const GALGAS_string & in_mComment,
                                                                                    const GALGAS_string & in_mDefaultValue
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mOptionType (in_mOptionType),
mAttribute_mOptionChar (in_mOptionChar),
mAttribute_mOptionString (in_mOptionString),
mAttribute_mComment (in_mComment),
mAttribute_mDefaultValue (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_optionMapForSemanticAnalysis::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOptionType.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () && mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_optionMapForSemanticAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_optionMapForSemanticAnalysis (mAttribute_lkey, mAttribute_mOptionType, mAttribute_mOptionChar, mAttribute_mOptionString, mAttribute_mComment, mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_optionMapForSemanticAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionType" ":" ;
  mAttribute_mOptionType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionChar" ":" ;
  mAttribute_mOptionChar.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionString" ":" ;
  mAttribute_mOptionString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mAttribute_mComment.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mAttribute_mDefaultValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_optionMapForSemanticAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_optionMapForSemanticAnalysis * operand = (cMapElement_optionMapForSemanticAnalysis *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionType.objectCompare (operand->mAttribute_mOptionType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionChar.objectCompare (operand->mAttribute_mOptionChar) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionString.objectCompare (operand->mAttribute_mOptionString) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (operand->mAttribute_mComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultValue.objectCompare (operand->mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis::GALGAS_optionMapForSemanticAnalysis (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis::GALGAS_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis & GALGAS_optionMapForSemanticAnalysis::operator = (const GALGAS_optionMapForSemanticAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::constructor_mapWithMapToOverride (const GALGAS_optionMapForSemanticAnalysis & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_optionMapForSemanticAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                               const GALGAS_char & inArgument1,
                                                               const GALGAS_string & inArgument2,
                                                               const GALGAS_string & inArgument3,
                                                               const GALGAS_string & inArgument4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@optionMapForSemanticAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_char inArgument1,
                                                              GALGAS_string inArgument2,
                                                              GALGAS_string inArgument3,
                                                              GALGAS_string inArgument4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * p = NULL ;
  macroMyNew (p, cMapElement_optionMapForSemanticAnalysis (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey = "the '%K' command line option is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                            GALGAS_char & outArgument1,
                                                            GALGAS_string & outArgument2,
                                                            GALGAS_string & outArgument3,
                                                            GALGAS_string & outArgument4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_optionMapForSemanticAnalysis_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    outArgument0 = p->mAttribute_mOptionType ;
    outArgument1 = p->mAttribute_mOptionChar ;
    outArgument2 = p->mAttribute_mOptionString ;
    outArgument3 = p->mAttribute_mComment ;
    outArgument4 = p->mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_optionMapForSemanticAnalysis::reader_mOptionTypeForKey (const GALGAS_string & inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_optionMapForSemanticAnalysis::reader_mOptionCharForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_char result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionChar ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mOptionStringForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mOptionString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mCommentForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionMapForSemanticAnalysis::reader_mDefaultValueForKey (const GALGAS_string & inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    result = p->mAttribute_mDefaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionCharForKey (GALGAS_char inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionChar = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMOptionStringForKey (GALGAS_string inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mOptionString = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMCommentForKey (GALGAS_string inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mComment = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_optionMapForSemanticAnalysis::modifier_setMDefaultValueForKey (GALGAS_string inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_optionMapForSemanticAnalysis * p = (cMapElement_optionMapForSemanticAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
    p->mAttribute_mDefaultValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_optionMapForSemanticAnalysis * GALGAS_optionMapForSemanticAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_optionMapForSemanticAnalysis * result = (cMapElement_optionMapForSemanticAnalysis *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_optionMapForSemanticAnalysis) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_optionMapForSemanticAnalysis::cEnumerator_optionMapForSemanticAnalysis (const GALGAS_optionMapForSemanticAnalysis & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis_2D_element cEnumerator_optionMapForSemanticAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return GALGAS_optionMapForSemanticAnalysis_2D_element (p->mAttribute_lkey, p->mAttribute_mOptionType, p->mAttribute_mOptionChar, p->mAttribute_mOptionString, p->mAttribute_mComment, p->mAttribute_mDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_optionMapForSemanticAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_optionMapForSemanticAnalysis::current_mOptionType (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cEnumerator_optionMapForSemanticAnalysis::current_mOptionChar (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mOptionString (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mComment (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_optionMapForSemanticAnalysis::current_mDefaultValue (LOCATION_ARGS) const {
  const cMapElement_optionMapForSemanticAnalysis * p = (const cMapElement_optionMapForSemanticAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_optionMapForSemanticAnalysis) ;
  return p->mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @optionMapForSemanticAnalysis type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ("optionMapForSemanticAnalysis",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionMapForSemanticAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionMapForSemanticAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionMapForSemanticAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionMapForSemanticAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionMapForSemanticAnalysis GALGAS_optionMapForSemanticAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionMapForSemanticAnalysis result ;
  const GALGAS_optionMapForSemanticAnalysis * p = (const GALGAS_optionMapForSemanticAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionMapForSemanticAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionMapForSemanticAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lexiqueComponentMapForSemanticAnalysis GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_terminalMap GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mTerminalMapForKey (const GALGAS_string & inKey,
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

GALGAS_indexingListAST GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mIndexingListASTForKey (const GALGAS_string & inKey,
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

GALGAS_lstring GALGAS_lexiqueComponentMapForSemanticAnalysis::reader_mIndexingDirectoryForKey (const GALGAS_string & inKey,
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

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMTerminalMapForKey (GALGAS_terminalMap inAttributeValue,
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

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMIndexingListASTForKey (GALGAS_indexingListAST inAttributeValue,
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

void GALGAS_lexiqueComponentMapForSemanticAnalysis::modifier_setMIndexingDirectoryForKey (GALGAS_lstring inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

GALGAS_syntaxComponentMap GALGAS_syntaxComponentMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_syntaxComponentMap::modifier_insertKey (GALGAS_lstring inKey,
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

GALGAS_lstring GALGAS_syntaxComponentMap::reader_mLexiqueNameForKey (const GALGAS_string & inKey,
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

GALGAS_nonterminalDeclarationListAST GALGAS_syntaxComponentMap::reader_mNonterminalDeclarationListForKey (const GALGAS_string & inKey,
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

GALGAS_syntaxRuleListAST GALGAS_syntaxComponentMap::reader_mRuleListForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_syntaxComponentMap::reader_mHasTranslateFeatureForKey (const GALGAS_string & inKey,
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

void GALGAS_syntaxComponentMap::modifier_setMLexiqueNameForKey (GALGAS_lstring inAttributeValue,
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

void GALGAS_syntaxComponentMap::modifier_setMNonterminalDeclarationListForKey (GALGAS_nonterminalDeclarationListAST inAttributeValue,
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

void GALGAS_syntaxComponentMap::modifier_setMRuleListForKey (GALGAS_syntaxRuleListAST inAttributeValue,
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

void GALGAS_syntaxComponentMap::modifier_setMHasTranslateFeatureForKey (GALGAS_bool inAttributeValue,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

cMapElement_categoryMethodMapForType::cMapElement_categoryMethodMapForType (const GALGAS_lstring & inKey,
                                                                            const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalParameterList (in_mFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryMethodMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryMethodMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryMethodMapForType (mAttribute_lkey, mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryMethodMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_categoryMethodMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryMethodMapForType * operand = (cMapElement_categoryMethodMapForType *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalParameterList.objectCompare (operand->mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType::GALGAS_categoryMethodMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType::GALGAS_categoryMethodMapForType (const GALGAS_categoryMethodMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType & GALGAS_categoryMethodMapForType::operator = (const GALGAS_categoryMethodMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryMethodMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForType::constructor_mapWithMapToOverride (const GALGAS_categoryMethodMapForType & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForType::reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_categoryMethodMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_formalParameterListAST & inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryMethodMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForType::modifier_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_formalParameterListAST inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryMethodMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' method has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_categoryMethodMapForType::reader_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryMethodMapForType * p = (const cMapElement_categoryMethodMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryMethodMapForType) ;
    result = p->mAttribute_mFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForType::modifier_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryMethodMapForType * p = (cMapElement_categoryMethodMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryMethodMapForType) ;
    p->mAttribute_mFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryMethodMapForType * GALGAS_categoryMethodMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForType * result = (cMapElement_categoryMethodMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryMethodMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryMethodMapForType::cEnumerator_categoryMethodMapForType (const GALGAS_categoryMethodMapForType & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType_2D_element cEnumerator_categoryMethodMapForType::current (LOCATION_ARGS) const {
  const cMapElement_categoryMethodMapForType * p = (const cMapElement_categoryMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryMethodMapForType) ;
  return GALGAS_categoryMethodMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryMethodMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_categoryMethodMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_categoryMethodMapForType * p = (const cMapElement_categoryMethodMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryMethodMapForType) ;
  return p->mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @categoryMethodMapForType type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodMapForType ("categoryMethodMapForType",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForType::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForType result ;
  const GALGAS_categoryMethodMapForType * p = (const GALGAS_categoryMethodMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryMethodMapForBuildingContext::cMapElement_categoryMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                  const GALGAS_categoryMethodMapForType & in_mCategoryMethodMapForType
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mCategoryMethodMapForType (in_mCategoryMethodMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryMethodMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryMethodMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryMethodMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryMethodMapForBuildingContext (mAttribute_lkey, mAttribute_mCategoryMethodMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryMethodMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCategoryMethodMapForType" ":" ;
  mAttribute_mCategoryMethodMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_categoryMethodMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryMethodMapForBuildingContext * operand = (cMapElement_categoryMethodMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryMethodMapForType.objectCompare (operand->mAttribute_mCategoryMethodMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext::GALGAS_categoryMethodMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext::GALGAS_categoryMethodMapForBuildingContext (const GALGAS_categoryMethodMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext & GALGAS_categoryMethodMapForBuildingContext::operator = (const GALGAS_categoryMethodMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext GALGAS_categoryMethodMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryMethodMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext GALGAS_categoryMethodMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_categoryMethodMapForBuildingContext & inMapToOverride
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext GALGAS_categoryMethodMapForBuildingContext::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_categoryMethodMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                      const GALGAS_categoryMethodMapForType & inArgument0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryMethodMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext::modifier_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_categoryMethodMapForType inArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryMethodMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                   GALGAS_categoryMethodMapForType & outArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_categoryMethodMapForBuildingContext * p = (const cMapElement_categoryMethodMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_categoryMethodMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mCategoryMethodMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType GALGAS_categoryMethodMapForBuildingContext::reader_mCategoryMethodMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryMethodMapForBuildingContext * p = (const cMapElement_categoryMethodMapForBuildingContext *) attributes ;
  GALGAS_categoryMethodMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryMethodMapForBuildingContext) ;
    result = p->mAttribute_mCategoryMethodMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryMethodMapForBuildingContext::modifier_setMCategoryMethodMapForTypeForKey (GALGAS_categoryMethodMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryMethodMapForBuildingContext * p = (cMapElement_categoryMethodMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryMethodMapForBuildingContext) ;
    p->mAttribute_mCategoryMethodMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryMethodMapForBuildingContext * GALGAS_categoryMethodMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_categoryMethodMapForBuildingContext * result = (cMapElement_categoryMethodMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryMethodMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryMethodMapForBuildingContext::cEnumerator_categoryMethodMapForBuildingContext (const GALGAS_categoryMethodMapForBuildingContext & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext_2D_element cEnumerator_categoryMethodMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_categoryMethodMapForBuildingContext * p = (const cMapElement_categoryMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryMethodMapForBuildingContext) ;
  return GALGAS_categoryMethodMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mCategoryMethodMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryMethodMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForType cEnumerator_categoryMethodMapForBuildingContext::current_mCategoryMethodMapForType (LOCATION_ARGS) const {
  const cMapElement_categoryMethodMapForBuildingContext * p = (const cMapElement_categoryMethodMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryMethodMapForBuildingContext) ;
  return p->mAttribute_mCategoryMethodMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryMethodMapForBuildingContext type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodMapForBuildingContext ("categoryMethodMapForBuildingContext",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodMapForBuildingContext GALGAS_categoryMethodMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodMapForBuildingContext result ;
  const GALGAS_categoryMethodMapForBuildingContext * p = (const GALGAS_categoryMethodMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryModifierMapForType::cMapElement_categoryModifierMapForType (const GALGAS_lstring & inKey,
                                                                                const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFormalParameterList (in_mFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryModifierMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryModifierMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryModifierMapForType (mAttribute_lkey, mAttribute_mFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryModifierMapForType::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalParameterList" ":" ;
  mAttribute_mFormalParameterList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_categoryModifierMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryModifierMapForType * operand = (cMapElement_categoryModifierMapForType *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalParameterList.objectCompare (operand->mAttribute_mFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType::GALGAS_categoryModifierMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType::GALGAS_categoryModifierMapForType (const GALGAS_categoryModifierMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType & GALGAS_categoryModifierMapForType::operator = (const GALGAS_categoryModifierMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryModifierMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForType::constructor_mapWithMapToOverride (const GALGAS_categoryModifierMapForType & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForType::reader_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_categoryModifierMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_formalParameterListAST & inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryModifierMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryModifierMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForType::modifier_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_formalParameterListAST inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryModifierMapForType (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' setter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_categoryModifierMapForType::reader_mFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryModifierMapForType * p = (const cMapElement_categoryModifierMapForType *) attributes ;
  GALGAS_formalParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryModifierMapForType) ;
    result = p->mAttribute_mFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForType::modifier_setMFormalParameterListForKey (GALGAS_formalParameterListAST inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryModifierMapForType * p = (cMapElement_categoryModifierMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryModifierMapForType) ;
    p->mAttribute_mFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryModifierMapForType * GALGAS_categoryModifierMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForType * result = (cMapElement_categoryModifierMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryModifierMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryModifierMapForType::cEnumerator_categoryModifierMapForType (const GALGAS_categoryModifierMapForType & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType_2D_element cEnumerator_categoryModifierMapForType::current (LOCATION_ARGS) const {
  const cMapElement_categoryModifierMapForType * p = (const cMapElement_categoryModifierMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryModifierMapForType) ;
  return GALGAS_categoryModifierMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryModifierMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cEnumerator_categoryModifierMapForType::current_mFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_categoryModifierMapForType * p = (const cMapElement_categoryModifierMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryModifierMapForType) ;
  return p->mAttribute_mFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @categoryModifierMapForType type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierMapForType ("categoryModifierMapForType",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForType::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForType result ;
  const GALGAS_categoryModifierMapForType * p = (const GALGAS_categoryModifierMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryModifierMapForBuildingContext::cMapElement_categoryModifierMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_categoryModifierMapForType & in_mCategoryModifierMapForType
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mCategoryModifierMapForType (in_mCategoryModifierMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryModifierMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryModifierMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryModifierMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryModifierMapForBuildingContext (mAttribute_lkey, mAttribute_mCategoryModifierMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryModifierMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCategoryModifierMapForType" ":" ;
  mAttribute_mCategoryModifierMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_categoryModifierMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryModifierMapForBuildingContext * operand = (cMapElement_categoryModifierMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryModifierMapForType.objectCompare (operand->mAttribute_mCategoryModifierMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext::GALGAS_categoryModifierMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext::GALGAS_categoryModifierMapForBuildingContext (const GALGAS_categoryModifierMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext & GALGAS_categoryModifierMapForBuildingContext::operator = (const GALGAS_categoryModifierMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext GALGAS_categoryModifierMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryModifierMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext GALGAS_categoryModifierMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_categoryModifierMapForBuildingContext & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext GALGAS_categoryModifierMapForBuildingContext::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_categoryModifierMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_categoryModifierMapForType & inArgument0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryModifierMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryModifierMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext::modifier_insertKey (GALGAS_lstring inKey,
                                                                       GALGAS_categoryModifierMapForType inArgument0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryModifierMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_categoryModifierMapForType & outArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_categoryModifierMapForBuildingContext * p = (const cMapElement_categoryModifierMapForBuildingContext *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_categoryModifierMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mCategoryModifierMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType GALGAS_categoryModifierMapForBuildingContext::reader_mCategoryModifierMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryModifierMapForBuildingContext * p = (const cMapElement_categoryModifierMapForBuildingContext *) attributes ;
  GALGAS_categoryModifierMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryModifierMapForBuildingContext) ;
    result = p->mAttribute_mCategoryModifierMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryModifierMapForBuildingContext::modifier_setMCategoryModifierMapForTypeForKey (GALGAS_categoryModifierMapForType inAttributeValue,
                                                                                                  GALGAS_string inKey,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryModifierMapForBuildingContext * p = (cMapElement_categoryModifierMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryModifierMapForBuildingContext) ;
    p->mAttribute_mCategoryModifierMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryModifierMapForBuildingContext * GALGAS_categoryModifierMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_categoryModifierMapForBuildingContext * result = (cMapElement_categoryModifierMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryModifierMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryModifierMapForBuildingContext::cEnumerator_categoryModifierMapForBuildingContext (const GALGAS_categoryModifierMapForBuildingContext & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext_2D_element cEnumerator_categoryModifierMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_categoryModifierMapForBuildingContext * p = (const cMapElement_categoryModifierMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryModifierMapForBuildingContext) ;
  return GALGAS_categoryModifierMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mCategoryModifierMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryModifierMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForType cEnumerator_categoryModifierMapForBuildingContext::current_mCategoryModifierMapForType (LOCATION_ARGS) const {
  const cMapElement_categoryModifierMapForBuildingContext * p = (const cMapElement_categoryModifierMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryModifierMapForBuildingContext) ;
  return p->mAttribute_mCategoryModifierMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @categoryModifierMapForBuildingContext type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierMapForBuildingContext ("categoryModifierMapForBuildingContext",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierMapForBuildingContext GALGAS_categoryModifierMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierMapForBuildingContext result ;
  const GALGAS_categoryModifierMapForBuildingContext * p = (const GALGAS_categoryModifierMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryReaderMapForType::cMapElement_categoryReaderMapForType (const GALGAS_lstring & inKey,
                                                                            const GALGAS_lstring & in_mResultTypeName,
                                                                            const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mResultTypeName (in_mResultTypeName),
mAttribute_mInputFormalParameterList (in_mInputFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryReaderMapForType::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultTypeName.isValid () && mAttribute_mInputFormalParameterList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryReaderMapForType::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryReaderMapForType (mAttribute_lkey, mAttribute_mResultTypeName, mAttribute_mInputFormalParameterList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryReaderMapForType::description (C_String & ioString, const int32_t inIndentation) const {
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

typeComparisonResult cMapElement_categoryReaderMapForType::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryReaderMapForType * operand = (cMapElement_categoryReaderMapForType *) inOperand ;
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

GALGAS_categoryReaderMapForType::GALGAS_categoryReaderMapForType (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType::GALGAS_categoryReaderMapForType (const GALGAS_categoryReaderMapForType & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType & GALGAS_categoryReaderMapForType::operator = (const GALGAS_categoryReaderMapForType & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForType::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryReaderMapForType result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForType::constructor_mapWithMapToOverride (const GALGAS_categoryReaderMapForType & inMapToOverride
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForType result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForType::reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_categoryReaderMapForType result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_lstring & inArgument0,
                                                           const GALGAS_formalInputParameterListAST & inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryReaderMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryReaderMapForType insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType::modifier_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring inArgument0,
                                                          GALGAS_formalInputParameterListAST inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForType * p = NULL ;
  macroMyNew (p, cMapElement_categoryReaderMapForType (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' getter has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_categoryReaderMapForType::reader_mResultTypeNameForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryReaderMapForType * p = (const cMapElement_categoryReaderMapForType *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
    result = p->mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_categoryReaderMapForType::reader_mInputFormalParameterListForKey (const GALGAS_string & inKey,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryReaderMapForType * p = (const cMapElement_categoryReaderMapForType *) attributes ;
  GALGAS_formalInputParameterListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
    result = p->mAttribute_mInputFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType::modifier_setMResultTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryReaderMapForType * p = (cMapElement_categoryReaderMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
    p->mAttribute_mResultTypeName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForType::modifier_setMInputFormalParameterListForKey (GALGAS_formalInputParameterListAST inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryReaderMapForType * p = (cMapElement_categoryReaderMapForType *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
    p->mAttribute_mInputFormalParameterList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryReaderMapForType * GALGAS_categoryReaderMapForType::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForType * result = (cMapElement_categoryReaderMapForType *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryReaderMapForType) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryReaderMapForType::cEnumerator_categoryReaderMapForType (const GALGAS_categoryReaderMapForType & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType_2D_element cEnumerator_categoryReaderMapForType::current (LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForType * p = (const cMapElement_categoryReaderMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
  return GALGAS_categoryReaderMapForType_2D_element (p->mAttribute_lkey, p->mAttribute_mResultTypeName, p->mAttribute_mInputFormalParameterList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryReaderMapForType::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryReaderMapForType::current_mResultTypeName (LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForType * p = (const cMapElement_categoryReaderMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
  return p->mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cEnumerator_categoryReaderMapForType::current_mInputFormalParameterList (LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForType * p = (const cMapElement_categoryReaderMapForType *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryReaderMapForType) ;
  return p->mAttribute_mInputFormalParameterList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @categoryReaderMapForType type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderMapForType ("categoryReaderMapForType",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderMapForType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderMapForType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderMapForType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderMapForType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForType::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForType result ;
  const GALGAS_categoryReaderMapForType * p = (const GALGAS_categoryReaderMapForType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderMapForType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderMapForType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryReaderMapForBuildingContext::cMapElement_categoryReaderMapForBuildingContext (const GALGAS_lstring & inKey,
                                                                                                  const GALGAS_categoryReaderMapForType & in_mCategoryReaderMapForType
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mCategoryReaderMapForType (in_mCategoryReaderMapForType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_categoryReaderMapForBuildingContext::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mCategoryReaderMapForType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_categoryReaderMapForBuildingContext::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_categoryReaderMapForBuildingContext (mAttribute_lkey, mAttribute_mCategoryReaderMapForType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_categoryReaderMapForBuildingContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCategoryReaderMapForType" ":" ;
  mAttribute_mCategoryReaderMapForType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_categoryReaderMapForBuildingContext::compare (const cCollectionElement * inOperand) const {
  cMapElement_categoryReaderMapForBuildingContext * operand = (cMapElement_categoryReaderMapForBuildingContext *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryReaderMapForType.objectCompare (operand->mAttribute_mCategoryReaderMapForType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext::GALGAS_categoryReaderMapForBuildingContext (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext::GALGAS_categoryReaderMapForBuildingContext (const GALGAS_categoryReaderMapForBuildingContext & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext & GALGAS_categoryReaderMapForBuildingContext::operator = (const GALGAS_categoryReaderMapForBuildingContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext GALGAS_categoryReaderMapForBuildingContext::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_categoryReaderMapForBuildingContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext GALGAS_categoryReaderMapForBuildingContext::constructor_mapWithMapToOverride (const GALGAS_categoryReaderMapForBuildingContext & inMapToOverride
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForBuildingContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext GALGAS_categoryReaderMapForBuildingContext::reader_overriddenMap (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_categoryReaderMapForBuildingContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                                      const GALGAS_categoryReaderMapForType & inArgument0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryReaderMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@categoryReaderMapForBuildingContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext::modifier_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_categoryReaderMapForType inArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForBuildingContext * p = NULL ;
  macroMyNew (p, cMapElement_categoryReaderMapForBuildingContext (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext::method_searchKey (GALGAS_lstring inKey,
                                                                   GALGAS_categoryReaderMapForType & outArgument0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForBuildingContext * p = (const cMapElement_categoryReaderMapForBuildingContext *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_categoryReaderMapForBuildingContext) ;
    outArgument0 = p->mAttribute_mCategoryReaderMapForType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType GALGAS_categoryReaderMapForBuildingContext::reader_mCategoryReaderMapForTypeForKey (const GALGAS_string & inKey,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_categoryReaderMapForBuildingContext * p = (const cMapElement_categoryReaderMapForBuildingContext *) attributes ;
  GALGAS_categoryReaderMapForType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForBuildingContext) ;
    result = p->mAttribute_mCategoryReaderMapForType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_categoryReaderMapForBuildingContext::modifier_setMCategoryReaderMapForTypeForKey (GALGAS_categoryReaderMapForType inAttributeValue,
                                                                                              GALGAS_string inKey,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_categoryReaderMapForBuildingContext * p = (cMapElement_categoryReaderMapForBuildingContext *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_categoryReaderMapForBuildingContext) ;
    p->mAttribute_mCategoryReaderMapForType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_categoryReaderMapForBuildingContext * GALGAS_categoryReaderMapForBuildingContext::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_categoryReaderMapForBuildingContext * result = (cMapElement_categoryReaderMapForBuildingContext *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_categoryReaderMapForBuildingContext) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_categoryReaderMapForBuildingContext::cEnumerator_categoryReaderMapForBuildingContext (const GALGAS_categoryReaderMapForBuildingContext & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext_2D_element cEnumerator_categoryReaderMapForBuildingContext::current (LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForBuildingContext * p = (const cMapElement_categoryReaderMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryReaderMapForBuildingContext) ;
  return GALGAS_categoryReaderMapForBuildingContext_2D_element (p->mAttribute_lkey, p->mAttribute_mCategoryReaderMapForType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_categoryReaderMapForBuildingContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForType cEnumerator_categoryReaderMapForBuildingContext::current_mCategoryReaderMapForType (LOCATION_ARGS) const {
  const cMapElement_categoryReaderMapForBuildingContext * p = (const cMapElement_categoryReaderMapForBuildingContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_categoryReaderMapForBuildingContext) ;
  return p->mAttribute_mCategoryReaderMapForType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryReaderMapForBuildingContext type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderMapForBuildingContext ("categoryReaderMapForBuildingContext",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderMapForBuildingContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderMapForBuildingContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderMapForBuildingContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderMapForBuildingContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderMapForBuildingContext GALGAS_categoryReaderMapForBuildingContext::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderMapForBuildingContext result ;
  const GALGAS_categoryReaderMapForBuildingContext * p = (const GALGAS_categoryReaderMapForBuildingContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderMapForBuildingContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderMapForBuildingContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GALGAS_wrapperExtensionMap GALGAS_wrapperExtensionMap::reader_overriddenMap (C_Compiler * inCompiler
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

void GALGAS_wrapperExtensionMap::modifier_insertKey (GALGAS_lstring inKey,
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
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
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

void GALGAS_semanticTypePrecedenceGraph::modifier_addNode (GALGAS_lstring inKey,
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

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::reader_reversedGraph (LOCATION_ARGS) const {
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

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::reader_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::reader_accessibleNodesFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            GALGAS_stringset::constructor_emptySet (HERE),
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.reader_lkeyList (THERE) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@semanticExpressionListForGeneration' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_semanticExpressionListForGeneration : public cCollectionElement {
  public : GALGAS_semanticExpressionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
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

cCollectionElement_semanticExpressionListForGeneration::cCollectionElement_semanticExpressionListForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_semanticExpressionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_semanticExpressionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticExpressionListForGeneration (mObject.mAttribute_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_semanticExpressionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mAttribute_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_semanticExpressionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticExpressionListForGeneration * operand = (cCollectionElement_semanticExpressionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticExpressionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration::GALGAS_semanticExpressionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration::GALGAS_semanticExpressionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::constructor_listWithValue (const GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_semanticExpressionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticExpressionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::addAssign_operation (const GALGAS_semanticExpressionForGeneration & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::modifier_insertAtIndex (const GALGAS_semanticExpressionForGeneration inOperand0,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticExpressionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::modifier_removeAtIndex (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::modifier_popFirst (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::modifier_popLast (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::method_first (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::method_last (GALGAS_semanticExpressionForGeneration & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::operator_concat (const GALGAS_semanticExpressionListForGeneration & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::add_operation (const GALGAS_semanticExpressionListForGeneration & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListForGeneration::dotAssign_operation (const GALGAS_semanticExpressionListForGeneration inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_semanticExpressionListForGeneration::reader_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticExpressionListForGeneration * p = (cCollectionElement_semanticExpressionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
    result = p->mObject.mAttribute_mExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticExpressionListForGeneration::cEnumerator_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration_2D_element cEnumerator_semanticExpressionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cEnumerator_semanticExpressionListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_semanticExpressionListForGeneration * p = (const cCollectionElement_semanticExpressionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticExpressionListForGeneration) ;
  return p->mObject.mAttribute_mExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticExpressionListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ("semanticExpressionListForGeneration",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_semanticExpressionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListForGeneration result ;
  const GALGAS_semanticExpressionListForGeneration * p = (const GALGAS_semanticExpressionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@formalParameterListForGeneration' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalParameterListForGeneration : public cCollectionElement {
  public : GALGAS_formalParameterListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                const GALGAS_string & in_mFormalArgumentCppName
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

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                          const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                                          const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                          const GALGAS_string & in_mFormalArgumentCppName
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentType, in_mFormalArgumentName, in_mFormalArgumentCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalParameterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalParameterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalParameterListForGeneration (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mFormalArgumentCppName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalParameterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentCppName" ":" ;
  mObject.mAttribute_mFormalArgumentCppName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalParameterListForGeneration * operand = (cCollectionElement_formalParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration::GALGAS_formalParameterListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                            const GALGAS_lstring & inOperand3,
                                                                                                            const GALGAS_string & inOperand4
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mFormalSelector,
                                                                         const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                         const GALGAS_lstring & in_mFormalArgumentName,
                                                                         const GALGAS_string & in_mFormalArgumentCppName
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (in_mFormalSelector,
                                                                      in_mFormalArgumentPassingMode,
                                                                      in_mFormalArgumentType,
                                                                      in_mFormalArgumentName,
                                                                      in_mFormalArgumentCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                   const GALGAS_lstring & inOperand3,
                                                                   const GALGAS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_formalArgumentPassingModeAST inOperand1,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                                      const GALGAS_lstring inOperand3,
                                                                      const GALGAS_string inOperand4,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                                      GALGAS_lstring & outOperand3,
                                                                      GALGAS_string & outOperand4,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
      outOperand4 = p->mObject.mAttribute_mFormalArgumentCppName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 GALGAS_string & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_string & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                            GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_formalArgumentPassingModeAST & outOperand1,
                                                           GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::operator_concat (const GALGAS_formalParameterListForGeneration & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::add_operation (const GALGAS_formalParameterListForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result = GALGAS_formalParameterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalParameterListForGeneration::dotAssign_operation (const GALGAS_formalParameterListForGeneration inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST GALGAS_formalParameterListForGeneration::reader_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalParameterListForGeneration::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalParameterListForGeneration::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalParameterListForGeneration::reader_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalParameterListForGeneration::cEnumerator_formalParameterListForGeneration (const GALGAS_formalParameterListForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration_2D_element cEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalArgumentPassingModeAST cEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentCppName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @formalParameterListForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalParameterListForGeneration ("formalParameterListForGeneration",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalParameterListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_formalParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration result ;
  const GALGAS_formalParameterListForGeneration * p = (const GALGAS_formalParameterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@formalInputParameterListForGeneration' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formalInputParameterListForGeneration : public cCollectionElement {
  public : GALGAS_formalInputParameterListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                     const GALGAS_string & in_mFormalArgumentCppName,
                                                                     const GALGAS_lstring & in_mFormalArgumentName,
                                                                     const GALGAS_bool & in_mIsConstant
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

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GALGAS_lstring & in_mFormalSelector,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                                                    const GALGAS_string & in_mFormalArgumentCppName,
                                                                                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                    const GALGAS_bool & in_mIsConstant
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentCppName, in_mFormalArgumentName, in_mIsConstant) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formalInputParameterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formalInputParameterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formalInputParameterListForGeneration (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentCppName, mObject.mAttribute_mFormalArgumentName, mObject.mAttribute_mIsConstant COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formalInputParameterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentCppName" ":" ;
  mObject.mAttribute_mFormalArgumentCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mAttribute_mIsConstant.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formalInputParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalInputParameterListForGeneration * operand = (cCollectionElement_formalInputParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalInputParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration::GALGAS_formalInputParameterListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                      const GALGAS_lstring & inOperand3,
                                                                                                                      const GALGAS_bool & inOperand4
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formalInputParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mFormalSelector,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mFormalArgumentCppName,
                                                                              const GALGAS_lstring & in_mFormalArgumentName,
                                                                              const GALGAS_bool & in_mIsConstant
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (in_mFormalSelector,
                                                                           in_mFormalArgumentType,
                                                                           in_mFormalArgumentCppName,
                                                                           in_mFormalArgumentName,
                                                                           in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_bool & inOperand4
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                           const GALGAS_string inOperand2,
                                                                           const GALGAS_lstring inOperand3,
                                                                           const GALGAS_bool inOperand4,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           GALGAS_lstring & outOperand3,
                                                                           GALGAS_bool & outOperand4,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentCppName ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
      outOperand4 = p->mObject.mAttribute_mIsConstant ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_lstring & outOperand3,
                                                                      GALGAS_bool & outOperand4,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                     GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_lstring & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 GALGAS_bool & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                GALGAS_bool & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    outOperand4 = p->mObject.mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::operator_concat (const GALGAS_formalInputParameterListForGeneration & inOperand
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::add_operation (const GALGAS_formalInputParameterListForGeneration & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formalInputParameterListForGeneration::dotAssign_operation (const GALGAS_formalInputParameterListForGeneration inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::reader_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_formalInputParameterListForGeneration::reader_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_formalInputParameterListForGeneration::reader_mFormalArgumentCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formalInputParameterListForGeneration::reader_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formalInputParameterListForGeneration::reader_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mAttribute_mIsConstant ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formalInputParameterListForGeneration::cEnumerator_formalInputParameterListForGeneration (const GALGAS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration_2D_element cEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mAttribute_mIsConstant ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @formalInputParameterListForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ("formalInputParameterListForGeneration",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formalInputParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formalInputParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalInputParameterListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_formalInputParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_formalInputParameterListForGeneration result ;
  const GALGAS_formalInputParameterListForGeneration * p = (const GALGAS_formalInputParameterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formalInputParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@actualParameterListForGeneration' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_actualParameterListForGeneration : public cCollectionElement {
  public : GALGAS_actualParameterListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_actualParameterListForGeneration (const GALGAS_actualParameterForGeneration & in_mActualParameter
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

cCollectionElement_actualParameterListForGeneration::cCollectionElement_actualParameterListForGeneration (const GALGAS_actualParameterForGeneration & in_mActualParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_actualParameterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_actualParameterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actualParameterListForGeneration (mObject.mAttribute_mActualParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_actualParameterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualParameter" ":" ;
  mObject.mAttribute_mActualParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_actualParameterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualParameterListForGeneration * operand = (cCollectionElement_actualParameterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualParameterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration::GALGAS_actualParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration::GALGAS_actualParameterListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::constructor_listWithValue (const GALGAS_actualParameterForGeneration & inOperand0
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_actualParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_actualParameterForGeneration & in_mActualParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_actualParameterListForGeneration (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::addAssign_operation (const GALGAS_actualParameterForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::modifier_insertAtIndex (const GALGAS_actualParameterForGeneration inOperand0,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actualParameterListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::modifier_removeAtIndex (GALGAS_actualParameterForGeneration & outOperand0,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mActualParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::modifier_popFirst (GALGAS_actualParameterForGeneration & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::modifier_popLast (GALGAS_actualParameterForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::method_first (GALGAS_actualParameterForGeneration & outOperand0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::method_last (GALGAS_actualParameterForGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mActualParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::operator_concat (const GALGAS_actualParameterListForGeneration & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::add_operation (const GALGAS_actualParameterListForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result = GALGAS_actualParameterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result = GALGAS_actualParameterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListForGeneration::dotAssign_operation (const GALGAS_actualParameterListForGeneration inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration GALGAS_actualParameterListForGeneration::reader_mActualParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListForGeneration * p = (cCollectionElement_actualParameterListForGeneration *) attributes.ptr () ;
  GALGAS_actualParameterForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
    result = p->mObject.mAttribute_mActualParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_actualParameterListForGeneration::cEnumerator_actualParameterListForGeneration (const GALGAS_actualParameterListForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration_2D_element cEnumerator_actualParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration cEnumerator_actualParameterListForGeneration::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListForGeneration * p = (const cCollectionElement_actualParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListForGeneration) ;
  return p->mObject.mAttribute_mActualParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @actualParameterListForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration ("actualParameterListForGeneration",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListForGeneration GALGAS_actualParameterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration result ;
  const GALGAS_actualParameterListForGeneration * p = (const GALGAS_actualParameterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@semanticInstructionListForGeneration' list                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_semanticInstructionListForGeneration : public cCollectionElement {
  public : GALGAS_semanticInstructionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
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

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_semanticInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_semanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_semanticInstructionListForGeneration (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_semanticInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_semanticInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticInstructionListForGeneration * operand = (cCollectionElement_semanticInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration::GALGAS_semanticInstructionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::constructor_listWithValue (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_semanticInstructionForGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionForGeneration & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::modifier_insertAtIndex (const GALGAS_semanticInstructionForGeneration inOperand0,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::modifier_removeAtIndex (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::modifier_popFirst (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::modifier_popLast (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionForGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::operator_concat (const GALGAS_semanticInstructionListForGeneration & inOperand
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::add_operation (const GALGAS_semanticInstructionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration::dotAssign_operation (const GALGAS_semanticInstructionListForGeneration inOperand
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration::reader_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_semanticInstructionListForGeneration::cEnumerator_semanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element cEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration cEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @semanticInstructionListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_semanticInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result ;
  const GALGAS_semanticInstructionListForGeneration * p = (const GALGAS_semanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@listOfSemanticInstructionListForGeneration' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_listOfSemanticInstructionListForGeneration : public cCollectionElement {
  public : GALGAS_listOfSemanticInstructionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfInstructionList
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

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                              const GALGAS_location & in_mEndOfInstructionList
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_listOfSemanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_listOfSemanticInstructionListForGeneration (mObject.mAttribute_mInstructionList, mObject.mAttribute_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_listOfSemanticInstructionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mAttribute_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructionList" ":" ;
  mObject.mAttribute_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_listOfSemanticInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_listOfSemanticInstructionListForGeneration * operand = (cCollectionElement_listOfSemanticInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration::GALGAS_listOfSemanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration::GALGAS_listOfSemanticInstructionListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::constructor_listWithValue (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                                const GALGAS_location & inOperand1
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                   const GALGAS_location & in_mEndOfInstructionList
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (in_mInstructionList,
                                                                                in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                             const GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::modifier_insertAtIndex (const GALGAS_semanticInstructionListForGeneration inOperand0,
                                                                                const GALGAS_location inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::modifier_removeAtIndex (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                                GALGAS_location & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mInstructionList ;
      outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::modifier_popFirst (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                           GALGAS_location & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::modifier_popLast (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                          GALGAS_location & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                      GALGAS_location & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                     GALGAS_location & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mInstructionList ;
    outOperand1 = p->mObject.mAttribute_mEndOfInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::operator_concat (const GALGAS_listOfSemanticInstructionListForGeneration & inOperand
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::add_operation (const GALGAS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::reader_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::reader_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration::dotAssign_operation (const GALGAS_listOfSemanticInstructionListForGeneration inOperand
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::reader_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listOfSemanticInstructionListForGeneration::reader_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mAttribute_mEndOfInstructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_listOfSemanticInstructionListForGeneration::cEnumerator_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element cEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mAttribute_mEndOfInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @listOfSemanticInstructionListForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  const GALGAS_listOfSemanticInstructionListForGeneration * p = (const GALGAS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

