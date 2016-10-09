//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"
#include "galgas2/cCollectionElement.h"
#include "galgas2/cSortedListElement.h"
#include "galgas2/capSortedListElement.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------------------------------------------------*

cMapElement::cMapElement (const GALGAS_lstring & inLKey
                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mAttribute_lkey (inLKey) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @location type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_location ("location",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_location::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_location::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_location (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_location::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
  const GALGAS_location * p = (const GALGAS_location *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_location *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("location", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @stringlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringlist ("stringlist",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
  const GALGAS_stringlist * p = (const GALGAS_stringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist::GALGAS_stringlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist::~ GALGAS_stringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_stringlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_stringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "<list @stringlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::constructor_listWithValue (const GALGAS_string & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_stringlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_stringlist * p = NULL ;
  macroMyNew (p, cCollectionElement_stringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::addAssign_operation (const GALGAS_string & inOperand0
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_stringlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_stringlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::setter_popFirst (GALGAS_string & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_stringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::setter_popLast (GALGAS_string & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::method_first (GALGAS_string & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_stringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::method_last (GALGAS_string & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::add_operation (const GALGAS_stringlist & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_stringlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_stringlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_stringlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::plusAssign_operation (const GALGAS_stringlist inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::setter_setMValueAtIndex (GALGAS_string inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringlist::objectCompare (const GALGAS_stringlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_stringlist::cEnumerator_stringlist (const GALGAS_stringlist & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_stringlist::~ cEnumerator_stringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_stringlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_stringlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_stringlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element cEnumerator_stringlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_stringlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @string type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_string ("string",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_string::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_string (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_string::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  const GALGAS_string * p = (const GALGAS_string *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @bool type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bool ("bool",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bool::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bool (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bool::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  const GALGAS_bool * p = (const GALGAS_bool *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @lstringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringlist ("lstringlist",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist result ;
  const GALGAS_lstringlist * p = (const GALGAS_lstringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist::GALGAS_lstringlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist::~ GALGAS_lstringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_lstringlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<list @lstringlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::constructor_listWithValue (const GALGAS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lstringlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mValue
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lstringlist * p = NULL ;
  macroMyNew (p, cCollectionElement_lstringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_lstringlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_lstringlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::setter_popFirst (GALGAS_lstring & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lstringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::setter_popLast (GALGAS_lstring & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lstringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::add_operation (const GALGAS_lstringlist & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_lstringlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_lstringlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_lstringlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::plusAssign_operation (const GALGAS_lstringlist inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::setter_setMValueAtIndex (GALGAS_lstring inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstringlist::objectCompare (const GALGAS_lstringlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lstringlist::cEnumerator_lstringlist (const GALGAS_lstringlist & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lstringlist::~ cEnumerator_lstringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lstringlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lstringlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_lstringlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element cEnumerator_lstringlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lstringlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @uint type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint ("uint",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  const GALGAS_uint * p = (const GALGAS_uint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @stringset type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringset ("stringset",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringset::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringset (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_stringset::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
  const GALGAS_stringset * p = (const GALGAS_stringset *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @char type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_char ("char",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_char::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_char ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_char::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_char (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_char::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_char result ;
  const GALGAS_char * p = (const GALGAS_char *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_char *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("char", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @2lstringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  const GALGAS__32_lstringlist * p = (const GALGAS__32_lstringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist::GALGAS__32_lstringlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist::~ GALGAS__32_lstringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS__32_lstringlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<list @_32_lstringlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mValue_30_,
                                                        const GALGAS_lstring & in_mValue_31_
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = NULL ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS__32_lstringlist_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS__32_lstringlist_2D_element element (inOperand0, inOperand1) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS__32_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS__32_lstringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS__32_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS__32_lstringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS__32_lstringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::add_operation (const GALGAS__32_lstringlist & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS__32_lstringlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS__32_lstringlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS__32_lstringlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_setMValue_30_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue_30_ = inOperand ;
    }else{
      C_String s = "setMValue0AtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue_30_ ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::setter_setMValue_31_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue_31_ = inOperand ;
    }else{
      C_String s = "setMValue1AtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue_31_ ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_lstringlist::objectCompare (const GALGAS__32_lstringlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_lstringlist::~ cEnumerator__32_lstringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator__32_lstringlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator__32_lstringlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator__32_lstringlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue_31_ ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lbool type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbool ("lbool",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbool ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbool::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbool (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lbool result ;
  const GALGAS_lbool * p = (const GALGAS_lbool *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::GALGAS_lbool (void) :
mAttribute_bool (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::~ GALGAS_lbool (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::GALGAS_lbool (const GALGAS_bool & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_bool (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbool (GALGAS_bool::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::constructor_new (const GALGAS_bool & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbool result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lbool (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbool::objectCompare (const GALGAS_lbool & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_bool.objectCompare (inOperand.mAttribute_bool) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lbool::isValid (void) const {
  return mAttribute_bool.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbool::drop (void) {
  mAttribute_bool.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbool::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lbool:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_bool.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lbool::getter_bool (UNUSED_LOCATION_ARGS) const {
  return mAttribute_bool ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lbool::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @double type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_double ("double",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_double::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_double ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_double::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_double (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_double::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_double result ;
  const GALGAS_double * p = (const GALGAS_double *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_double *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("double", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @uint64 type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_ ("uint64",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_ result ;
  const GALGAS_uint_36__34_ * p = (const GALGAS_uint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @sint type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint ("sint",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_sint result ;
  const GALGAS_sint * p = (const GALGAS_sint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @sint64 type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_ ("sint64",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_ result ;
  const GALGAS_sint_36__34_ * p = (const GALGAS_sint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bigint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigint ("bigint",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigint::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
  const GALGAS_bigint * p = (const GALGAS_bigint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @2stringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_stringlist ("2stringlist",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_stringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist result ;
  const GALGAS__32_stringlist * p = (const GALGAS__32_stringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist::GALGAS__32_stringlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist::~ GALGAS__32_stringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_stringlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS__32_stringlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS__32_stringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<list @_32_stringlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_stringlist (true) ;
    result.addAssign_operation (inOperand0, inOperand1 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS__32_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mValue_30_,
                                                       const GALGAS_string & in_mValue_31_
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = NULL ;
  macroMyNew (p, cCollectionElement__32_stringlist (in_mValue_30_,
                                                    in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS__32_stringlist_2D_element element (inOperand0, inOperand1) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    const GALGAS__32_stringlist_2D_element element (inOperand0, inOperand1) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS__32_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS__32_stringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS__32_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS__32_stringlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;
  outOperand1.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS__32_stringlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue_30_ ;
      outOperand1 = element.mAttribute_mValue_31_ ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::add_operation (const GALGAS__32_stringlist & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS__32_stringlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS__32_stringlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS__32_stringlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::plusAssign_operation (const GALGAS__32_stringlist inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_setMValue_30_AtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue_30_ = inOperand ;
    }else{
      C_String s = "setMValue0AtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue_30_ ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::setter_setMValue_31_AtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue_31_ = inOperand ;
    }else{
      C_String s = "setMValue1AtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue_31_ ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_stringlist::objectCompare (const GALGAS__32_stringlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_stringlist::cEnumerator__32_stringlist (const GALGAS__32_stringlist & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_stringlist::~ cEnumerator__32_stringlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator__32_stringlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator__32_stringlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator__32_stringlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element cEnumerator__32_stringlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator__32_stringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator__32_stringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue_31_ ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @application type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_application ("application",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_application::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_application ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_application::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_application (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_application GALGAS_application::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_application result ;
  const GALGAS_application * p = (const GALGAS_application *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_application *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("application", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @binaryset type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryset ("binaryset",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binaryset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryset ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binaryset::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryset (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_binaryset::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryset result ;
  const GALGAS_binaryset * p = (const GALGAS_binaryset *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @data type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_data ("data",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_data::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_data ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_data::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_data (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_data GALGAS_data::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_data result ;
  const GALGAS_data * p = (const GALGAS_data *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_data *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("data", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @filewrapper type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapper ("filewrapper",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapper::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapper ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapper::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapper (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapper GALGAS_filewrapper::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapper result ;
  const GALGAS_filewrapper * p = (const GALGAS_filewrapper *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapper *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapper", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @function type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_function ("function",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_function ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_function::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_function (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_function::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_function result ;
  const GALGAS_function * p = (const GALGAS_function *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @object type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_object ("object",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_object::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_object ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_object::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_object (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_object::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_object result ;
  const GALGAS_object * p = (const GALGAS_object *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_object *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("object", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @timer type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timer ("timer",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_timer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timer ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_timer::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timer (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timer GALGAS_timer::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_timer result ;
  const GALGAS_timer * p = (const GALGAS_timer *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @type type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_type ("type",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_type::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_type (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_type::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_type result ;
  const GALGAS_type * p = (const GALGAS_type *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @functionlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionlist ("functionlist",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionlist result ;
  const GALGAS_functionlist * p = (const GALGAS_functionlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist::GALGAS_functionlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist::~ GALGAS_functionlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_functionlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_functionlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<list @functionlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::constructor_listWithValue (const GALGAS_function & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_functionlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_functionlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_function & in_mValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionlist * p = NULL ;
  macroMyNew (p, cCollectionElement_functionlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::addAssign_operation (const GALGAS_function & inOperand0
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_functionlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::setter_insertAtIndex (const GALGAS_function inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_functionlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::setter_removeAtIndex (GALGAS_function & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_functionlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::setter_popFirst (GALGAS_function & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_functionlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::setter_popLast (GALGAS_function & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_functionlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::method_first (GALGAS_function & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_functionlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::method_last (GALGAS_function & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_functionlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::add_operation (const GALGAS_functionlist & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_functionlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_functionlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_functionlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::plusAssign_operation (const GALGAS_functionlist inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::setter_setMValueAtIndex (GALGAS_function inOperand,
                                                   GALGAS_uint inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_functionlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_function result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionlist::objectCompare (const GALGAS_functionlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionlist::cEnumerator_functionlist (const GALGAS_functionlist & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionlist::~ cEnumerator_functionlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_functionlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_functionlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_functionlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element cEnumerator_functionlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function cEnumerator_functionlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @luintlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luintlist ("luintlist",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_luintlist result ;
  const GALGAS_luintlist * p = (const GALGAS_luintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist::GALGAS_luintlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist::~ GALGAS_luintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_luintlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_luintlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_luintlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<list @luintlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::constructor_listWithValue (const GALGAS_luint & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_luintlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_luintlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_luintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GALGAS_luint & in_mValue
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_luintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_luintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::addAssign_operation (const GALGAS_luint & inOperand0
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_luintlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::setter_insertAtIndex (const GALGAS_luint inOperand0,
                                             const GALGAS_uint inInsertionIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_luintlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::setter_removeAtIndex (GALGAS_luint & outOperand0,
                                             const GALGAS_uint inRemoveIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_luintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::setter_popFirst (GALGAS_luint & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_luintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::setter_popLast (GALGAS_luint & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_luintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::method_first (GALGAS_luint & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_luintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::method_last (GALGAS_luint & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_luintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::add_operation (const GALGAS_luintlist & inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_luintlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_luintlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_luintlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::plusAssign_operation (const GALGAS_luintlist inOperand,
                                             C_Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::setter_setMValueAtIndex (GALGAS_luint inOperand,
                                                GALGAS_uint inIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luintlist::objectCompare (const GALGAS_luintlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_luintlist::cEnumerator_luintlist (const GALGAS_luintlist & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_luintlist::~ cEnumerator_luintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_luintlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_luintlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_luintlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element cEnumerator_luintlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_luintlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @objectlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectlist ("objectlist",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectlist result ;
  const GALGAS_objectlist * p = (const GALGAS_objectlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist::GALGAS_objectlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist::~ GALGAS_objectlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_objectlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_objectlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_objectlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "<list @objectlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::constructor_listWithValue (const GALGAS_object & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_objectlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_objectlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_object & in_mValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_objectlist * p = NULL ;
  macroMyNew (p, cCollectionElement_objectlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::addAssign_operation (const GALGAS_object & inOperand0
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_objectlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::setter_insertAtIndex (const GALGAS_object inOperand0,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_objectlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::setter_removeAtIndex (GALGAS_object & outOperand0,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_objectlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::setter_popFirst (GALGAS_object & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_objectlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::setter_popLast (GALGAS_object & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_objectlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::method_first (GALGAS_object & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_objectlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::method_last (GALGAS_object & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_objectlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::add_operation (const GALGAS_objectlist & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_objectlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_objectlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_objectlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::plusAssign_operation (const GALGAS_objectlist inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::setter_setMValueAtIndex (GALGAS_object inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_objectlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_object result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectlist::objectCompare (const GALGAS_objectlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_objectlist::cEnumerator_objectlist (const GALGAS_objectlist & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_objectlist::~ cEnumerator_objectlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_objectlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_objectlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_objectlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element cEnumerator_objectlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object cEnumerator_objectlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typelist type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typelist ("typelist",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typelist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typelist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typelist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typelist result ;
  const GALGAS_typelist * p = (const GALGAS_typelist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typelist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist::GALGAS_typelist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist::~ GALGAS_typelist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typelist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_typelist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_typelist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<list @typelist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::constructor_listWithValue (const GALGAS_type & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typelist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typelist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_typelist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_type & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_typelist * p = NULL ;
  macroMyNew (p, cCollectionElement_typelist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::addAssign_operation (const GALGAS_type & inOperand0
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_typelist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::setter_insertAtIndex (const GALGAS_type inOperand0,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_typelist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::setter_removeAtIndex (GALGAS_type & outOperand0,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_typelist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::setter_popFirst (GALGAS_type & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typelist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::setter_popLast (GALGAS_type & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typelist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::method_first (GALGAS_type & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_typelist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::method_last (GALGAS_type & outOperand0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_typelist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::add_operation (const GALGAS_typelist & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_typelist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_typelist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_typelist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::plusAssign_operation (const GALGAS_typelist inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::setter_setMValueAtIndex (GALGAS_type inOperand,
                                               GALGAS_uint inIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_typelist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_type result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typelist::objectCompare (const GALGAS_typelist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typelist::cEnumerator_typelist (const GALGAS_typelist & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typelist::~ cEnumerator_typelist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typelist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_typelist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_typelist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element cEnumerator_typelist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cEnumerator_typelist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @uintlist type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintlist ("uintlist",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_uintlist result ;
  const GALGAS_uintlist * p = (const GALGAS_uintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist::GALGAS_uintlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist::~ GALGAS_uintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_uintlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uintlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_uintlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<list @uintlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::constructor_listWithValue (const GALGAS_uint & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uintlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uintlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_uintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_uint & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_uintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_uintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::addAssign_operation (const GALGAS_uint & inOperand0
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_uintlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_uintlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_uintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::setter_popFirst (GALGAS_uint & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_uintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::setter_popLast (GALGAS_uint & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_uintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::method_first (GALGAS_uint & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_uintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::method_last (GALGAS_uint & outOperand0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_uintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::add_operation (const GALGAS_uintlist & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_uintlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_uintlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_uintlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::plusAssign_operation (const GALGAS_uintlist inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::setter_setMValueAtIndex (GALGAS_uint inOperand,
                                               GALGAS_uint inIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uintlist::objectCompare (const GALGAS_uintlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uintlist::cEnumerator_uintlist (const GALGAS_uintlist & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uintlist::~ cEnumerator_uintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_uintlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_uintlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_uintlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element cEnumerator_uintlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_uintlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @uint64list type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_list ("uint64list",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_list::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_list::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_list (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list result ;
  const GALGAS_uint_36__34_list * p = (const GALGAS_uint_36__34_list *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_list *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list::GALGAS_uint_36__34_list (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list::~ GALGAS_uint_36__34_list (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_36__34_list (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint_36__34_list::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_uint_36__34_list::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<list @uint_36__34_list:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::constructor_listWithValue (const GALGAS_uint_36__34_ & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uint_36__34_list (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_uint_36__34_list::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_uint_36__34_ & in_mValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_list * p = NULL ;
  macroMyNew (p, cCollectionElement_uint_36__34_list (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::addAssign_operation (const GALGAS_uint_36__34_ & inOperand0
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_uint_36__34_list_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::setter_insertAtIndex (const GALGAS_uint_36__34_ inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_uint_36__34_list_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::setter_removeAtIndex (GALGAS_uint_36__34_ & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_uint_36__34_list_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::setter_popFirst (GALGAS_uint_36__34_ & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_uint_36__34_list_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::setter_popLast (GALGAS_uint_36__34_ & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_uint_36__34_list_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::method_first (GALGAS_uint_36__34_ & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_uint_36__34_list_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::method_last (GALGAS_uint_36__34_ & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_uint_36__34_list_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::add_operation (const GALGAS_uint_36__34_list & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_uint_36__34_list (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_uint_36__34_list (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_uint_36__34_list (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::plusAssign_operation (const GALGAS_uint_36__34_list inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::setter_setMValueAtIndex (GALGAS_uint_36__34_ inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_list::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_36__34_list::objectCompare (const GALGAS_uint_36__34_list & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uint_36__34_list::cEnumerator_uint_36__34_list (const GALGAS_uint_36__34_list & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uint_36__34_list::~ cEnumerator_uint_36__34_list (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_uint_36__34_list::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_uint_36__34_list::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_uint_36__34_list::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element cEnumerator_uint_36__34_list::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cEnumerator_uint_36__34_list::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bigintlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintlist ("bigintlist",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bigintlist result ;
  const GALGAS_bigintlist * p = (const GALGAS_bigintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist::GALGAS_bigintlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist::~ GALGAS_bigintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_bigintlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_bigintlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_bigintlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "<list @bigintlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::constructor_listWithValue (const GALGAS_bigint & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bigintlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_bigintlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_bigintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_bigint & in_mValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_bigintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_bigintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::addAssign_operation (const GALGAS_bigint & inOperand0
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_bigintlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::setter_insertAtIndex (const GALGAS_bigint inOperand0,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_bigintlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::setter_removeAtIndex (GALGAS_bigint & outOperand0,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_bigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::setter_popFirst (GALGAS_bigint & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_bigintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::setter_popLast (GALGAS_bigint & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_bigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::method_first (GALGAS_bigint & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_bigintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::method_last (GALGAS_bigint & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_bigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::add_operation (const GALGAS_bigintlist & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_bigintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bigintlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_bigintlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_bigintlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist GALGAS_bigintlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_bigintlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::plusAssign_operation (const GALGAS_bigintlist inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist::setter_setMValueAtIndex (GALGAS_bigint inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bigintlist::objectCompare (const GALGAS_bigintlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bigintlist::cEnumerator_bigintlist (const GALGAS_bigintlist & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bigintlist::~ cEnumerator_bigintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_bigintlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_bigintlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_bigintlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element cEnumerator_bigintlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_bigintlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @lbigintlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbigintlist ("lbigintlist",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbigintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbigintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbigintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lbigintlist result ;
  const GALGAS_lbigintlist * p = (const GALGAS_lbigintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbigintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist::GALGAS_lbigintlist (const bool inIsValid) :
AC_GALGAS_list_new (inIsValid),
mArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist::~ GALGAS_lbigintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbigintlist (true) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_lbigintlist::getter_length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mArray.count ()) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_lbigintlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mArray.count ())) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<list @lbigintlist:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    ioString << " ("
             << cStringWithSigned (mArray.count ())
             << " object" << ((mArray.count () > 1) ? "s" : "")
             << "): " ;
    for (int32_t i=0 ; i<mArray.count () ; i++) {
      mArray (i COMMA_HERE).description (ioString, inIndentation + 2) ;
    }
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::constructor_listWithValue (const GALGAS_lbigint & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lbigintlist result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lbigintlist (true) ;
    result.addAssign_operation (inOperand0 COMMA_THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
/*
void GALGAS_lbigintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lbigint & in_mValue
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lbigintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_lbigintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}
*/
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::addAssign_operation (const GALGAS_lbigint & inOperand0
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    const GALGAS_lbigintlist_2D_element element (inOperand0) ;
    mArray.addObject (element) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::setter_insertAtIndex (const GALGAS_lbigint inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    const GALGAS_lbigintlist_2D_element element (inOperand0) ;
    const int32_t index = (int32_t) inInsertionIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray.insertObjectAtIndex (element, index COMMA_THERE) ;
    }else{
      C_String s = "insertAtIndex: insertion index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::setter_removeAtIndex (GALGAS_lbigint & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t index = (int32_t) inRemoveIndex.uintValue () ;
    if (index <= mArray.count ()) {
      const GALGAS_lbigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "removeAtIndex: remove index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::setter_popFirst (GALGAS_lbigint & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lbigintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (0 COMMA_THERE) ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::setter_popLast (GALGAS_lbigint & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lbigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
      mArray.removeObjectAtIndex (index COMMA_THERE) ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::method_first (GALGAS_lbigint & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const GALGAS_lbigintlist_2D_element element = mArray (0 COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popFirst: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::method_last (GALGAS_lbigint & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  outOperand0.drop () ;

  if (isValid ()) {
    if (mArray.count () > 0) {
      const int32_t index = mArray.count () - 1 ;
      const GALGAS_lbigintlist_2D_element element = mArray (index COMMA_THERE) ;
      outOperand0 = element.mAttribute_mValue ;
    }else{
      C_String s = "popLast: list is empty" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::add_operation (const GALGAS_lbigintlist & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      result.mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (isValid () && inRange.isValid ()) {
    const uint32_t startIdx = inRange.mAttribute_start.uintValue () ;
    const uint32_t length = inRange.mAttribute_length.uintValue () ;
    if ((startIdx + length) <= (uint32_t) mArray.count ()) {
      result = GALGAS_lbigintlist (true) ;
      result.mArray.setCapacity ((int32_t) length) ;
      for (uint32_t i=0 ; i<length ; i++) {
        result.mArray.addObject (mArray ((int32_t) (startIdx + i) COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListWithRange: max index (" ;
      s << cStringWithUnsigned (startIdx + length) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      result = GALGAS_lbigintlist (true) ;
      result.mArray.setCapacity (mArray.count () + 1 - index) ;
      for (int32_t i=index ; i<mArray.count () ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist GALGAS_lbigintlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lbigintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = GALGAS_lbigintlist (true) ;
      result.mArray.setCapacity (index + 1) ;
      for (int32_t i=0 ; i<=index ; i++) {
        result.mArray.addObject (mArray (i COMMA_THERE)) ;
      }
    }else{
      C_String s = "subListFromIndex: index (" ;
      s << cStringWithSigned (index) << ") > length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::plusAssign_operation (const GALGAS_lbigintlist inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mArray.setCapacity (mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i=0 ; i<inOperand.mArray.count () ; i++) {
      mArray.addObject (inOperand.mArray (i COMMA_THERE)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist::setter_setMValueAtIndex (GALGAS_lbigint inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index <= mArray.count ()) {
      mArray (index COMMA_THERE).mAttribute_mValue = inOperand ;
    }else{
      C_String s = "setMValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t index = (int32_t) inIndex.uintValue () ;
    if (index < mArray.count ()) {
      result = mArray (index COMMA_THERE).mAttribute_mValue ;
    }else{
      C_String s = "getter mValueAtIndex: index (" ;
      s << cStringWithSigned (index) << ") >= length (" << cStringWithSigned (mArray.count ()) << ")" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbigintlist::objectCompare (const GALGAS_lbigintlist & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    int32_t r = mArray.count () - inOperand.mArray.count () ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      for (int32_t i=0 ; (i<mArray.count ()) && (result == kOperandEqual) ; i++) {
        result = mArray (i COMMA_HERE).objectCompare (inOperand.mArray (i COMMA_HERE)) ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lbigintlist::cEnumerator_lbigintlist (const GALGAS_lbigintlist & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
mEnumerationArrayEx (),
mEnumerationArray (),
mIndex (0),
mOrder (inOrder) {
  mEnumerationArray = inEnumeratedObject.mArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lbigintlist::~ cEnumerator_lbigintlist (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lbigintlist::hasCurrentObject (void) const {
  return mIndex < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool cEnumerator_lbigintlist::hasNextObject (void) const {
  return (mIndex + 1) < mEnumerationArray.count () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//const cCollectionElement * cEnumerator_lbigintlist::currentObjectPtr (LOCATION_ARGS) const {
//  return mEnumerationArrayEx.pointerAtIndexForReadAccess (mIndex COMMA_THERE) ;
//}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element cEnumerator_lbigintlist::current (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_lbigintlist::current_mValue (LOCATION_ARGS) const {
  const int32_t idx = (mOrder == kENUMERATION_UP)
    ? mIndex
    : mEnumerationArray.count () - 1 - mIndex
  ;
  return mEnumerationArray (idx COMMA_THERE).mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @range type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_range ("range",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_range::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_range ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_range::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_range (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_range result ;
  const GALGAS_range * p = (const GALGAS_range *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_range *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("range", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::GALGAS_range (void) :
mAttribute_start (),
mAttribute_length () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::~ GALGAS_range (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::GALGAS_range (const GALGAS_uint & inOperand0,
                            const GALGAS_uint & inOperand1) :
mAttribute_start (inOperand0),
mAttribute_length (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_range (GALGAS_uint::constructor_default (HERE),
                       GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::constructor_new (const GALGAS_uint & inOperand0,
                                            const GALGAS_uint & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_range result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_range (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_range::objectCompare (const GALGAS_range & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_start.objectCompare (inOperand.mAttribute_start) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_length.objectCompare (inOperand.mAttribute_length) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_range::isValid (void) const {
  return mAttribute_start.isValid () && mAttribute_length.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_range::drop (void) {
  mAttribute_start.drop () ;
  mAttribute_length.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_range::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @range:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_start.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_length.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_range::getter_start (UNUSED_LOCATION_ARGS) const {
  return mAttribute_start ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_range::getter_length (UNUSED_LOCATION_ARGS) const {
  return mAttribute_length ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @functionlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionlist_2D_element ("functionlist-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element GALGAS_functionlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionlist_2D_element result ;
  const GALGAS_functionlist_2D_element * p = (const GALGAS_functionlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::GALGAS_functionlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::~ GALGAS_functionlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::GALGAS_functionlist_2D_element (const GALGAS_function & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element GALGAS_functionlist_2D_element::constructor_new (const GALGAS_function & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_functionlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionlist_2D_element::objectCompare (const GALGAS_functionlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @functionlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_functionlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @objectlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectlist_2D_element ("objectlist-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element GALGAS_objectlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectlist_2D_element result ;
  const GALGAS_objectlist_2D_element * p = (const GALGAS_objectlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::GALGAS_objectlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::~ GALGAS_objectlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::GALGAS_objectlist_2D_element (const GALGAS_object & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element GALGAS_objectlist_2D_element::constructor_new (const GALGAS_object & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_objectlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectlist_2D_element::objectCompare (const GALGAS_objectlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @objectlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_objectlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @stringlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringlist_2D_element ("stringlist-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringlist_2D_element result ;
  const GALGAS_stringlist_2D_element * p = (const GALGAS_stringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::GALGAS_stringlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::~ GALGAS_stringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::GALGAS_stringlist_2D_element (const GALGAS_string & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringlist_2D_element (GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::constructor_new (const GALGAS_string & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_stringlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringlist_2D_element::objectCompare (const GALGAS_stringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @stringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typelist-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typelist_2D_element ("typelist-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typelist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typelist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typelist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element GALGAS_typelist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typelist_2D_element result ;
  const GALGAS_typelist_2D_element * p = (const GALGAS_typelist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typelist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::GALGAS_typelist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::~ GALGAS_typelist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::GALGAS_typelist_2D_element (const GALGAS_type & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element GALGAS_typelist_2D_element::constructor_new (const GALGAS_type & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typelist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typelist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typelist_2D_element::objectCompare (const GALGAS_typelist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typelist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @typelist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_typelist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @uintlist-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintlist_2D_element ("uintlist-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uintlist_2D_element result ;
  const GALGAS_uintlist_2D_element * p = (const GALGAS_uintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::GALGAS_uintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::~ GALGAS_uintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::GALGAS_uintlist_2D_element (const GALGAS_uint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uintlist_2D_element (GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::constructor_new (const GALGAS_uint & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uintlist_2D_element::objectCompare (const GALGAS_uintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @uintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint64list-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_list_2D_element ("uint64list-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list_2D_element result ;
  const GALGAS_uint_36__34_list_2D_element * p = (const GALGAS_uint_36__34_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::GALGAS_uint_36__34_list_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::~ GALGAS_uint_36__34_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::GALGAS_uint_36__34_list_2D_element (const GALGAS_uint_36__34_ & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_36__34_list_2D_element (GALGAS_uint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::constructor_new (const GALGAS_uint_36__34_ & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uint_36__34_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_36__34_list_2D_element::objectCompare (const GALGAS_uint_36__34_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_36__34_list_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint64list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_list_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @bigintlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintlist_2D_element ("bigintlist-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element GALGAS_bigintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bigintlist_2D_element result ;
  const GALGAS_bigintlist_2D_element * p = (const GALGAS_bigintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element::GALGAS_bigintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element::~ GALGAS_bigintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element::GALGAS_bigintlist_2D_element (const GALGAS_bigint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element GALGAS_bigintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bigintlist_2D_element (GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintlist_2D_element GALGAS_bigintlist_2D_element::constructor_new (const GALGAS_bigint & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_bigintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bigintlist_2D_element::objectCompare (const GALGAS_bigintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bigintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigintlist_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @bigintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @2stringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_stringlist_2D_element ("2stringlist-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_stringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_stringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_stringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist_2D_element result ;
  const GALGAS__32_stringlist_2D_element * p = (const GALGAS__32_stringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_stringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::GALGAS__32_stringlist_2D_element (void) :
mAttribute_mValue_30_ (),
mAttribute_mValue_31_ () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::~ GALGAS__32_stringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::GALGAS__32_stringlist_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1) :
mAttribute_mValue_30_ (inOperand0),
mAttribute_mValue_31_ (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_stringlist_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_stringlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_stringlist_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_stringlist_2D_element::objectCompare (const GALGAS__32_stringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue_30_.objectCompare (inOperand.mAttribute_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue_31_.objectCompare (inOperand.mAttribute_mValue_31_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS__32_stringlist_2D_element::isValid (void) const {
  return mAttribute_mValue_30_.isValid () && mAttribute_mValue_31_.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist_2D_element::drop (void) {
  mAttribute_mValue_30_.drop () ;
  mAttribute_mValue_31_.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @2stringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue_30_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist_2D_element::getter_mValue_30_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist_2D_element::getter_mValue_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_31_ ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lstring type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstring ("lstring",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstring::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstring ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstring::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstring (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
  const GALGAS_lstring * p = (const GALGAS_lstring *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstring *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstring", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::GALGAS_lstring (void) :
mAttribute_string (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::~ GALGAS_lstring (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::GALGAS_lstring (const GALGAS_string & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_string (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstring (GALGAS_string::constructor_default (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::constructor_new (const GALGAS_string & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lstring (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstring::objectCompare (const GALGAS_lstring & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_string.objectCompare (inOperand.mAttribute_string) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstring::isValid (void) const {
  return mAttribute_string.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstring::drop (void) {
  mAttribute_string.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstring::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @lstring:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_string.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lstring::getter_string (UNUSED_LOCATION_ARGS) const {
  return mAttribute_string ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lstring::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @luint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luint ("luint",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_luint result ;
  const GALGAS_luint * p = (const GALGAS_luint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::GALGAS_luint (void) :
mAttribute_uint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::~ GALGAS_luint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::GALGAS_luint (const GALGAS_uint & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_uint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luint (GALGAS_uint::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::constructor_new (const GALGAS_uint & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_luint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luint::objectCompare (const GALGAS_luint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_uint.objectCompare (inOperand.mAttribute_uint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luint::isValid (void) const {
  return mAttribute_uint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint::drop (void) {
  mAttribute_uint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @luint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_uint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_luint::getter_uint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_uint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_luint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lsint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lsint ("lsint",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lsint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lsint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lsint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lsint result ;
  const GALGAS_lsint * p = (const GALGAS_lsint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lsint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::GALGAS_lsint (void) :
mAttribute_sint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::~ GALGAS_lsint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::GALGAS_lsint (const GALGAS_sint & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_sint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lsint (GALGAS_sint::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::constructor_new (const GALGAS_sint & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lsint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lsint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lsint::objectCompare (const GALGAS_lsint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_sint.objectCompare (inOperand.mAttribute_sint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lsint::isValid (void) const {
  return mAttribute_sint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint::drop (void) {
  mAttribute_sint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lsint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_sint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_lsint::getter_sint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_sint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lsint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @luint64 type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luint_36__34_ ("luint64",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_luint_36__34_ result ;
  const GALGAS_luint_36__34_ * p = (const GALGAS_luint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::GALGAS_luint_36__34_ (void) :
mAttribute_uint_36__34_ (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::~ GALGAS_luint_36__34_ (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::GALGAS_luint_36__34_ (const GALGAS_uint_36__34_ & inOperand0,
                                            const GALGAS_location & inOperand1) :
mAttribute_uint_36__34_ (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luint_36__34_ (GALGAS_uint_36__34_::constructor_default (HERE),
                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::constructor_new (const GALGAS_uint_36__34_ & inOperand0,
                                                            const GALGAS_location & inOperand1 
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luint_36__34_ result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_luint_36__34_ (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luint_36__34_::objectCompare (const GALGAS_luint_36__34_ & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_uint_36__34_.objectCompare (inOperand.mAttribute_uint_36__34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luint_36__34_::isValid (void) const {
  return mAttribute_uint_36__34_.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint_36__34_::drop (void) {
  mAttribute_uint_36__34_.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint_36__34_::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<struct @luint64:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_uint_36__34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_luint_36__34_::getter_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_uint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_luint_36__34_::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lsint64 type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lsint_36__34_ ("lsint64",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lsint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lsint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lsint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lsint_36__34_ result ;
  const GALGAS_lsint_36__34_ * p = (const GALGAS_lsint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lsint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::GALGAS_lsint_36__34_ (void) :
mAttribute_sint_36__34_ (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::~ GALGAS_lsint_36__34_ (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::GALGAS_lsint_36__34_ (const GALGAS_sint_36__34_ & inOperand0,
                                            const GALGAS_location & inOperand1) :
mAttribute_sint_36__34_ (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lsint_36__34_ (GALGAS_sint_36__34_::constructor_default (HERE),
                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::constructor_new (const GALGAS_sint_36__34_ & inOperand0,
                                                            const GALGAS_location & inOperand1 
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lsint_36__34_ result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lsint_36__34_ (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lsint_36__34_::objectCompare (const GALGAS_lsint_36__34_ & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_sint_36__34_.objectCompare (inOperand.mAttribute_sint_36__34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lsint_36__34_::isValid (void) const {
  return mAttribute_sint_36__34_.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint_36__34_::drop (void) {
  mAttribute_sint_36__34_.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint_36__34_::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<struct @lsint64:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_sint_36__34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_lsint_36__34_::getter_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_sint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lsint_36__34_::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lchar type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lchar ("lchar",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lchar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lchar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lchar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lchar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lchar result ;
  const GALGAS_lchar * p = (const GALGAS_lchar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lchar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lchar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::GALGAS_lchar (void) :
mAttribute_char (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::~ GALGAS_lchar (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::GALGAS_lchar (const GALGAS_char & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_char (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lchar (GALGAS_char::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::constructor_new (const GALGAS_char & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lchar result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lchar (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lchar::objectCompare (const GALGAS_lchar & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_char.objectCompare (inOperand.mAttribute_char) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lchar::isValid (void) const {
  return mAttribute_char.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lchar::drop (void) {
  mAttribute_char.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lchar::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lchar:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_char.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_lchar::getter_char (UNUSED_LOCATION_ARGS) const {
  return mAttribute_char ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lchar::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @ldouble type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ldouble ("ldouble",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ldouble::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ldouble ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ldouble::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ldouble (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_ldouble result ;
  const GALGAS_ldouble * p = (const GALGAS_ldouble *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ldouble *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ldouble", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::GALGAS_ldouble (void) :
mAttribute_double (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::~ GALGAS_ldouble (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::GALGAS_ldouble (const GALGAS_double & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_double (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ldouble (GALGAS_double::constructor_default (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::constructor_new (const GALGAS_double & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ldouble result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ldouble (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ldouble::objectCompare (const GALGAS_ldouble & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_double.objectCompare (inOperand.mAttribute_double) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ldouble::isValid (void) const {
  return mAttribute_double.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ldouble::drop (void) {
  mAttribute_double.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ldouble::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @ldouble:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_double.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_ldouble::getter_double (UNUSED_LOCATION_ARGS) const {
  return mAttribute_double ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ldouble::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lbigint type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbigint ("lbigint",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbigint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbigint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lbigint result ;
  const GALGAS_lbigint * p = (const GALGAS_lbigint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::GALGAS_lbigint (void) :
mAttribute_bigint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::~ GALGAS_lbigint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::GALGAS_lbigint (const GALGAS_bigint & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_bigint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbigint (GALGAS_bigint::constructor_zero (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::constructor_new (const GALGAS_bigint & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lbigint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbigint::objectCompare (const GALGAS_lbigint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_bigint.objectCompare (inOperand.mAttribute_bigint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lbigint::isValid (void) const {
  return mAttribute_bigint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigint::drop (void) {
  mAttribute_bigint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigint::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @lbigint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_bigint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_lbigint::getter_bigint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_bigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lbigint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @luintlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luintlist_2D_element ("luintlist-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_luintlist_2D_element result ;
  const GALGAS_luintlist_2D_element * p = (const GALGAS_luintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::GALGAS_luintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::~ GALGAS_luintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::GALGAS_luintlist_2D_element (const GALGAS_luint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luintlist_2D_element (GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::constructor_new (const GALGAS_luint & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_luintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luintlist_2D_element::objectCompare (const GALGAS_luintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @luintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lstringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringlist_2D_element ("lstringlist-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist_2D_element result ;
  const GALGAS_lstringlist_2D_element * p = (const GALGAS_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::GALGAS_lstringlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::~ GALGAS_lstringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::GALGAS_lstringlist_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringlist_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lstringlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstringlist_2D_element::objectCompare (const GALGAS_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstringlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lstringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lbigintlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbigintlist_2D_element ("lbigintlist-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbigintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbigintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbigintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element GALGAS_lbigintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lbigintlist_2D_element result ;
  const GALGAS_lbigintlist_2D_element * p = (const GALGAS_lbigintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbigintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element::GALGAS_lbigintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element::~ GALGAS_lbigintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element::GALGAS_lbigintlist_2D_element (const GALGAS_lbigint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element GALGAS_lbigintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbigintlist_2D_element (GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigintlist_2D_element GALGAS_lbigintlist_2D_element::constructor_new (const GALGAS_lbigint & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lbigintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbigintlist_2D_element::objectCompare (const GALGAS_lbigintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lbigintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigintlist_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lbigintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @2lstringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mAttribute_mValue_30_ (),
mAttribute_mValue_31_ () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mValue_30_ (inOperand0),
mAttribute_mValue_31_ (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue_30_.objectCompare (inOperand.mAttribute_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue_31_.objectCompare (inOperand.mAttribute_mValue_31_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mAttribute_mValue_30_.isValid () && mAttribute_mValue_31_.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mAttribute_mValue_30_.drop () ;
  mAttribute_mValue_31_.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @2lstringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue_30_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist_2D_element::getter_mValue_30_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist_2D_element::getter_mValue_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_31_ ;
}



//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
